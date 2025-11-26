# picoruby-m5unified 実装進捗表

## 概要

このプロジェクトは、M5StackデバイスをPicoRubyから制御するためのmruby/c拡張ライブラリです。

## ファイル構成 (2025-11-26時点)

### 完了: ファイル分割とスケルトンコード作成

元の巨大なファイル (`m5unified_impl.c` - 4899行, 179メソッド) を機能別に9つのファイルに分割し、mruby/c形式のスケルトンコードを作成しました。

| ファイル名 | メソッド数 | 状態 | 説明 |
|-----------|----------|------|------|
| **m5unified_impl.h** | - | ✅ 完了 | 共通ヘッダーファイル、全関数宣言 |
| **m5unified_core.c** | 19 | ✅ スケルトン完了 | M5本体の制御メソッド |
| **m5gfx_color.c** | 12 | ✅ スケルトン完了 | 色管理・変換メソッド |
| **m5gfx_draw.c** | 30 | ✅ スケルトン完了 | 基本図形描画メソッド |
| **m5gfx_fill.c** | 13 | ✅ スケルトン完了 | 塗りつぶしメソッド |
| **m5gfx_text.c** | 31 | ✅ スケルトン完了 | テキスト・フォントメソッド |
| **m5gfx_image.c** | 13 | ✅ スケルトン完了 | 画像・ピクセル操作メソッド |
| **m5gfx_display.c** | 29 | ✅ スケルトン完了 | ディスプレイ制御メソッド |
| **m5gfx_lowlevel.c** | 18 | ✅ スケルトン完了 | 低レベル描画メソッド |
| **m5gfx_util.c** | 13 | ✅ スケルトン完了 | ユーティリティメソッド |
| **m5unified.c** | - | ✅ 完了 | メイン初期化ファイル |

**合計メソッド数**: 178

## 実装状況の詳細

### ✅ 完了した作業

1. **ファイル分割設計** - 機能別に9カテゴリに分類
2. **共通ヘッダー作成** - 全メソッドの関数宣言
3. **mruby/c形式への変換** - 全メソッドのシグネチャをmruby/c形式に変更:
   - `mrb_state *mrb, mrb_value self` → `mrbc_vm *vm, mrbc_value *v, int argc`
4. **スケルトンコード作成** - 全メソッドに`TODO`コメント付きスタブ実装
5. **初期化関数作成** - 各ファイルごとの初期化関数とメイン初期化関数

### 🔨 次のステップ (実装が必要)

各メソッドのスケルトンに実際のC++呼び出しを実装する必要があります:

#### 優先度 高 (基本機能)

1. **m5unified_core.c**
   - [ ] `M5.update()` - M5本体の更新処理
   - [ ] `M5.get_display()` - ディスプレイオブジェクトの取得
   - [ ] `M5.get_board()` - ボード種別の取得

2. **m5gfx_display.c**
   - [ ] `width()` / `height()` - 画面サイズ取得
   - [ ] `set_rotation()` - 画面回転設定
   - [ ] `clear()` / `clear_display()` - 画面クリア

3. **m5gfx_color.c**
   - [ ] `set_color()` - 描画色設定
   - [ ] `color*` 変換メソッド

4. **m5gfx_draw.c**
   - [ ] `draw_pixel()` - ピクセル描画
   - [ ] `draw_rect()` / `fill_rect()` - 矩形描画
   - [ ] `draw_circle()` / `fill_circle()` - 円描画
   - [ ] `draw_line()` - 線描画

5. **m5gfx_text.c**
   - [ ] `print()` / `println()` - テキスト出力
   - [ ] `set_cursor()` - カーソル位置設定
   - [ ] `set_text_size()` - テキストサイズ設定

#### 優先度 中

6. **m5gfx_fill.c** - 全塗りつぶしメソッド
7. **m5gfx_lowlevel.c** - トランザクション・低レベル描画
8. **m5gfx_image.c** - 画像描画・ピクセル操作

#### 優先度 低

9. **m5gfx_util.c** - QRコード、PNG生成など

## 実装方針

### mruby/c APIの使い方

#### パラメータ取得例
```c
void c_m5_gfx_draw_pixel(mrbc_vm *vm, mrbc_value *v, int argc)
{
    // 引数を取得
    int x = GET_INT_ARG(1);
    int y = GET_INT_ARG(2);
    uint32_t color = GET_INT_ARG(3);

    // C++メソッド呼び出し (TODO: M5GFXオブジェクトの取得方法を決定)
    // M5.Display.drawPixel(x, y, color);

    SET_NIL_RETURN();
}
```

#### 戻り値設定例
```c
// 整数を返す
SET_INT_RETURN(value);

// 真偽値を返す
SET_TRUE_RETURN();
SET_FALSE_RETURN();

// nilを返す
SET_NIL_RETURN();

// 文字列を返す
SET_STRING_RETURN(str, len);
```

### TODO項目

1. **C++オブジェクトの管理**
   - M5Unifiedシングルトンへのアクセス方法
   - M5GFXオブジェクトのラッピング方法
   - オブジェクトのライフサイクル管理

2. **データ型の変換**
   - Rubyの数値 ↔ C++の各種整数型
   - Rubyの文字列 ↔ C++の文字列
   - Rubyの配列 ↔ C++の配列/ポインタ

3. **エラーハンドリング**
   - C++例外のキャッチとRubyエラーへの変換

## ビルド設定 (TODO)

各`.c`ファイルをMakefileまたはCMakeに追加する必要があります:

```makefile
SRCS += \
    ports/esp32/m5unified_core.c \
    ports/esp32/m5gfx_color.c \
    ports/esp32/m5gfx_draw.c \
    ports/esp32/m5gfx_fill.c \
    ports/esp32/m5gfx_text.c \
    ports/esp32/m5gfx_image.c \
    ports/esp32/m5gfx_display.c \
    ports/esp32/m5gfx_lowlevel.c \
    ports/esp32/m5gfx_util.c \
    src/mrubyc/m5unified.c
```

## 参考資料

- [M5Unified GitHub](https://github.com/m5stack/M5Unified)
- [M5GFX Documentation](https://github.com/m5stack/M5GFX)
- [mruby/c Documentation](https://github.com/mrubyc/mrubyc)
- [PicoRuby](https://github.com/picoruby/picoruby)

---

最終更新: 2025-11-26
状態: ファイル分割完了、スケルトンコード作成完了、実装待ち
