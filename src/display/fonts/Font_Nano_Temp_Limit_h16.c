#include <lvgl.h>

/*******************************************************************************
 * Size: 16 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/

#ifndef FONT_NANO_TEMP_LIMIT_H16
#define FONT_NANO_TEMP_LIMIT_H16 1
#endif

#if FONT_NANO_TEMP_LIMIT_H16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+45 "E" */
    0x0, 0xff, 0xe1, 0xb, 0xe7, 0xff, 0xff, 0x23,
    0x1c, 0x40, 0x3f, 0xff, 0xe0, 0x1f, 0xff, 0x21,
    0x0, 0xff, 0xff, 0x80, 0x7f, 0xff, 0xc0, 0x3f,
    0xfd, 0x2, 0xb5, 0xdf, 0xff, 0xba, 0x4c, 0x3,
    0xff, 0x90, 0x71, 0xdf, 0xff, 0xba, 0xd8, 0x40,
    0x30, 0xad, 0x6c, 0x20, 0x80, 0x7f, 0xf6, 0x4,
    0xe3, 0x69, 0x84, 0x3, 0xe3, 0x7b, 0xca, 0x62,
    0x0, 0xff, 0xe9, 0x12, 0xce, 0x61, 0xcc, 0x40,
    0x3f, 0xf8, 0x4, 0xb3, 0x98, 0x84, 0x10, 0xf,
    0xfe, 0x50, 0x9b, 0xde, 0x53, 0x10, 0x7, 0xff,
    0x1c, 0x4d, 0xef, 0x29, 0x48, 0x3, 0xff, 0x88,
    0x4b, 0x39, 0x88, 0x41, 0x0, 0xff, 0xe7, 0x12,
    0xd6, 0x62, 0xc, 0x40, 0x3f, 0x9, 0xbd, 0xe5,
    0x31, 0x0, 0x7f, 0xf5, 0x44, 0xdf, 0x31, 0x4c,
    0x62, 0x22, 0x6a, 0xcc, 0x42, 0x8, 0x7, 0xff,
    0x21, 0x27, 0xbb, 0xff, 0x8d, 0x96, 0xe4, 0x0,
    0x37, 0xbc, 0xee, 0xff, 0xe3, 0x4a, 0x0, 0x0,

    /* U+46 "F" */
    0x0, 0x24, 0xf7, 0x7f, 0xf8, 0xa5, 0x0, 0x32,
    0x4f, 0x77, 0xff, 0x1b, 0x2d, 0xcc, 0x0, 0x4f,
    0x79, 0xdd, 0xff, 0xc6, 0x94, 0x0, 0xff, 0xe4,
    0xa, 0x46, 0x62, 0x98, 0x84, 0x46, 0xd5, 0x98,
    0x73, 0x10, 0xf, 0xfe, 0xa9, 0x35, 0x65, 0xb9,
    0x88, 0x7, 0xe1, 0x38, 0xcc, 0x52, 0x90, 0x7,
    0xff, 0x38, 0x52, 0x33, 0x65, 0x48, 0x3, 0xff,
    0x88, 0x4b, 0x59, 0x87, 0x31, 0x0, 0xff, 0xe3,
    0x93, 0x56, 0x5b, 0x98, 0x7, 0xff, 0x2c, 0x4e,
    0x33, 0x12, 0xa4, 0x1, 0xff, 0xc0, 0x13, 0x7c,
    0xc4, 0xa9, 0x0, 0x7f, 0xf4, 0x89, 0xab, 0x2d,
    0xcc, 0x3, 0xe1, 0x6b, 0xd8, 0x31, 0x0, 0xff,
    0xec, 0xa, 0x46, 0xd2, 0x88, 0x6, 0x16, 0xae,
    0xff, 0xfd, 0xd0, 0x60, 0x1f, 0xfc, 0x83, 0x8e,
    0xff, 0xfd, 0xd4, 0xa2, 0x1, 0xff, 0xff, 0x0,
    0xff, 0xff, 0x80, 0x7f, 0xff, 0xc0, 0x3f, 0xff,
    0xe0, 0x1f, 0xfc, 0xe0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 256, .box_w = 54, .box_h = 15, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 136, .adv_w = 256, .box_w = 54, .box_h = 15, .ofs_x = -1, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 69, .range_length = 2, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 1
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t Font_Nano_Temp_Limit_h16 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 15,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_HOR,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if FONT_NANO_TEMP_LIMIT_H16*/
