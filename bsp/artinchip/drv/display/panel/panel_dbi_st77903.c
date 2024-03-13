/*
 * Copyright (c) 2023, Artinchip Technology Co., Ltd
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "panel_com.h"
#include "panel_dbi.h"

/* Init sequence, each line consists of command, count of data, data... */
static const u8 st77903_commands[] = {
    0xf0,  1,   0xc3,
    0xf0,  1,   0x96,
    0xf0,  1,   0xa5,
    0Xe9,  1,   0x20,
    0xe7,  4,   0x80,   0x77,   0x1f,   0xcc,
    0xc1,  4,   0x00,   0x0a,   0xac,   0x11,
    0xc2,  4,   0x00,   0x0a,   0xac,   0x11,
    0xc3,  4,   0x66,   0x04,   0x77,   0x01,
    0xc4,  4,   0x66,   0x04,   0x77,   0x01,
    0xc5,  1,   0x40,
    0xc8,  5,   0x3e,   0x08,   0x08,   0x08,   0xa5,
    0xe0,  14,  0xf3,   0x0f,   0x12,   0x05,   0x07,   0x03,   0x32,   0x44,
                0x4a,   0x09,   0x14,   0x14,   0x2e,   0x33,
    0xe1,  14,  0xf3,   0x0f,   0x13,   0x05,   0x07,   0x03,   0x32,   0x33,
                0x4a,   0x08,   0x14,   0x14,   0x2e,   0x33,
    0xe5,  14,  0x9a,   0xf5,   0x95,   0x34,   0x22,   0x25,   0x10,   0x25,
                0x25,   0x25,   0x25,   0x25,   0x25,   0x25,
    0xe6,  14,  0x9a,   0xf5,   0x95,   0x57,   0x22,   0x25,   0x10,   0x22,
                0x22,   0x22,   0x22,   0x22,   0x22,   0x22,
    0xec,  2,   0x40,   0x07,
    0x36,  1,   0x04,
    0xb2,  1,   0x10,
    0xb3,  1,   0x01,
    0xb4,  1,   0x00,
    0xb5,  4,   0x00,   0x04,   0x00,   0x04,
    0xa5,  9,   0x00,   0x01,   0x40,   0x00,   0x00,   0x17,   0x2a,   0x0a,
                0x02,
    0xa6,  9,   0xa0,   0x12,   0x40,   0x01,   0x00,   0x11,   0x2a,   0x0a,
                0x02,
    0xba,  7,   0x59,   0x02,   0x03,   0x00,   0x22,   0x02,   0x00,
    0xbb,  8,   0x00,   0x35,   0x00,   0x35,   0x88,   0x8b,   0x0b,   0x00,
    0xbc,  8,   0x00,   0x35,   0x00,   0x35,   0x88,   0x8b,   0x0b,   0x00,
    0xbd,  11,  0x44,   0xff,   0xff,   0xff,   0x15,   0x51,   0xff,   0xff,
                0x87,   0xff,   0x02,
    0xf9,  1,   0x3c,
    0xb6,  2,   0x9f,   0x1d,
    0xd5,  2,   0x00,   0x08,
    0x3a,  1,   0x07,
    0x35,  1,   0x00,
    0x20,  0,
    0x11,  0,
    0x00,  1,   120,
    0x29,  0,
};

static struct aic_panel_funcs st77903_funcs = {
    .prepare = panel_default_prepare,
    .enable = panel_dbi_default_enable,
    .disable = panel_default_disable,
    .unprepare = panel_default_unprepare,
    .register_callback = panel_register_callback,
};

static struct display_timing st77903_timing = {
    .pixelclock   = 6000000,

    .hactive      = 240,
    .hback_porch  = 20,
    .hfront_porch = 20,
    .hsync_len    = 20,

    .vactive      = 321,
    .vback_porch  = 20,
    .vfront_porch = 20,
    .vsync_len    = 10,
};

static struct spi_cfg spi = {
    .qspi_mode = 1,
    .vbp_num = 20,
    .code1_cfg = 0xD8,
    .code = {0xDE, 0x00, 0x00},
};

static struct panel_dbi dbi = {
    .type = SPI,
    .format = SPI_4SDA_RGB666,
    .first_line = 0x61,
    .other_line = 0x60,
    .spi = &spi,
    .commands = {
        .buf = st77903_commands,
        .len = ARRAY_SIZE(st77903_commands),
    }
};

struct aic_panel dbi_st77903 = {
    .name = "panel-st77903",
    .timings = &st77903_timing,
    .funcs = &st77903_funcs,
    .dbi = &dbi,
    .connector_type = AIC_DBI_COM,
};

