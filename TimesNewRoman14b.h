

/*
 * Fareed Read
 * http://www.facebook.com/fareed.reads
 *
 * TimesNewRoman14b
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : TimesNewRoman14b.h
 * Date                : 26.06.2018
 * Font size in bytes  : 8824
 * Font width          : 10
 * Font height         : 14
 * Font first char     : 32
 * Font last char      : 128
 * Font used chars     : 96
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef TIMESNEWROMAN14B_H
#define TIMESNEWROMAN14B_H

#define TIMESNEWROMAN14B_WIDTH 10
#define TIMESNEWROMAN14B_HEIGHT 14

const static uint8_t TimesNewRoman14b[] PROGMEM = {
    0x22, 0x78, // size
    0x0A, // width
    0x0E, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x00, 0x02, 0x06, 0x06, 0x05, 0x0D, 0x0A, 0x02, 0x04, 0x04, 
    0x05, 0x07, 0x02, 0x04, 0x02, 0x04, 0x06, 0x06, 0x06, 0x06, 
    0x06, 0x06, 0x06, 0x05, 0x06, 0x06, 0x02, 0x02, 0x07, 0x07, 
    0x07, 0x05, 0x0B, 0x0A, 0x08, 0x08, 0x09, 0x08, 0x08, 0x09, 
    0x0A, 0x04, 0x07, 0x0A, 0x08, 0x0C, 0x09, 0x09, 0x08, 0x09, 
    0x0A, 0x06, 0x08, 0x09, 0x0A, 0x0E, 0x0A, 0x0A, 0x08, 0x03, 
    0x04, 0x03, 0x07, 0x07, 0x02, 0x07, 0x06, 0x05, 0x07, 0x06, 
    0x05, 0x07, 0x08, 0x04, 0x03, 0x08, 0x04, 0x0C, 0x08, 0x06, 
    0x06, 0x07, 0x06, 0x05, 0x05, 0x08, 0x07, 0x09, 0x07, 0x07, 
    0x05, 0x04, 0x01, 0x04, 0x06, 0x07, 
    
    // font data
    0x1E, 0xFE, 0x18, 0x18, // 33
    0x0E, 0x0E, 0x00, 0x00, 0x0E, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 34
    0x90, 0xF8, 0x96, 0x90, 0xF8, 0x96, 0x1C, 0x00, 0x00, 0x1C, 0x00, 0x00, // 35
    0x1C, 0x32, 0xFF, 0xC2, 0x8C, 0x0C, 0x10, 0x3C, 0x10, 0x0C, // 36
    0x3C, 0x7E, 0x42, 0x7E, 0x3C, 0x80, 0x60, 0x18, 0xC4, 0xE2, 0x20, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x10, 0x0C, 0x00, 0x00, 0x00, 0x0C, 0x1C, 0x10, 0x1C, 0x0C, // 37
    0x80, 0xC0, 0x40, 0x3C, 0xFE, 0xE2, 0x12, 0xAC, 0x60, 0x20, 0x0C, 0x1C, 0x18, 0x10, 0x10, 0x0C, 0x1C, 0x18, 0x10, 0x08, // 38
    0x0E, 0x0E, 0x00, 0x00, // 39
    0xE0, 0xF8, 0x0C, 0x02, 0x0C, 0x3C, 0x60, 0x80, // 40
    0x02, 0x0C, 0xF8, 0xE0, 0x80, 0x60, 0x3C, 0x0C, // 41
    0x08, 0x28, 0x1E, 0x28, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0x40, 0x40, 0x40, 0xF8, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, // 43
    0x00, 0x00, 0x58, 0x38, // 44
    0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, // 45
    0x00, 0x00, 0x18, 0x18, // 46
    0x00, 0xC0, 0x38, 0x06, 0x18, 0x04, 0x00, 0x00, // 47
    0xFC, 0xFE, 0x02, 0x02, 0xFE, 0xFC, 0x0C, 0x1C, 0x10, 0x10, 0x1C, 0x0C, // 48
    0x02, 0x02, 0xFE, 0xFE, 0x00, 0x00, 0x10, 0x10, 0x1C, 0x1C, 0x10, 0x10, // 49
    0x08, 0x0C, 0x06, 0x86, 0x7E, 0x1C, 0x10, 0x18, 0x1C, 0x18, 0x18, 0x18, // 50
    0x08, 0x04, 0x26, 0x66, 0xDE, 0xCC, 0x18, 0x18, 0x10, 0x10, 0x0C, 0x04, // 51
    0x80, 0x60, 0x10, 0xFC, 0xFE, 0x00, 0x04, 0x04, 0x04, 0x1C, 0x1C, 0x04, // 52
    0x20, 0x3C, 0x36, 0x76, 0x66, 0xC2, 0x18, 0x18, 0x10, 0x10, 0x08, 0x04, // 53
    0xF0, 0xF8, 0x1C, 0x16, 0xF2, 0xE2, 0x0C, 0x1C, 0x10, 0x10, 0x1C, 0x0C, // 54
    0x0E, 0x06, 0x86, 0x76, 0x0E, 0x00, 0x00, 0x1C, 0x00, 0x00, // 55
    0x1C, 0xBE, 0x72, 0xE2, 0xDE, 0x8C, 0x0C, 0x1C, 0x10, 0x10, 0x1C, 0x0C, // 56
    0x7C, 0xFE, 0x82, 0x82, 0xFE, 0x7C, 0x10, 0x10, 0x08, 0x0C, 0x04, 0x00, // 57
    0x30, 0x30, 0x18, 0x18, // 58
    0x30, 0x30, 0x58, 0x38, // 59
    0x40, 0xA0, 0xA0, 0x10, 0x10, 0x10, 0x08, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x08, // 60
    0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 61
    0x08, 0x10, 0x10, 0x10, 0xA0, 0xA0, 0x40, 0x08, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, // 62
    0x0C, 0x0E, 0xC2, 0x3E, 0x1C, 0x00, 0x18, 0x18, 0x00, 0x00, // 63
    0xE0, 0x10, 0x08, 0xC4, 0xE2, 0x32, 0x12, 0xE2, 0x74, 0x08, 0xF0, 0x0C, 0x10, 0x20, 0x4C, 0x9C, 0x90, 0x88, 0x9C, 0x48, 0x24, 0x10, // 64
    0x00, 0x00, 0x80, 0xF0, 0x8C, 0xBE, 0xF8, 0xC0, 0x00, 0x00, 0x10, 0x18, 0x14, 0x10, 0x00, 0x00, 0x14, 0x1C, 0x18, 0x10, // 65
    0x02, 0xFE, 0xFE, 0x22, 0x22, 0x72, 0xDE, 0x8C, 0x10, 0x1C, 0x1C, 0x10, 0x10, 0x10, 0x1C, 0x0C, // 66
    0xF8, 0xFC, 0x06, 0x02, 0x02, 0x02, 0x04, 0x0E, 0x04, 0x0C, 0x18, 0x10, 0x10, 0x10, 0x10, 0x08, // 67
    0x02, 0xFE, 0xFE, 0x02, 0x02, 0x02, 0x06, 0xFC, 0xF8, 0x10, 0x1C, 0x1C, 0x10, 0x10, 0x10, 0x18, 0x0C, 0x04, // 68
    0x02, 0xFE, 0xFE, 0x22, 0x22, 0x72, 0x02, 0x06, 0x10, 0x1C, 0x1C, 0x10, 0x10, 0x10, 0x10, 0x18, // 69
    0x02, 0xFE, 0xFE, 0x22, 0x22, 0x72, 0x02, 0x06, 0x10, 0x1C, 0x1C, 0x10, 0x00, 0x00, 0x00, 0x00, // 70
    0xF8, 0xFC, 0x06, 0x02, 0x02, 0x82, 0x84, 0x8E, 0x80, 0x04, 0x0C, 0x18, 0x10, 0x10, 0x10, 0x1C, 0x0C, 0x00, // 71
    0x02, 0xFE, 0xFE, 0x22, 0x20, 0x20, 0x22, 0xFE, 0xFE, 0x02, 0x10, 0x1C, 0x1C, 0x10, 0x00, 0x00, 0x10, 0x1C, 0x1C, 0x10, // 72
    0x02, 0xFE, 0xFE, 0x02, 0x10, 0x1C, 0x1C, 0x10, // 73
    0x00, 0x00, 0x00, 0x02, 0xFE, 0xFE, 0x02, 0x0C, 0x1C, 0x10, 0x10, 0x1C, 0x0C, 0x00, // 74
    0x02, 0xFE, 0xFE, 0x22, 0xE0, 0xD0, 0x0A, 0x06, 0x02, 0x02, 0x10, 0x1C, 0x1C, 0x10, 0x00, 0x14, 0x1C, 0x18, 0x10, 0x10, // 75
    0x02, 0xFE, 0xFE, 0x02, 0x00, 0x00, 0x00, 0x80, 0x10, 0x1C, 0x1C, 0x10, 0x10, 0x10, 0x18, 0x1C, // 76
    0x02, 0xFE, 0x0E, 0x7E, 0xF0, 0x80, 0x80, 0x70, 0x0E, 0xFE, 0xFE, 0x02, 0x10, 0x1C, 0x10, 0x00, 0x04, 0x1C, 0x0C, 0x00, 0x10, 0x1C, 0x1C, 0x10, // 77
    0x02, 0xFE, 0x06, 0x1E, 0x38, 0xE0, 0xC2, 0xFE, 0x02, 0x10, 0x1C, 0x10, 0x00, 0x00, 0x00, 0x04, 0x1C, 0x00, // 78
    0xF8, 0xFC, 0x06, 0x02, 0x02, 0x02, 0x06, 0xFC, 0xF8, 0x04, 0x0C, 0x18, 0x10, 0x10, 0x10, 0x18, 0x0C, 0x04, // 79
    0x02, 0xFE, 0xFE, 0x42, 0x42, 0x42, 0x7E, 0x3C, 0x10, 0x1C, 0x1C, 0x10, 0x00, 0x00, 0x00, 0x00, // 80
    0xF8, 0xFC, 0x06, 0x02, 0x02, 0x02, 0x06, 0xFC, 0xF8, 0x04, 0x0C, 0x18, 0x30, 0x70, 0xF0, 0x98, 0x8C, 0x04, // 81
    0x02, 0xFE, 0xFE, 0x22, 0x62, 0xE2, 0xBE, 0x1C, 0x00, 0x00, 0x10, 0x1C, 0x1C, 0x10, 0x00, 0x04, 0x1C, 0x18, 0x10, 0x10, // 82
    0x1C, 0x3E, 0x72, 0xE2, 0xC4, 0x8E, 0x1C, 0x08, 0x10, 0x10, 0x1C, 0x0C, // 83
    0x06, 0x02, 0x02, 0xFE, 0xFE, 0x02, 0x02, 0x06, 0x00, 0x00, 0x10, 0x1C, 0x1C, 0x10, 0x00, 0x00, // 84
    0x02, 0xFE, 0xFE, 0x02, 0x00, 0x00, 0x02, 0xFE, 0x02, 0x00, 0x0C, 0x1C, 0x10, 0x10, 0x10, 0x10, 0x0C, 0x00, // 85
    0x02, 0x06, 0x3E, 0xFA, 0xC0, 0x00, 0xC0, 0x32, 0x0E, 0x02, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00, // 86
    0x02, 0x06, 0x1E, 0xFA, 0xE0, 0x02, 0xE2, 0x1E, 0xFE, 0xE2, 0x00, 0xE2, 0x1E, 0x02, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x00, 0x00, 0x00, // 87
    0x02, 0x06, 0x0E, 0xBA, 0x70, 0xE0, 0x9A, 0x06, 0x02, 0x02, 0x10, 0x10, 0x18, 0x14, 0x00, 0x14, 0x1C, 0x18, 0x10, 0x10, // 88
    0x02, 0x06, 0x1E, 0x7A, 0xE0, 0xC0, 0x20, 0x1A, 0x06, 0x02, 0x00, 0x00, 0x00, 0x10, 0x1C, 0x1C, 0x10, 0x00, 0x00, 0x00, // 89
    0x00, 0x0E, 0x86, 0xE2, 0x7A, 0x1E, 0x0E, 0x82, 0x10, 0x1C, 0x1C, 0x14, 0x10, 0x10, 0x18, 0x1C, // 90
    0xFE, 0xFE, 0x02, 0xFC, 0xFC, 0x80, // 91
    0x06, 0x38, 0xC0, 0x00, 0x00, 0x00, 0x04, 0x18, // 92
    0x02, 0xFE, 0xFE, 0x80, 0xFC, 0xFC, // 93
    0x40, 0x30, 0x08, 0x04, 0x08, 0x30, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 95
    0x04, 0x08, 0x00, 0x00, // 96
    0x20, 0xB0, 0x90, 0x50, 0xF0, 0xE0, 0x00, 0x0C, 0x1C, 0x10, 0x10, 0x1C, 0x1C, 0x10, // 97
    0xFE, 0xFE, 0x10, 0x10, 0xF0, 0xE0, 0x1C, 0x0C, 0x10, 0x10, 0x1C, 0x0C, // 98
    0xE0, 0xF0, 0x10, 0x30, 0x30, 0x0C, 0x1C, 0x10, 0x10, 0x08, // 99
    0xE0, 0xF0, 0x10, 0x12, 0xFE, 0xFE, 0x00, 0x0C, 0x1C, 0x10, 0x10, 0x1C, 0x1C, 0x10, // 100
    0xE0, 0xF0, 0x90, 0x90, 0xF0, 0xE0, 0x0C, 0x1C, 0x10, 0x10, 0x10, 0x08, // 101
    0x10, 0xFC, 0xFE, 0x12, 0x06, 0x10, 0x1C, 0x1C, 0x10, 0x00, // 102
    0xE0, 0xF0, 0x10, 0x10, 0xF0, 0xF0, 0x10, 0x78, 0xB4, 0xB4, 0xB4, 0xB4, 0xB0, 0x60, // 103
    0x02, 0xFE, 0xFE, 0x20, 0x10, 0xF0, 0xE0, 0x00, 0x10, 0x1C, 0x1C, 0x10, 0x00, 0x1C, 0x1C, 0x10, // 104
    0x10, 0xF6, 0xF6, 0x00, 0x10, 0x1C, 0x1C, 0x10, // 105
    0x10, 0xF6, 0xF6, 0x80, 0xFC, 0x7C, // 106
    0x02, 0xFE, 0xFE, 0x80, 0xC0, 0x30, 0x10, 0x10, 0x10, 0x1C, 0x1C, 0x10, 0x04, 0x1C, 0x18, 0x10, // 107
    0x02, 0xFE, 0xFE, 0x00, 0x10, 0x1C, 0x1C, 0x10, // 108
    0x10, 0xF0, 0xF0, 0x20, 0x10, 0xF0, 0xE0, 0x10, 0x10, 0xF0, 0xE0, 0x00, 0x10, 0x1C, 0x1C, 0x10, 0x00, 0x1C, 0x1C, 0x10, 0x00, 0x1C, 0x1C, 0x10, // 109
    0x10, 0xF0, 0xF0, 0x20, 0x10, 0xF0, 0xE0, 0x00, 0x10, 0x1C, 0x1C, 0x10, 0x00, 0x1C, 0x1C, 0x10, // 110
    0xE0, 0xF0, 0x10, 0x10, 0xF0, 0xE0, 0x0C, 0x1C, 0x10, 0x10, 0x1C, 0x0C, // 111
    0xF0, 0xF0, 0x10, 0x10, 0xF0, 0xE0, 0xFC, 0xFC, 0x90, 0x10, 0x1C, 0x0C, // 112
    0xE0, 0xF0, 0x10, 0x10, 0xE0, 0xF0, 0x00, 0x0C, 0x1C, 0x10, 0x90, 0xFC, 0xFC, 0x80, // 113
    0x10, 0xF0, 0xF0, 0x20, 0x10, 0x30, 0x10, 0x1C, 0x1C, 0x10, 0x00, 0x00, // 114
    0x60, 0xF0, 0xD0, 0x90, 0x30, 0x18, 0x10, 0x14, 0x1C, 0x0C, // 115
    0x10, 0xF0, 0xFC, 0x10, 0x00, 0x00, 0x0C, 0x1C, 0x10, 0x08, // 116
    0x10, 0xF0, 0xF0, 0x00, 0x10, 0xF0, 0xF0, 0x00, 0x00, 0x0C, 0x1C, 0x10, 0x10, 0x1C, 0x1C, 0x10, // 117
    0x30, 0xF0, 0xD0, 0x00, 0xD0, 0x30, 0x10, 0x00, 0x04, 0x1C, 0x1C, 0x00, 0x00, 0x00, // 118
    0xF0, 0xF0, 0x00, 0xD0, 0xF0, 0xD0, 0x00, 0xF0, 0x10, 0x00, 0x1C, 0x1C, 0x00, 0x00, 0x1C, 0x1C, 0x00, 0x00, // 119
    0x10, 0x30, 0xF0, 0xD0, 0x40, 0x30, 0x10, 0x10, 0x18, 0x04, 0x14, 0x1C, 0x18, 0x10, // 120
    0x10, 0x70, 0xF0, 0x80, 0x90, 0x70, 0x10, 0xC0, 0xC0, 0x84, 0x7C, 0x0C, 0x00, 0x00, // 121
    0x30, 0x10, 0xD0, 0xF0, 0x30, 0x10, 0x1C, 0x1C, 0x10, 0x18, // 122
    0x80, 0x7C, 0x3E, 0x02, 0x00, 0x7C, 0xF8, 0x80, // 123
    0xFE, 0xFC, // 124
    0x02, 0x3E, 0x7C, 0x80, 0x80, 0xF8, 0x7C, 0x00, // 125
    0xC0, 0x40, 0x40, 0x80, 0x80, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 126
    0xFE, 0x02, 0x02, 0x02, 0x02, 0x02, 0xFE, 0x1C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1C // 127
    
};

#endif
