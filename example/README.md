# M5Unified PicoRuby Examples

このディレクトリには、PicoRuby用のM5Unified拡張の使用例が含まれています。

## 実行方法

```bash
# プロジェクトルートで
rake build
rake flash
rake monitor
```

## サンプルファイル

### 1. basic_display.rb
基本的なディスプレイ使用例です。
- 画面クリア
- 図形描画（矩形、円、線）
- ボタン入力

**対応デバイス**: 全てのM5Stackデバイス

### 2. text_display.rb
テキスト表示の例です。
- 複数サイズのテキスト
- カラー設定
- カーソル位置指定
- カウンター表示

**対応デバイス**: 全てのM5Stackデバイス

### 3. touch_drawing.rb
タッチスクリーンでのお絵描きアプリです。
- タッチ入力検出
- ドラッグで線を描画
- ボタンで色変更とクリア

**対応デバイス**: M5Stack Core2, CoreS3, その他タッチスクリーン搭載機種

### 4. animation.rb
アニメーションの例です。
- ボールの跳ね返りアニメーション
- トレイル効果
- ボタンで速度制御

**対応デバイス**: 全てのM5Stackデバイス

## API概要

### M5モジュール

```ruby
# 初期化
cfg = M5.config_t()
M5.begin(cfg)

# メインループで呼び出し
M5.update()

# ボタン取得
button = M5.get_button(0)  # 0: Button A, 1: Button B, 2: Button C
if button.was_pressed()
  # ボタンが押された
end

# 更新間隔取得
msec = M5.get_update_msec()
```

### M5.Display (M5Gfxクラス)

```ruby
# 描画開始/終了
M5.Display.start_write()
# ... 描画処理 ...
M5.Display.end_write()

# 画面クリア
M5.Display.fill_screen(color)  # color: RGB565形式 (0x0000-0xFFFF)

# 図形描画
M5.Display.draw_pixel(x, y, color)
M5.Display.draw_line(x0, y0, x1, y1, color)
M5.Display.draw_rect(x, y, w, h, color)
M5.Display.fill_rect(x, y, w, h, color)
M5.Display.draw_circle(x, y, radius, color)
M5.Display.fill_circle(x, y, radius, color)

# テキスト描画
M5.Display.set_text_size(size)
M5.Display.set_text_color(fg_color, bg_color)
M5.Display.set_cursor(x, y, font)
M5.Display.print(text)

# ディスプレイ情報
width = M5.Display.width()
height = M5.Display.height()
```

### M5.Touch

```ruby
# タッチ有効チェック
if M5.Touch.is_enabled()
  # タッチ詳細情報取得
  detail = M5.Touch.get_detail()

  if detail.is_pressed()
    x = detail.x()
    y = detail.y()
    # タッチ処理
  end
end
```

## カラーフォーマット (RGB565)

RGB565形式では、16ビットで色を表現します：
- 赤: 5ビット (0-31)
- 緑: 6ビット (0-63)
- 青: 5ビット (0-31)

### よく使う色

```ruby
BLACK   = 0x0000
WHITE   = 0xFFFF
RED     = 0xF800
GREEN   = 0x07E0
BLUE    = 0x001F
YELLOW  = 0xFFE0
CYAN    = 0x07FF
MAGENTA = 0xF81F
```

## トラブルシューティング

### 画面が表示されない
- `M5.begin(cfg)`が呼ばれているか確認
- `start_write()`と`end_write()`でペアになっているか確認

### タッチが反応しない
- デバイスがタッチスクリーン対応か確認
- `M5.Touch.is_enabled()`でタッチが有効か確認

### 描画が遅い
- `start_write()`/`end_write()`でまとめて描画
- 不要な`fill_screen()`を減らす

## 参考リンク

- [M5Unified GitHub](https://github.com/m5stack/M5Unified)
- [M5GFX GitHub](https://github.com/m5stack/M5GFX)
- [PicoRuby](https://github.com/picoruby/picoruby)
