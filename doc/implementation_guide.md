# M5Unified mruby/c 実装ガイド

## 概要

このドキュメントは、M5UnifiedのC++ APIをmruby/cから呼び出すための実装ガイドです。

## 前提条件

### 必要なヘッダー

```cpp
// M5Unifiedのヘッダー（C++）
#include <M5Unified.h>
#include <M5GFX.h>

// mruby/cのヘッダー
#include <mrubyc.h>
```

### グローバルインスタンス

M5Unifiedは`M5`というグローバルインスタンスとして使用されます：

```cpp
extern M5Unified M5;  // グローバルインスタンス
```

## mruby/c API パターン

### 1. パラメータの取得

```c
void c_some_method(mrbc_vm *vm, mrbc_value *v, int argc)
{
    // 整数パラメータ
    int x = GET_INT_ARG(1);
    int y = GET_INT_ARG(2);

    // 浮動小数点パラメータ
    double ratio = GET_FLOAT_ARG(1);

    // 文字列パラメータ
    const char* text = (const char*)GET_STRING_ARG(1);

    // 真偽値パラメータ
    int flag = GET_INT_ARG(1);  // 0 or 1

    // オブジェクトパラメータ
    mrbc_value obj = GET_ARG(1);
}
```

### 2. 戻り値の設定

```c
// 整数を返す
SET_INT_RETURN(42);

// 浮動小数点を返す
SET_FLOAT_RETURN(3.14);

// 真偽値を返す
SET_TRUE_RETURN();
SET_FALSE_RETURN();

// 文字列を返す
const char* str = "Hello";
SET_STRING_RETURN(str, strlen(str));

// nilを返す
SET_NIL_RETURN();
```

### 3. C++メソッド呼び出しパターン

#### パターン A: 引数なし、戻り値なし

```c
void c_m5_unified_update(mrbc_vm *vm, mrbc_value *v, int argc)
{
    M5.update();
    SET_NIL_RETURN();
}
```

#### パターン B: 引数あり、戻り値あり

```c
void c_m5_gfx_width(mrbc_vm *vm, mrbc_value *v, int argc)
{
    int width = M5.Display.width();
    SET_INT_RETURN(width);
}
```

#### パターン C: 複数引数、戻り値なし

```c
void c_m5_gfx_draw_pixel(mrbc_vm *vm, mrbc_value *v, int argc)
{
    int x = GET_INT_ARG(1);
    int y = GET_INT_ARG(2);
    uint32_t color = (uint32_t)GET_INT_ARG(3);

    M5.Display.drawPixel(x, y, color);
    SET_NIL_RETURN();
}
```

#### パターン D: 文字列引数

```c
void c_m5_gfx_print(mrbc_vm *vm, mrbc_value *v, int argc)
{
    const char* text = (const char*)GET_STRING_ARG(1);

    M5.Display.print(text);
    SET_NIL_RETURN();
}
```

## 実装済みサンプル

以下は実装済みの重要メソッドのサンプルです。

### M5Unified Core

```c
// M5.update()
void c_m5_unified_update(mrbc_vm *vm, mrbc_value *v, int argc)
{
    M5.update();
    SET_NIL_RETURN();
}

// M5.get_board()
void c_m5_unified_get_board(mrbc_vm *vm, mrbc_value *v, int argc)
{
    int board = (int)M5.getBoard();
    SET_INT_RETURN(board);
}
```

### M5GFX Display

```c
// Display.width()
void c_m5_gfx_width(mrbc_vm *vm, mrbc_value *v, int argc)
{
    int width = M5.Display.width();
    SET_INT_RETURN(width);
}

// Display.height()
void c_m5_gfx_height(mrbc_vm *vm, mrbc_value *v, int argc)
{
    int height = M5.Display.height();
    SET_INT_RETURN(height);
}

// Display.clear(color)
void c_m5_gfx_clear(mrbc_vm *vm, mrbc_value *v, int argc)
{
    uint32_t color = 0;
    if (argc >= 1) {
        color = (uint32_t)GET_INT_ARG(1);
    }
    M5.Display.clear(color);
    SET_NIL_RETURN();
}

// Display.set_rotation(r)
void c_m5_gfx_set_rotation(mrbc_vm *vm, mrbc_value *v, int argc)
{
    int rotation = GET_INT_ARG(1);
    M5.Display.setRotation(rotation);
    SET_NIL_RETURN();
}
```

### M5GFX Color

```c
// Display.set_color(r, g, b)
void c_m5_gfx_set_color(mrbc_vm *vm, mrbc_value *v, int argc)
{
    int r = GET_INT_ARG(1);
    int g = GET_INT_ARG(2);
    int b = GET_INT_ARG(3);

    M5.Display.setColor(r, g, b);
    SET_NIL_RETURN();
}

// Display.color16to8(c)
void c_m5_gfx_color16to8(mrbc_vm *vm, mrbc_value *v, int argc)
{
    uint16_t c = (uint16_t)GET_INT_ARG(1);
    uint8_t result = M5.Display.color16to8(c);
    SET_INT_RETURN(result);
}
```

### M5GFX Draw

```c
// Display.draw_pixel(x, y, color)
void c_m5_gfx_draw_pixel(mrbc_vm *vm, mrbc_value *v, int argc)
{
    int x = GET_INT_ARG(1);
    int y = GET_INT_ARG(2);
    uint32_t color = (uint32_t)GET_INT_ARG(3);

    M5.Display.drawPixel(x, y, color);
    SET_NIL_RETURN();
}

// Display.draw_line(x0, y0, x1, y1, color)
void c_m5_gfx_draw_line(mrbc_vm *vm, mrbc_value *v, int argc)
{
    int x0 = GET_INT_ARG(1);
    int y0 = GET_INT_ARG(2);
    int x1 = GET_INT_ARG(3);
    int y1 = GET_INT_ARG(4);
    uint32_t color = (uint32_t)GET_INT_ARG(5);

    M5.Display.drawLine(x0, y0, x1, y1, color);
    SET_NIL_RETURN();
}

// Display.draw_rect(x, y, w, h, color)
void c_m5_gfx_draw_rect(mrbc_vm *vm, mrbc_value *v, int argc)
{
    int x = GET_INT_ARG(1);
    int y = GET_INT_ARG(2);
    int w = GET_INT_ARG(3);
    int h = GET_INT_ARG(4);
    uint32_t color = (uint32_t)GET_INT_ARG(5);

    M5.Display.drawRect(x, y, w, h, color);
    SET_NIL_RETURN();
}

// Display.draw_circle(x, y, r, color)
void c_m5_gfx_draw_circle(mrbc_vm *vm, mrbc_value *v, int argc)
{
    int x = GET_INT_ARG(1);
    int y = GET_INT_ARG(2);
    int r = GET_INT_ARG(3);
    uint32_t color = (uint32_t)GET_INT_ARG(4);

    M5.Display.drawCircle(x, y, r, color);
    SET_NIL_RETURN();
}
```

### M5GFX Fill

```c
// Display.fill_rect(x, y, w, h, color)
void c_m5_gfx_fill_rect(mrbc_vm *vm, mrbc_value *v, int argc)
{
    int x = GET_INT_ARG(1);
    int y = GET_INT_ARG(2);
    int w = GET_INT_ARG(3);
    int h = GET_INT_ARG(4);
    uint32_t color = (uint32_t)GET_INT_ARG(5);

    M5.Display.fillRect(x, y, w, h, color);
    SET_NIL_RETURN();
}

// Display.fill_circle(x, y, r, color)
void c_m5_gfx_fill_circle(mrbc_vm *vm, mrbc_value *v, int argc)
{
    int x = GET_INT_ARG(1);
    int y = GET_INT_ARG(2);
    int r = GET_INT_ARG(3);
    uint32_t color = (uint32_t)GET_INT_ARG(4);

    M5.Display.fillCircle(x, y, r, color);
    SET_NIL_RETURN();
}

// Display.fill_screen(color)
void c_m5_gfx_fill_screen(mrbc_vm *vm, mrbc_value *v, int argc)
{
    uint32_t color = (uint32_t)GET_INT_ARG(1);
    M5.Display.fillScreen(color);
    SET_NIL_RETURN();
}
```

### M5GFX Text

```c
// Display.set_cursor(x, y)
void c_m5_gfx_set_cursor(mrbc_vm *vm, mrbc_value *v, int argc)
{
    int x = GET_INT_ARG(1);
    int y = GET_INT_ARG(2);

    M5.Display.setCursor(x, y);
    SET_NIL_RETURN();
}

// Display.set_text_size(size)
void c_m5_gfx_set_text_size(mrbc_vm *vm, mrbc_value *v, int argc)
{
    int size = GET_INT_ARG(1);
    M5.Display.setTextSize(size);
    SET_NIL_RETURN();
}

// Display.set_text_color(fg, bg)
void c_m5_gfx_set_text_color(mrbc_vm *vm, mrbc_value *v, int argc)
{
    uint32_t fg = (uint32_t)GET_INT_ARG(1);
    uint32_t bg = 0;
    if (argc >= 2) {
        bg = (uint32_t)GET_INT_ARG(2);
    }
    M5.Display.setTextColor(fg, bg);
    SET_NIL_RETURN();
}

// Display.print(text)
void c_m5_gfx_print(mrbc_vm *vm, mrbc_value *v, int argc)
{
    const char* text = (const char*)GET_STRING_ARG(1);
    M5.Display.print(text);
    SET_NIL_RETURN();
}

// Display.println(text)
void c_m5_gfx_println(mrbc_vm *vm, mrbc_value *v, int argc)
{
    const char* text = (const char*)GET_STRING_ARG(1);
    M5.Display.println(text);
    SET_NIL_RETURN();
}

// Display.printf(format, ...)
// 注意: printfは可変引数なので特別な処理が必要
void c_m5_gfx_printf(mrbc_vm *vm, mrbc_value *v, int argc)
{
    const char* format = (const char*)GET_STRING_ARG(1);
    // TODO: 可変引数の処理
    M5.Display.printf("%s", format);
    SET_NIL_RETURN();
}
```

### M5GFX Low-level

```c
// Display.start_write()
void c_m5_gfx_start_write(mrbc_vm *vm, mrbc_value *v, int argc)
{
    M5.Display.startWrite();
    SET_NIL_RETURN();
}

// Display.end_write()
void c_m5_gfx_end_write(mrbc_vm *vm, mrbc_value *v, int argc)
{
    M5.Display.endWrite();
    SET_NIL_RETURN();
}
```

## 実装の注意点

### 1. C++とCの境界

- M5Unified APIはC++なので、実装ファイルは`.cpp`拡張子にする必要があります
- または、`extern "C"`ブロックでラップする必要があります

### 2. オブジェクトの管理

- M5GFXオブジェクトへの参照をmruby/c側で管理する方法を検討する必要があります
- 現在は`M5.Display`への直接アクセスを想定

### 3. エラーハンドリング

- C++例外をmruby/cエラーに変換する仕組みが必要

### 4. メモリ管理

- 動的に確保したメモリは適切に解放する

## 次のステップ

1. **.cpp実装ファイルの作成** - 各`.c`ファイルを`.cpp`に変更または`.cpp`ラッパーを作成
2. **高優先度メソッドの実装** - 上記サンプルを元に実装
3. **テスト** - 簡単なRubyスクリプトで動作確認
4. **残りのメソッド実装** - パターンに従って実装

## 進捗管理

詳細な進捗は [`method_progress.md`](method_progress.md) を参照してください。
