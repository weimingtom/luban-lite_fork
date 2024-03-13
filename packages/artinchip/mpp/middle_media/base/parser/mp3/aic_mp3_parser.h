/*
* Copyright (C) 2020-2023 ArtInChip Technology Co. Ltd
*
*  author: <jun.ma@artinchip.com>
*  Desc: aic_mp3_parser
*/
#ifndef __AIC_MP3_PARSER_H__
#define __AIC_MP3_PARSER_H__

#include "aic_parser.h"
#include "aic_stream.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

s32 aic_mp3_parser_create(unsigned char* uri, struct aic_parser **parser);

#ifdef __cplusplus
}
#endif /* End of #ifdef __cplusplus */

#endif
