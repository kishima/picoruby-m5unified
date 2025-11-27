# 全メソッド実装進捗表

最終更新: 2025-11-27

## 凡例

### 状態
- ⬜ 未実装（スケルトンのみ）
- 🔨 実装中
- ✅ 実装完了
- ⚠️ 一部実装/要修正

### 優先度
- 高
- 中
- 低
- skip

---

## M5Unified Core (20メソッド) - `m5unified_core.cpp`

| # | メソッド名 | 状態 | 優先度 | 備考 |
|---|-----------|------|--------|------|
| 0 | begin | ✅ | 高 | M5Unified初期化 |
| 1 | Display | ✅ | 高 | M5GFXインスタンスを返す |
| 2 | get_pin | ✅ | 中 | ピン番号取得 |
| 3 | get_button | ✅ | 中 | Button_Class参照を返す(簡易実装) |
| 4 | get_display | ✅ | 高 | M5GFX参照を返す |
| 5 | get_display_count | ✅ | 低 | ディスプレイ数取得 |
| 6 | add_display | ✅ | 低 | ディスプレイ追加(簡易実装) |
| 7 | get_display_index | ✅ | 低 | ディスプレイインデックス取得(簡易実装) |
| 8 | set_primary_display | ✅ | 低 | プライマリディスプレイ設定 |
| 9 | set_primary_display_type | ✅ | 低 | プライマリディスプレイタイプ設定 |
| 10 | set_log_display_index | ✅ | 低 | ログディスプレイインデックス設定 |
| 11 | set_log_display_type | ✅ | 低 | ログディスプレイタイプ設定 |
| 12 | get_update_msec | ✅ | 低 | 更新間隔取得 |
| 13 | config_t | ✅ | 中 | 設定構造体を返す(簡易実装) |
| 14 | get_board | ✅ | 中 | ボード種別を返す |
| 15 | update | ✅ | 高 | M5本体の更新処理 |
| 16 | dsp | ✅ | 低 | DSP処理(簡易実装) |
| 17 | set_touch_button_height_by_ratio | ✅ | 低 | タッチボタン高さ比率設定 |
| 18 | set_touch_button_height | ✅ | 低 | タッチボタン高さ設定 |
| 19 | get_touch_button_height | ✅ | 低 | タッチボタン高さ取得 |
| 20 | get_io_expander | ✅ | 低 | IOエクスパンダ取得(簡易実装) |

**進捗: 20/20 (100%)** ✅ 全て実装完了！

---

## M5GFX Color (12メソッド) - `m5gfx_color.c`

| # | メソッド名 | 状態 | 優先度 | 備考 |
|---|-----------|------|--------|------|
| 20 | color16to8 | ⬜ | 中 | 色変換 |
| 21 | color8to16 | ⬜ | 中 | 色変換 |
| 22 | color16to24 | ✅ | 中 | 色変換 |
| 23 | color24to16 | ✅ | 中 | 色変換 |
| 24 | set_color | ✅ | 高 | RGB色設定 |
| 25 | set_raw_color | ⬜ | 中 | |
| 26 | get_raw_color | ⬜ | 中 | |
| 27 | set_base_color | ⬜ | 中 | |
| 28 | get_base_color | ⬜ | 中 | |
| 29 | get_palette | ⬜ | 低 | |
| 30 | get_palette_count | ⬜ | 低 | |
| 31 | has_palette | ⬜ | 低 | |

**進捗: 3/12 (25%)**

---

## M5GFX Draw (30メソッド) - `m5gfx_draw.c`

| # | メソッド名 | 状態 | 優先度 | 備考 |
|---|-----------|------|--------|------|
| 32 | draw_pixel | ✅ | 高 | 基本描画 |
| 33 | draw_fast_v_line | 中 | 中 | |
| 34 | draw_fast_h_line | 中 | 中 | |
| 35 | draw_rect | ✅ | 高 | 矩形描画 |
| 36 | draw_round_rect | 中 | 中 | |
| 37 | draw_circle | ✅ | 高 | 円描画 |
| 38 | draw_ellipse | ⬜ | 中 | |
| 39 | draw_line | ✅ | 高 | 線描画 |
| 40 | draw_triangle | ⬜ | 中 | |
| 41 | draw_bezier | ⬜ | 中 | |
| 42 | draw_ellipse_arc | ⬜ | 中 | |
| 43 | draw_arc | ⬜ | 中 | |
| 44 | draw_circle_helper | ⬜ | 中 | |
| 45 | draw_gradient_h_line | ⬜ | 中 | |
| 46 | draw_gradient_v_line | ⬜ | 中 | |
| 47 | draw_gradient_line | ⬜ | 中 | |
| 48 | draw_smooth_line | ⬜ | 中 | |
| 49 | draw_wide_line | ⬜ | 中 | |
| 50 | draw_wedge_line | ⬜ | 中 | |
| 51 | draw_spot | ⬜ | 中 | |
| 52 | draw_gradient_spot | ⬜ | 中 | |
| 53 | draw_bitmap | ⬜ | 中 | |
| 54 | draw_x_bitmap | ⬜ | 中 | |
| 55 | draw_string | ✅ | 高 | テキスト描画 |
| 56 | draw_number | ✅ | 高 | 数値描画 |
| 57 | draw_float | ⬜ | 中 | |
| 58 | draw_centre_string | ⬜ | 中 | |
| 59 | draw_center_string | ⬜ | 中 | |
| 60 | draw_right_string | ⬜ | 中 | |
| 61 | draw_char | ⬜ | 中 | |

**進捗: 6/30 (20%)**

---

## M5GFX Fill (13メソッド) - `m5gfx_fill.c`

| # | メソッド名 | 状態 | 優先度 | 備考 |
|---|-----------|------|--------|------|
| 62 | fill_rect | ✅ | 高 | 矩形塗りつぶし |
| 63 | fill_round_rect | ⬜ | 中 | |
| 64 | fill_circle | ✅ | 高 | 円塗りつぶし |
| 65 | fill_ellipse | ⬜ | 中 | |
| 66 | fill_triangle | ⬜ | 中 | |
| 67 | fill_ellipse_arc | ⬜ | 低 | |
| 68 | fill_arc | ⬜ | 低 | |
| 69 | fill_circle_helper | ⬜ | 低 | |
| 70 | fill_affine | ⬜ | 低 | |
| 71 | fill_gradient_rect | ⬜ | 低 | |
| 72 | fill_smooth_round_rect | ⬜ | 低 | |
| 73 | fill_smooth_circle | ⬜ | 低 | |
| 74 | fill_screen | ✅ | 高 | 画面全体塗りつぶし |

**進捗: 3/13 (23%)**

---

## M5GFX Text (31メソッド) - `m5gfx_text.c`

| # | メソッド名 | 状態 | 優先度 | 備考 |
|---|-----------|------|--------|------|
| 75 | set_cursor | ✅ | 高 | カーソル位置設定 |
| 76 | get_cursor_x | ✅ | 中 | |
| 77 | get_cursor_y | ✅ | 中 | |
| 78 | set_text_style | ⬜ | 中 | |
| 79 | set_text_size | ✅ | 高 | テキストサイズ |
| 80 | get_text_size_x | ⬜ | 中 | |
| 81 | get_text_size_y | ⬜ | 中 | |
| 82 | set_text_datum | ⬜ | 中 | |
| 83 | get_text_datum | ⬜ | 低 | |
| 84 | set_text_padding | ⬜ | 低 | |
| 85 | get_text_padding | ⬜ | 低 | |
| 86 | set_text_wrap | ⬜ | 中 | |
| 87 | set_text_scroll | ⬜ | 低 | |
| 88 | set_text_color | ✅ | 高 | テキスト色 |
| 89 | font_height | ⬜ | 中 | |
| 90 | font_width | ⬜ | 中 | |
| 91 | text_length | ⬜ | 低 | |
| 92 | text_width | ⬜ | 低 | |
| 93 | set_text_font | ⬜ | 中 | |
| 94 | set_free_font | ⬜ | 低 | |
| 95 | set_font | ⬜ | 中 | |
| 96 | load_font | ⬜ | 低 | |
| 97 | load_font_with_path | ⬜ | 低 | |
| 98 | unload_font | ⬜ | 低 | |
| 99 | show_font | ⬜ | 低 | |
| 100 | print | ✅ | 高 | テキスト出力 |
| 101 | print_number | ✅ | 高 | 数値出力 |
| 102 | println | ✅ | 高 | 改行付き出力 |
| 103 | write | ⬜ | 中 | |
| 104 | printf | ✅ | 高 | フォーマット出力 |
| 105 | vprintf | ⬜ | 低 | |

**進捗: 9/31 (29%)**

---

## M5GFX Image (13メソッド) - `m5gfx_image.c`

| # | メソッド名 | 状態 | 優先度 | 備考 |
|---|-----------|------|--------|------|
| 106 | push_image | ⬜ | 中 | 画像描画 |
| 107 | push_grayscale_image | ⬜ | 低 | |
| 108 | push_grayscale_image_rotate_zoom | ⬜ | 低 | |
| 109 | push_grayscale_image_affine | ⬜ | 低 | |
| 110 | push_alpha_image | ⬜ | 低 | |
| 111 | push_block | ⬜ | 中 | |
| 112 | push_pixels | ⬜ | 中 | |
| 113 | push_pixels_dma | ⬜ | 低 | |
| 114 | read_rect_rgb | ⬜ | 低 | |
| 115 | read_rect | ⬜ | 低 | |
| 116 | p | ⬜ | 低 | |
| 117 | copy_rect | ✅ | 中 | |
| 118 | scroll | ✅ | 低 | |

**進捗: 2/13 (15%)**

---

## M5GFX Display (29メソッド) - `m5gfx_display.c`

| # | メソッド名 | 状態 | 優先度 | 備考 |
|---|-----------|------|--------|------|
| 119 | get_rotation | ✅ | 中 | |
| 120 | set_rotation | ✅ | 高 | 画面回転 |
| 121 | get_color_depth | ✅ | 中 | |
| 122 | set_color_depth | ✅ | 中 | |
| 123 | get_color_converter | ⬜ | 低 | |
| 124 | width | ✅ | 高 | 画面幅 |
| 125 | height | ✅ | 高 | 画面高さ |
| 126 | set_pivot | ⬜ | 低 | |
| 127 | get_pivot_x | ⬜ | 低 | |
| 128 | get_pivot_y | ⬜ | 低 | |
| 129 | set_clip_rect | ⬜ | 中 | |
| 130 | get_clip_rect | ⬜ | 低 | |
| 131 | clear_clip_rect | ⬜ | 低 | |
| 132 | set_scroll_rect | ⬜ | 低 | |
| 133 | get_scroll_rect | ⬜ | 低 | |
| 134 | clear_scroll_rect | ⬜ | 低 | |
| 135 | clear | ✅ | 高 | 画面クリア |
| 136 | clear_display | ✅ | 高 | |
| 137 | display | ✅ | 中 | |
| 138 | wait_display | ⬜ | 低 | |
| 139 | display_busy | ⬜ | 低 | |
| 140 | set_auto_display | ⬜ | 低 | |
| 141 | get_swap_bytes | ⬜ | 低 | |
| 142 | set_swap_bytes | ⬜ | 低 | |
| 143 | is_readable | ⬜ | 低 | |
| 144 | is_epd | ⬜ | 低 | |
| 145 | is_bus_shared | ⬜ | 低 | |
| 146 | is_spi_shared | ⬜ | 低 | |
| 147 | get_scan_line | ⬜ | 低 | |

**進捗: 9/29 (31%)**

---

## M5GFX Low-level (18メソッド) - `m5gfx_lowlevel.c`

| # | メソッド名 | 状態 | 優先度 | 備考 |
|---|-----------|------|--------|------|
| 148 | start_write | ✅ | 高 | トランザクション開始 |
| 149 | end_write | ✅ | 高 | トランザクション終了 |
| 150 | begin_transaction | ✅ | 中 | |
| 151 | end_transaction | ✅ | 中 | |
| 152 | get_start_count | ⬜ | 低 | |
| 153 | set_window | ⬜ | 中 | |
| 154 | set_addr_window | ⬜ | 中 | |
| 155 | write_pixel | ⬜ | 中 | |
| 156 | write_fast_v_line | ⬜ | 低 | |
| 157 | write_fast_h_line | ⬜ | 低 | |
| 158 | write_fill_rect | ⬜ | 中 | |
| 159 | write_fill_rect_preclipped | ⬜ | 低 | |
| 160 | write_color | ⬜ | 中 | |
| 161 | write_pixels | ⬜ | 中 | |
| 162 | write_pixels_dma | ⬜ | skip | |
| 163 | init_dma | ⬜ | skip | |
| 164 | wait_dma | ⬜ | skip | |
| 165 | dma_busy | ⬜ | skip | |

**進捗: 4/18 (22%)**

---

## M5GFX Utility (13メソッド) - `m5gfx_util.c`

| # | メソッド名 | 状態 | 優先度 | 備考 |
|---|-----------|------|--------|------|
| 166 | flood_fill | ⬜ | skip | |
| 167 | paint | ⬜ | skip | |
| 168 | map_gradient | ⬜ | skip | |
| 169 | qrcode | ⬜ | skip | QRコード生成 |
| 170 | file | ⬜ | skip | |
| 171 | create_png | ⬜ | skip | |
| 172 | release_png_memory | ⬜ | skip | |
| 173 | cp437 | ⬜ | skip | |
| 174 | set_attribute | ⬜ | skip | |
| 175 | get_attribute | ⬜ | skip | |
| 176 | set_file_storage | ⬜ | skip | |
| 177 | clear_file_storage | ⬜ | skip | |
| 178 | prepare_tmp_transaction | ⬜ | skip | |

**進捗: 0/13 (0%)**

---

## 総合進捗

**全体: 57/180 (32%)**

### 優先度別
- **高優先度**: 28/28 (100%) ✅ 全て実装完了！
- **中優先度**: 15/68 (22%)
- **低優先度**: 14/67 (21%)

### カテゴリ別
- M5Unified Core: 20/20 (100%) ✅ 全て実装完了！
- M5GFX Color: 3/12 (25%) ← color16to24, color24to16, set_color 実装
- M5GFX Draw: 6/30 (20%) ← draw_pixel, draw_rect, draw_circle, draw_line, draw_string, draw_number 実装
- M5GFX Fill: 3/13 (23%) ← fill_rect, fill_circle, fill_screen 実装
- M5GFX Text: 9/31 (29%) ← set_cursor, set_text_size, set_text_color, print, println 他 実装
- M5GFX Image: 2/13 (15%) ← copy_rect, scroll 実装
- M5GFX Display: 9/29 (31%) ← width, height, clear, set_rotation 他 実装
- M5GFX Low-level: 4/18 (22%) ← start_write, end_write 他 実装
- M5GFX Utility: 0/13 (0%)

### 実装済みメソッド概要

**M5Unified Core (20/20) ✅ 完全実装**
- M5.begin, M5.Display, M5.update, M5.get_display
- M5.get_pin, M5.get_button, M5.get_display_count, M5.set_primary_display
- M5.set_primary_display_type, M5.set_log_display_index, M5.set_log_display_type
- M5.get_update_msec, M5.config_t, M5.get_board, M5.dsp
- M5.set_touch_button_height_by_ratio, M5.set_touch_button_height
- M5.get_touch_button_height, M5.get_io_expander, M5.add_display, M5.get_display_index

**M5GFX高優先度メソッド (28/28) ✅ 完全実装**
- Display.width, Display.height, Display.clear, Display.set_rotation
- Display.set_cursor, Display.set_text_size, Display.set_text_color
- Display.print, Display.println
- Display.fill_rect, Display.fill_circle, Display.fill_screen
- Display.draw_pixel, Display.draw_rect, Display.draw_circle, Display.draw_line
- Display.draw_string, Display.draw_number
- Display.start_write, Display.end_write
- Display.set_color, Display.color16to24, Display.color24to16
