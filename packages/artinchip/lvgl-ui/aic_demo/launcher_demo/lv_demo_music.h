/**
 * @file lv_demo_music.h
 *
 */

#ifndef LV_DEMO_MUSIC_H
#define LV_DEMO_MUSIC_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include <lvgl.h>

#ifdef AIC_LVGL_LAUNCHER_DEMO
#undef LV_USE_DEMO_RTT_MUSIC
#define LV_USE_DEMO_RTT_MUSIC 1
#endif

#if LV_USE_DEMO_RTT_MUSIC
#undef LV_USE_DEMO_MUSIC
#define LV_USE_DEMO_MUSIC 1
#endif

#if LV_USE_DEMO_MUSIC

/*********************
 *      DEFINES
 *********************/

#if LV_DEMO_MUSIC_LARGE
#  define LV_DEMO_MUSIC_HANDLE_SIZE  40
#else
#  define LV_DEMO_MUSIC_HANDLE_SIZE  20
#endif

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

void lv_demo_music(void);
const char * _lv_demo_music_get_title(uint32_t track_id);
const char * _lv_demo_music_get_artist(uint32_t track_id);
const char * _lv_demo_music_get_genre(uint32_t track_id);
uint32_t _lv_demo_music_get_track_length(uint32_t track_id);

/**********************
 *      MACROS
 **********************/
/*remove list*/
#define HAVE_MUSIC_LIST 1
/*see lvgl-apps/lv_conf.h, LV_FONT_MONTSERRAT_12, LV_FONT_MONTSERRAT_16*/ 
#define HAVE_MUSIC_MAIN_FONT 0
#define HAVE_MUSIC_MAIN_PNG 1
#define HAVE_MUSIC_LIST_PNG 1
/*remove img*/
#define HAVE_MUSIC_MAIN_001_0001 1
#define HAVE_MUSIC_MAIN_001_001 1
#define HAVE_MUSIC_MAIN_001_002 1
#define HAVE_MUSIC_MAIN_001_003 1
#define HAVE_MUSIC_MAIN_001_004 1

/*
see
#define LV_DEMO_MUSIC_SQUARE    0
#define LV_DEMO_MUSIC_LANDSCAPE 0
#define LV_DEMO_MUSIC_ROUND     0
#define LV_DEMO_MUSIC_LARGE     0
#define LV_DEMO_MUSIC_AUTO_PLAY 0

#define LV_MEM_SIZE (100 * 1024U * 1024U)
*/

#define LV_DEMO_MUSIC_SQUARE    0
#define LV_DEMO_MUSIC_LANDSCAPE 1
#define LV_DEMO_MUSIC_ROUND     0
#define LV_DEMO_MUSIC_LARGE     0
#define LV_DEMO_MUSIC_AUTO_PLAY 0

#if HAVE_MUSIC_MAIN_PNG
#include "../../../../artinchip/lvgl-ui/aic_ui.h"
#endif

#endif /*LV_USE_DEMO_MUSIC*/

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*LV_DEMO_MUSIC_H*/
