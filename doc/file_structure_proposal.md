# ファイル分割提案

## 現状
- `m5unified_impl.c`: 4899行、179メソッド（1ファイルに全て）

## 分割案

### 1. M5Unified関連 (19メソッド)
**ファイル名**: `m5unified_core.c`
- `mrb_m5_unified_*` 系のメソッド
- M5デバイスの初期化、設定、ボタン、ディスプレイ管理など

### 2. M5GFX - 描画基礎 (30メソッド)
**ファイル名**: `m5gfx_draw.c`
- `mrb_m5_gfx_draw_*` 系
- 基本図形描画: pixel, line, rect, circle, ellipse, triangle, arc など

### 3. M5GFX - 塗りつぶし (13メソッド)
**ファイル名**: `m5gfx_fill.c`
- `mrb_m5_gfx_fill_*` 系
- 図形の塗りつぶし: fill_rect, fill_circle, fill_triangle など

### 4. M5GFX - テキスト描画 (25メソッド)
**ファイル名**: `m5gfx_text.c`
- `mrb_m5_gfx_set_text_*`, `mrb_m5_gfx_draw_string`, `mrb_m5_gfx_print*` など
- フォント設定、テキスト描画、カーソル管理

### 5. M5GFX - 色管理 (10メソッド)
**ファイル名**: `m5gfx_color.c`
- `mrb_m5_gfx_color*`, `mrb_m5_gfx_*_color` 系
- 色変換、パレット、色設定

### 6. M5GFX - 画像・ピクセル操作 (20メソッド)
**ファイル名**: `m5gfx_image.c`
- `mrb_m5_gfx_push_*`, `mrb_m5_gfx_write_pixels*`, `mrb_m5_gfx_read_*` 系
- 画像描画、ピクセルデータ操作、ビットマップ

### 7. M5GFX - ディスプレイ制御 (25メソッド)
**ファイル名**: `m5gfx_display.c`
- `mrb_m5_gfx_set_*` (テキスト以外), `mrb_m5_gfx_get_*`, `mrb_m5_gfx_clear_*` 系
- ディスプレイ設定、回転、クリッピング、スクロール、DMA制御

### 8. M5GFX - 低レベル描画 (15メソッド)
**ファイル名**: `m5gfx_lowlevel.c`
- `mrb_m5_gfx_write_*`, `mrb_m5_gfx_start_write`, `mrb_m5_gfx_end_write` など
- 低レベルピクセル書き込み、トランザクション制御

### 9. M5GFX - その他ユーティリティ (12メソッド)
**ファイル名**: `m5gfx_util.c`
- `mrb_m5_gfx_qrcode`, `mrb_m5_gfx_file`, `mrb_m5_gfx_create_png` など
- QRコード、ファイル操作、PNG作成、その他

### 共通ヘッダー
**ファイル名**: `m5unified_impl.h`
- 共通の型定義、マクロ、関数宣言

## メリット
1. **保守性向上**: 機能ごとにファイルが分かれて見通しが良くなる
2. **並列作業可能**: 複数ファイルを同時に編集しやすい
3. **コンパイル効率**: 変更箇所のみ再コンパイル可能
4. **理解しやすい**: 新規参加者が必要な部分だけ読める

## デメリット
1. **ファイル数増加**: 9ファイルに分割
2. **ビルド設定**: Makefileなどで全ファイルをコンパイル対象に追加する必要

## 推奨
**分割することを強く推奨します**。特に179メソッドを1ファイルで管理するのは大変で、今後のメンテナンスが困難になります。
