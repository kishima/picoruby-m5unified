# 作業方針・目的・ゴール

## 📋 作業の目的

M5UnifiedとM5GFXライブラリの**外部公開API（publicメソッド）**をすべて抽出し、構造化されたYAML形式で出力することで、API一覧を機械可読な形式で提供する。

## 🎯 ゴール

### 主要ゴール
1. **`tool/make_function_table.rb`の実装**
   - C++ヘッダーファイルをパースするRubyスクリプト
   - M5UnifiedとM5GFXの公開メソッドを自動抽出

2. **YAML形式での出力**
   - 関数名
   - 戻り値の型
   - 引数（型と名前）
   - 修飾子（const/static等）

### 出力イメージ
```yaml
classes:
  - name: M5Unified
    namespace: m5
    methods:
      - name: begin
        return_type: void
        parameters:
          - type: config_t
            name: cfg
        modifiers: []
      - name: update
        return_type: void
        parameters: []
      - name: getBoard
        return_type: board_t
        parameters: []
        modifiers: [const]

  - name: LGFX_Device (M5GFX base)
    namespace: lgfx
    methods:
      - name: drawPixel
        return_type: void
        parameters:
          - type: int32_t
            name: x
          - type: int32_t
            name: y
      - name: fillRect
        return_type: void
        parameters:
          - type: int32_t
            name: x
          - type: int32_t
            name: y
          - type: int32_t
            name: w
          - type: int32_t
            name: h
```

## 🔧 作業方針

### 1. 対象ファイル
- **M5Unified**: `components/M5Unified/src/M5Unified.hpp`
- **M5GFX (LGFX)**: `components/M5GFX/src/lgfx/v1/LGFXBase.hpp`

### 2. 実装アプローチ

#### Phase 1: ヘッダーファイル解析
- `public:`セクションを正規表現で抽出
- クラス定義の検出
- 名前空間の特定

#### Phase 2: メソッドパース
```ruby
# 正規表現パターン例
METHOD_PATTERN = /^\s*(static\s+)?(virtual\s+)?(\w+(?:::\w+)*(?:<[^>]+>)?)\s+(\w+)\s*\(([^)]*)\)\s*(const)?/
```

抽出情報:
- 修飾子: `static`, `virtual`
- 戻り値の型: `void`, `bool`, `int32_t`, カスタム型等
- 関数名
- 引数リスト: 型と名前のペア
- const修飾子

#### Phase 3: YAML生成
- Rubyの`YAML`ライブラリを使用
- 階層構造でクラスごとにメソッドを整理

### 3. 除外対象
- `private:` / `protected:` セクション
- テンプレート関数（`template<typename T>`）は簡略化
- マクロ定義
- コンストラクタ/デストラクタ（オプション）
- inline関数本体

### 4. 出力仕様（標準版）

各メソッドに含める情報:
- ✅ 関数名
- ✅ 戻り値の型
- ✅ 引数の型と名前
- ✅ const/static修飾子
- ❌ デフォルト引数の値（複雑なため除外可能）
- ❌ コメント/ドキュメント（標準版では除外）

## 📊 期待される成果物

1. **実行可能スクリプト**: `tool/make_function_table.rb`
2. **出力ファイル**: `m5unified_api.yaml`（または標準出力）
3. **ドキュメント**: スクリプトの使い方（README的なコメント）

## 🚀 実行方法

```bash
cd /home/kishima/dev/kishima/R2P2-ESP32
ruby tool/make_function_table.rb > m5unified_api.yaml
```

または

```bash
ruby tool/make_function_table.rb -o m5unified_api.yaml
```

## 📌 実装計画詳細

### スクリプト機能
- C++ヘッダーファイルのパース
- `public:`セクションからメソッド定義を抽出
- YAML形式で構造化して出力
- ファイル出力機能（デフォルト: `m5unified_api.yaml`）

### コマンドライン引数
```bash
ruby tool/make_function_table.rb                    # 標準出力
ruby tool/make_function_table.rb -o output.yaml     # ファイル出力
ruby tool/make_function_table.rb --output api.yaml  # 同上
```

### 処理フロー

#### 1. ファイル読み込み
```ruby
SCRIPT_DIR = File.dirname(__FILE__)
PROJECT_ROOT = File.expand_path('..', SCRIPT_DIR)

files = [
  "#{PROJECT_ROOT}/components/M5Unified/src/M5Unified.hpp",
  "#{PROJECT_ROOT}/components/M5GFX/src/lgfx/v1/LGFXBase.hpp"
]
```

#### 2. パース処理
- クラス名の検出: `class ClassName`
- 名前空間の検出: `namespace xxx { ... }`
- `public:`セクションの抽出
- メソッドシグネチャのパース

#### 3. YAML生成
```ruby
require 'yaml'

output = {
  'generated_at' => Time.now.to_s,
  'source_files' => files.map { |f| File.basename(f) },
  'classes' => classes_data
}
```

### 出力YAML形式例

```yaml
generated_at: "2025-10-29 08:45:00 +0900"
source_files:
  - M5Unified.hpp
  - LGFXBase.hpp
classes:
  - name: M5Unified
    namespace: m5
    file: M5Unified.hpp
    methods:
      - name: begin
        return_type: void
        parameters:
          - type: config_t
            name: cfg
        modifiers: []
        line: 215
      - name: update
        return_type: void
        parameters: []
        modifiers: []
        line: 220

  - name: LGFXBase
    namespace: lgfx::v1
    file: LGFXBase.hpp
    methods:
      - name: drawPixel
        return_type: void
        parameters:
          - type: int32_t
            name: x
          - type: int32_t
            name: y
        modifiers: []
        line: 162
```

### 処理対象・除外対象

#### 抽出対象
- ✅ public メソッド
- ✅ static メソッド
- ✅ const メソッド
- ✅ 通常の引数（型と名前）
- ✅ オーバーロード（複数エントリとして記録）

#### 除外対象
- ❌ private/protected メンバー
- ❌ テンプレート関数（`template<typename T>`）
- ❌ マクロ定義
- ❌ コンストラクタ/デストラクタ
- ❌ operator関数
- ❌ inline関数本体
- ❌ コメント内容

### エラーハンドリング
- ファイルが存在しない場合: エラーメッセージを表示して終了
- 書き込み権限がない場合: エラーメッセージを表示
- パースエラー: 警告を出力して続行

---

## 📝 実装状況

- ✅ プロジェクト計画作成
- ⏳ スクリプト実装中
- ⏳ テスト実行待ち
