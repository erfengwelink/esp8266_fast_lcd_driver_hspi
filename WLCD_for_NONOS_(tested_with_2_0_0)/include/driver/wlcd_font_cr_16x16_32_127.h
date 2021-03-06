/*
 * Created by Martin Winkelhofer 03,11,12/2016
 * W-Dimension / wdim / wdim0 / winkelhofer.m@gmail.com / https://github.com/wdim0
 *    __   ________          ______   _______  ___________    __  ______   _______  ____ ___  ___ 
 *   / /  / ___/ _ \  ____  /  _/ /  /  _/ _ \|_  / / <  /  _/_/ /  _/ /  /  _/ _ \/ / /( _ )( _ )
 *  / /__/ /__/ // / /___/ _/ // /___/ / \_, //_ <_  _/ / _/_/  _/ // /___/ / \_, /_  _/ _  / _  |
 * /____/\___/____/       /___/____/___//___/____//_//_/ /_/   /___/____/___//___/ /_/ \___/\___/ 
 *
 * Driver for LCD controllers ILI9341 / ILI9488 (or compatible) using 4-wire SPI interface
 * hooked to ESP8266's HSPI interface (or using SW bit-banging for any GPIOs).
 * v1.50 (12/2016), NON-OS version
 *
 * This file is part of WLCD - W-Dimension's LCD driver for ESP8266.
 *
 * WLCD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * WLCD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with WLCD. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __WLCD_FONT_CR_16X16_32_127_H__
#define __WLCD_FONT_CR_16X16_32_127_H__

#include <c_types.h>

/* ============================================================================
 * FONT: "Cr", 16x16 (real size 13x16), regular, chars 32..127
 * ============================================================================
 *
 * fonter.c used to create content of CharOffs[], Rects[] arrays. Thanks!
 *
 * uint16_t CharOffs[] - offsets to array Rects[]
 *
 * Example for char with ASCII value 65 - "A":
 * CharOffs[65] = 0x0170
 * CharOffs[66] = 0x0177
 * => for drawing of char "A" we'll use 7 rectangles, first rectangle is here -> Rects[0x0170]
 *
 * uint16_t Rects[] - each 16-bit value describes one rectangle:
 * 0 b 0000 0000 0000 0000
 *       H    W    Y    X
 * note: add 1 to W, H to get real width, height.
 */

#define WLCD_FONT_CR_16X16_32_127_CHAR_WIDTH			13 //! real width is 13 (not 16), but fonter.c MUST have width in multiples of 8
#define WLCD_FONT_CR_16X16_32_127_CHAR_HEIGHT			16
#define WLCD_FONT_CR_16X16_32_127_FIRST_CHAR_CODE		32
#define WLCD_FONT_CR_16X16_32_127_LAST_CHAR_CODE		127

const uint16_t wlcd_font_cr_16x16_32_127_Rects[762] = {
	0x7116, 0x11b6, 0x4114, 0x4118, 0x5144, 0x5148, 0x3115, 0x3119, 0x3193, 0x3197, 0x0843, 0x0892, 0x0624, 0x06c3, 0x2133, 0x2199, 
	0x1106, 0x2129, 0x0375, 0x11a3, 0x21c6, 0x0164, 0x0188, 0x1028, 0x02b3, 0x2121, 0x2125, 0x2197, 0x219b, 0x0312, 0x0352, 0x1166, 
	0x0388, 0x03c8, 0x012a, 0x0139, 0x0148, 0x0157, 0x0185, 0x0194, 0x01a3, 0x01b2, 0x3182, 0x6014, 0x2199, 0x05c3, 0x0414, 0x2023, 
	0x0363, 0x118a, 0x0128, 0x0176, 0x0187, 0x03b8, 0x01cb, 0x0154, 0x1063, 0x1088, 0x4116, 0x7145, 0x1126, 0x11c6, 0x0117, 0x01e7, 
	0x7147, 0x1126, 0x11c6, 0x0115, 0x01e5, 0x2335, 0x1116, 0x0123, 0x0129, 0x0534, 0x0164, 0x0168, 0x8136, 0x0972, 0x11b6, 0x01d5, 
	0x0982, 0x11b6, 0x012b, 0x013a, 0x0149, 0x0158, 0x0167, 0x0176, 0x0185, 0x0194, 0x01a3, 0x01b2, 0x01c1, 0x7133, 0x7139, 0x0315, 
	0x03c5, 0x0124, 0x0128, 0x01b4, 0x01b8, 0xb116, 0x07c3, 0x0223, 0x0015, 0x07c3, 0x2139, 0x0315, 0x11a9, 0x0124, 0x0128, 0x0133, 
	0x0168, 0x0177, 0x0186, 0x0195, 0x01a4, 0x01b3, 0x2189, 0x0414, 0x04c4, 0x3029, 0x2058, 0x0123, 0x1139, 0x0166, 0x4079, 0x01b3, 
	0x1018, 0x00b8, 0xb118, 0x0793, 0x1155, 0x2027, 0x04c6, 0x0174, 0x0183, 0x0046, 0x5113, 0x3179, 0x0613, 0x04c4, 0x0553, 0x0168, 
	0x01b3, 0x01b8, 0x5153, 0x2189, 0x0317, 0x1134, 0x0563, 0x03c5, 0x0225, 0x0178, 0x01b4, 0x01b8, 0x1263, 0x0713, 0x21a5, 0x2113, 
	0x2119, 0x1148, 0x1167, 0x1186, 0x2183, 0x2189, 0x0315, 0x3024, 0x3029, 0x0365, 0x03c5, 0x1033, 0x1139, 0x2055, 0x2058, 0x4074, 
	0x4079, 0x1015, 0x1018, 0x01b4, 0x00b8, 0x5139, 0x2133, 0x0315, 0x0375, 0x1198, 0x03c3, 0x02b6, 0x0124, 0x0128, 0x0164, 0x0068, 
	0x1146, 0x11b6, 0x1146, 0x11b6, 0x01d5, 0x2065, 0x0138, 0x0147, 0x0156, 0x1086, 0x1097, 0x10a8, 0x1056, 0x0074, 0x01b8, 0x0952, 
	0x0992, 0x2068, 0x0134, 0x0145, 0x0156, 0x1087, 0x1096, 0x10a5, 0x1057, 0x0178, 0x00b4, 0x0514, 0x2129, 0x1123, 0x1176, 0x11b6, 
	0x0158, 0x0167, 0x9132, 0x813a, 0x4165, 0x0514, 0x05e4, 0x0356, 0x03b6, 0x0123, 0x0129, 0x01d3, 0x4116, 0x0793, 0x21a2, 0x21aa, 
	0x1345, 0x1164, 0x1168, 0x0114, 0x0183, 0x0189, 0x03c1, 0x03c9, 0xb113, 0x09c1, 0x0811, 0x502a, 0x218b, 0x0663, 0x113a, 0x407b, 
	0x1019, 0x0059, 0x00ba, 0x5142, 0x0715, 0x05c5, 0x211b, 0x1123, 0x11a3, 0x11ab, 0x1015, 0x101a, 0x02b3, 0x00ba, 0xb113, 0x514b, 
	0x0811, 0x08c1, 0x112a, 0x11aa, 0x1019, 0x00b9, 0xb113, 0x0a11, 0x0ac1, 0x2158, 0x211a, 0x11aa, 0x0463, 0xb114, 0x0a12, 0x2159, 
	0x06c2, 0x211b, 0x0464, 0x5141, 0x417a, 0x0714, 0x05c4, 0x211a, 0x1122, 0x0577, 0x11a2, 0x1014, 0x1019, 0x02b2, 0x00b9, 0xb112, 
	0xb11a, 0x0762, 0x0311, 0x0319, 0x03c1, 0x03c9, 0xb116, 0x0713, 0x07c3, 0xa118, 0x05c3, 0x0615, 0x11a2, 0xb112, 0x0417, 0x1362, 
	0x02ca, 0x0311, 0x1118, 0x0137, 0x0146, 0x0155, 0x1076, 0x1087, 0x1098, 0x10a9, 0x03c1, 0x01b9, 0xb113, 0x0ac1, 0x0611, 0x11aa, 
	0xb112, 0xb11a, 0x1365, 0x3222, 0x3029, 0x3166, 0x1342, 0x1048, 0x03c1, 0x03c9, 0x0011, 0x021a, 0xb112, 0xb11a, 0x1166, 0x0418, 
	0x2222, 0x2099, 0x04c1, 0x1045, 0x0187, 0x0011, 0x0155, 0x1088, 0x5141, 0x514b, 0x0514, 0x05c4, 0x1122, 0x112a, 0x11a2, 0x11aa, 
	0x1014, 0x1019, 0x02b2, 0x00b9, 0xb113, 0x0811, 0x213a, 0x0673, 0x06c1, 0x0129, 0x0169, 0x5141, 0x514b, 0x0514, 0x05c4, 0x1122, 
	0x112a, 0x11a2, 0x11aa, 0x21c4, 0x03f6, 0x03e3, 0x01e9, 0x01f2, 0x1014, 0x1019, 0x02b2, 0x00b9, 0xb113, 0x0811, 0x213a, 0x0673, 
	0x05c1, 0x0129, 0x0169, 0x1177, 0x0198, 0x01a9, 0x01ba, 0x01cb, 0x0714, 0x07c2, 0x211a, 0x3023, 0x0364, 0x308a, 0x11a2, 0x0277, 
	0x1032, 0x119a, 0x1014, 0x1019, 0x0153, 0x1079, 0x02b2, 0x00b9, 0xb116, 0x0b11, 0x2111, 0x211b, 0x05c4, 0x9112, 0x911a, 0x05c4, 
	0x0311, 0x0319, 0x01b3, 0x01b9, 0x1395, 0x2112, 0x211a, 0x2164, 0x2168, 0x1143, 0x1149, 0x3196, 0x0311, 0x0319, 0x4111, 0x411b, 
	0x4183, 0x4189, 0x3146, 0x3162, 0x316a, 0x1365, 0x3065, 0x3068, 0x0211, 0x001a, 0x3156, 0x0411, 0x0418, 0x04c1, 0x04c8, 0x1112, 
	0x111a, 0x0133, 0x0139, 0x0144, 0x0148, 0x0355, 0x0385, 0x0194, 0x0198, 0x01a3, 0x01a9, 0x01b2, 0x01ba, 0x6166, 0x2112, 0x211a, 
	0x05c4, 0x0311, 0x0319, 0x0143, 0x0149, 0x0154, 0x0158, 0x0365, 0x0912, 0x09c2, 0x2112, 0x1166, 0x11aa, 0x111a, 0x0139, 0x0148, 
	0x0157, 0x0185, 0x0194, 0x01a3, 0x01b2, 0xd105, 0x0405, 0x04d5, 0x0121, 0x0132, 0x0143, 0x0154, 0x0165, 0x0176, 0x0187, 0x0198, 
	0x01a9, 0x01ba, 0x01cb, 0xd107, 0x0204, 0x02d4, 0x1106, 0x0315, 0x0124, 0x0128, 0x0ce0, 0x0105, 0x0116, 0x0127, 0x7159, 0x08c3, 
	0x0544, 0x2192, 0x0375, 0x0283, 0x0153, 0xc103, 0x416a, 0x07c2, 0x0643, 0x0159, 0x01b9, 0x0002, 0x1243, 0x02b3, 0x4163, 0x0645, 
	0x05c5, 0x214a, 0x0154, 0x01b4, 0x01ba, 0x1049, 0xc109, 0x4162, 0x07c4, 0x0444, 0x0153, 0x01b3, 0x0008, 0x1048, 0x00b8, 0x4162, 
	0x0982, 0x0544, 0x05c4, 0x116a, 0x0153, 0x0159, 0x01aa, 0x01b3, 0x01b9, 0xb116, 0x0644, 0x06c4, 0x0307, 0x9149, 0x4162, 0x0744, 
	0x05f3, 0x04c4, 0x0153, 0x01b3, 0x01e8, 0x1048, 0x00b8, 0xc103, 0x7159, 0x0643, 0x03c2, 0x03c8, 0x0002, 0x1243, 0x8146, 0x07c3, 
	0x1106, 0x0144, 0x9147, 0x1107, 0x0343, 0x03f3, 0x01e6, 0xc103, 0x0447, 0x3067, 0x02ca, 0x1148, 0x1076, 0x1283, 0x1098, 0x10a9, 
	0x0002, 0x2048, 0x01b9, 0x00c2, 0xc106, 0x07c3, 0x0104, 0x8142, 0x7156, 0x715a, 0x0541, 0x0248, 0x03c1, 0x1242, 0x1048, 0x02c6, 
	0x02ca, 0x8143, 0x7159, 0x0742, 0x03c2, 0x03c8, 0x1243, 0x4162, 0x416a, 0x0544, 0x05c4, 0x0153, 0x0159, 0x01b3, 0x01b9, 0xb143, 
	0x416a, 0x0742, 0x06c3, 0x04f2, 0x0159, 0x01b9, 0x1243, 0x02b3, 0xb149, 0x4162, 0x0744, 0x04c4, 0x04f7, 0x0153, 0x01b3, 0x1048, 
	0x00b8, 0x8144, 0x0842, 0x06c2, 0x015a, 0x1244, 0x0744, 0x07c2, 0x0584, 0x214a, 0x11a2, 0x2053, 0x209a, 0x1044, 0x1049, 0x0062, 
	0x0173, 0x1089, 0x01aa, 0x02b2, 0x00b9, 0xa115, 0x0743, 0x11a9, 0x03c6, 0x8149, 0x7143, 0x07c4, 0x0042, 0x0048, 0x00b8, 0x13a5, 
	0x0341, 0x0349, 0x1163, 0x1169, 0x1184, 0x1188, 0x1142, 0x114a, 0x21a6, 0x1783, 0x3142, 0x314a, 0x4184, 0x4188, 0x1166, 0x0341, 
	0x0349, 0x2176, 0x0441, 0x0448, 0x04c1, 0x04c8, 0x1143, 0x1149, 0x0164, 0x0168, 0x0375, 0x0395, 0x01a4, 0x01a8, 0x01b3, 0x01b9, 
	0x13a5, 0x04f3, 0x0341, 0x0349, 0x1163, 0x1169, 0x1184, 0x1188, 0x31a6, 0x1142, 0x114a, 0x01e5, 0x0942, 0x09c2, 0x2142, 0x11aa, 
	0x1149, 0x0168, 0x0177, 0x0186, 0x0195, 0x01a4, 0x01b3, 0xc026, 0x6017, 0x6097, 0x0217, 0x0184, 0x02f7, 0xf106, 0xc027, 0x6016, 
	0x6096, 0x0114, 0x0287, 0x01f4, 0x0303, 0x110a, 0x1112, 0x0327, 0x0116, 0xb514
};

const uint16_t wlcd_font_cr_16x16_32_127_CharOffs[129] = {
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0002, 0x0004, 0x000c, 0x0019, 0x002a, 0x003a, 0x003b, 0x0040, 0x0045, 0x004c, 0x004e, 0x0050, 0x0051, 0x0052, 
	0x005d, 0x0065, 0x0069, 0x0076, 0x0082, 0x008a, 0x0092, 0x009d, 0x00a4, 0x00b5, 0x00c0, 0x00c2, 0x00c5, 0x00cf, 0x00d1, 0x00db, 
	0x00e2, 0x00ec, 0x00f8, 0x0103, 0x010e, 0x0116, 0x011d, 0x0123, 0x012f, 0x0136, 0x0139, 0x013d, 0x014c, 0x0150, 0x015c, 0x0168, 
	0x0174, 0x017b, 0x018c, 0x0198, 0x01a8, 0x01ad, 0x01b4, 0x01be, 0x01ca, 0x01dd, 0x01e8, 0x01f5, 0x01f8, 0x0203, 0x0206, 0x020a, 
	0x020b, 0x020e, 0x0215, 0x021e, 0x0226, 0x022f, 0x0239, 0x023d, 0x0247, 0x024e, 0x0252, 0x0257, 0x0264, 0x0267, 0x0271, 0x0277, 
	0x027f, 0x0288, 0x0291, 0x0296, 0x02a5, 0x02a9, 0x02af, 0x02b9, 0x02c1, 0x02d0, 0x02dc, 0x02e7, 0x02ed, 0x02ee, 0x02f4, 0x02f9, 
	0x02fa //last item is not offset to real char, but is here just to be able to count how many rectangles we use for last char
};

#endif
