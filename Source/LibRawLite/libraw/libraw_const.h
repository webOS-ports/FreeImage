/* -*- C++ -*-
 * File: libraw_const.h
 * Copyright 2008-2013 LibRaw LLC (info@libraw.org)
 * Created: Sat Mar  8 , 2008
 * LibRaw error codes
LibRaw is free software; you can redistribute it and/or modify
it under the terms of the one of three licenses as you choose:

1. GNU LESSER GENERAL PUBLIC LICENSE version 2.1
   (See file LICENSE.LGPL provided in LibRaw distribution archive for details).

2. COMMON DEVELOPMENT AND DISTRIBUTION LICENSE (CDDL) Version 1.0
   (See file LICENSE.CDDL provided in LibRaw distribution archive for details).

3. LibRaw Software License 27032010
   (See file LICENSE.LibRaw.pdf provided in LibRaw distribution archive for details).

 */

#ifndef _LIBRAW_ERRORS_H
#define _LIBRAW_ERRORS_H

#define LIBRAW_DEFAULT_ADJUST_MAXIMUM_THRESHOLD 0.75
#define LIBRAW_DEFAULT_AUTO_BRIGHTNESS_THRESHOLD 0.01

enum LibRaw_colormatrix_type
{
 LIBRAW_CMATRIX_NONE=0,
 LIBRAW_CMATRIX_DNG=1,
 LIBRAW_CMATRIX_DIGBACK=2,
 LIBRAW_CMATRIX_OTHER=4
};

enum LibRaw_camera_mounts
  {
    LIBRAW_MOUNT_Unknown=0,
    LIBRAW_MOUNT_Minolta_A=1,
    LIBRAW_MOUNT_Sony_E=2,
    LIBRAW_MOUNT_Canon_EF=3,
    LIBRAW_MOUNT_Canon_EF_S=4,
    LIBRAW_MOUNT_Canon_EF_M=5,
    LIBRAW_MOUNT_Nikon_F=6,
    LIBRAW_MOUNT_Nikon_CX=7,	// used in Nikon 1 series
    LIBRAW_MOUNT_FT=8,	// original 4/3
    LIBRAW_MOUNT_mFT=9,	// micro 4/3
    LIBRAW_MOUNT_Pentax_K=10,
    LIBRAW_MOUNT_Pentax_Q=11,
    LIBRAW_MOUNT_Pentax_645=12,
    LIBRAW_MOUNT_Fuji_X=13,
    LIBRAW_MOUNT_Leica_M=14,
    LIBRAW_MOUNT_Leica_R=15,
    LIBRAW_MOUNT_Leica_S=16,
    LIBRAW_MOUNT_Samsung_NX=17,
    LIBRAW_MOUNT_RicohModule=18,
    LIBRAW_MOUNT_Samsung_NX_M=19,
    LIBRAW_MOUNT_Leica_T=20,
    LIBRAW_MOUNT_Contax_N=21,
    LIBRAW_MOUNT_Sigma_X3F=22,
    LIBRAW_MOUNT_FixedLens=99
  };

enum LibRaw_camera_formats
  {

    LIBRAW_FORMAT_APSC=1,
    LIBRAW_FORMAT_FF=2,
    LIBRAW_FORMAT_MF=3,
    LIBRAW_FORMAT_APSH=4,
    LIBRAW_FORMAT_FT=8	
  };


enum LibRaw_sonyarw2_options
{
  LIBRAW_SONYARW2_NONE=0,
  LIBRAW_SONYARW2_BASEONLY=1,  
  LIBRAW_SONYARW2_DELTAONLY=2,  
  LIBRAW_SONYARW2_DELTAZEROBASE=3,
  LIBRAW_SONYARW2_DELTATOVALUE=4
};
enum LibRaw_dp2q_options
{
	LIBRAW_DP2QOPT_NONE=0,
	LIBRAW_DP2Q_INTERPOLATERG=1,
	LIBRAW_DP2Q_INTERPOLATEAF=2
};

enum LibRaw_decoder_flags
{
  //    LIBRAW_DECODER_LEGACY = 1,      
  //  LIBRAW_DECODER_FLATFIELD = 1<<1,
    LIBRAW_DECODER_USEBAYER2 = 1<<3,
    LIBRAW_DECODER_HASCURVE = 1<<4,
    LIBRAW_DECODER_SONYARW2 = 1<<5,
    LIBRAW_DECODER_TRYRAWSPEED = 1<<6,
    LIBRAW_DECODER_OWNALLOC = 1<<7,
    LIBRAW_DECODER_FIXEDMAXC = 1<<8,
    LIBRAW_DECODER_NOTSET = 1<<15
};

#define LIBRAW_XTRANS 9

enum LibRaw_constructor_flags
{
    LIBRAW_OPTIONS_NONE         =0,
    LIBRAW_OPIONS_NO_MEMERR_CALLBACK=1,
    LIBRAW_OPIONS_NO_DATAERR_CALLBACK=1<<1
};

enum LibRaw_warnings
{
    LIBRAW_WARN_NONE            =0,
    LIBRAW_WARN_FOVEON_NOMATRIX =1,
    LIBRAW_WARN_FOVEON_INVALIDWB =1<<1,
    LIBRAW_WARN_BAD_CAMERA_WB   =1<<2,
    LIBRAW_WARN_NO_METADATA     =1<<3,
    LIBRAW_WARN_NO_JPEGLIB     = 1<<4,
    LIBRAW_WARN_NO_EMBEDDED_PROFILE = 1<<5,
    LIBRAW_WARN_NO_INPUT_PROFILE = 1<<6,
    LIBRAW_WARN_BAD_OUTPUT_PROFILE= 1<<7,
    LIBRAW_WARN_NO_BADPIXELMAP=1<<8,
    LIBRAW_WARN_BAD_DARKFRAME_FILE=1<<9,
    LIBRAW_WARN_BAD_DARKFRAME_DIM=1<<10,
    LIBRAW_WARN_NO_JASPER = 1<<11,
    LIBRAW_WARN_RAWSPEED_PROBLEM = 1<<12,
    LIBRAW_WARN_RAWSPEED_UNSUPPORTED = 1<<13,
    LIBRAW_WARN_RAWSPEED_PROCESSED = 1<<14,
    LIBRAW_WARN_FALLBACK_TO_AHD = 1<<15
};

enum LibRaw_exceptions
{
    LIBRAW_EXCEPTION_NONE       =0,
    LIBRAW_EXCEPTION_ALLOC      =1,
    LIBRAW_EXCEPTION_DECODE_RAW =2,
    LIBRAW_EXCEPTION_DECODE_JPEG=3,
    LIBRAW_EXCEPTION_IO_EOF     =4,
    LIBRAW_EXCEPTION_IO_CORRUPT =5,
    LIBRAW_EXCEPTION_CANCELLED_BY_CALLBACK=6,
    LIBRAW_EXCEPTION_BAD_CROP =7,
    LIBRAW_EXCEPTION_IO_BADFILE =8,
    LIBRAW_EXCEPTION_DECODE_JPEG2000=9
};

#if 0
enum LibRaw_colorstate
{
    LIBRAW_COLORSTATE_UNKNOWN   =0,
    LIBRAW_COLORSTATE_INIT      =1,
    LIBRAW_COLORSTATE_CONST     =2,
    LIBRAW_COLORSTATE_LOADED    =3,
    LIBRAW_COLORSTATE_CALCULATED=4,
    LIBRAW_COLORSTATE_RESERVED1 =5,
    LIBRAW_COLORSTATE_RESERVED2 =6,
    LIBRAW_COLORSTATE_RESERVED3 =7
};
#endif

enum LibRaw_progress
{
    LIBRAW_PROGRESS_START               = 0,
    LIBRAW_PROGRESS_OPEN                = 1,
    LIBRAW_PROGRESS_IDENTIFY            = 1<<1,
    LIBRAW_PROGRESS_SIZE_ADJUST         = 1<<2,
    LIBRAW_PROGRESS_LOAD_RAW            = 1<<3,
	LIBRAW_PROGRESS_RAW2_IMAGE			= 1<<4,
    LIBRAW_PROGRESS_REMOVE_ZEROES       = 1<<5,
    LIBRAW_PROGRESS_BAD_PIXELS          = 1<<6,
    LIBRAW_PROGRESS_DARK_FRAME          = 1<<7,
    LIBRAW_PROGRESS_FOVEON_INTERPOLATE  = 1<<8,
    LIBRAW_PROGRESS_SCALE_COLORS        = 1<<9,
    LIBRAW_PROGRESS_PRE_INTERPOLATE     = 1<<10,
    LIBRAW_PROGRESS_INTERPOLATE         = 1<<11,
    LIBRAW_PROGRESS_MIX_GREEN           = 1<<12,
    LIBRAW_PROGRESS_MEDIAN_FILTER       = 1<<13,
    LIBRAW_PROGRESS_HIGHLIGHTS          = 1<<14,
    LIBRAW_PROGRESS_FUJI_ROTATE         = 1<<15,
    LIBRAW_PROGRESS_FLIP                = 1<<16,
    LIBRAW_PROGRESS_APPLY_PROFILE       = 1<<17,
    LIBRAW_PROGRESS_CONVERT_RGB         = 1<<18,
    LIBRAW_PROGRESS_STRETCH             = 1<<19,
/* reserved */
    LIBRAW_PROGRESS_STAGE20             = 1<<20,
    LIBRAW_PROGRESS_STAGE21             = 1<<21,
    LIBRAW_PROGRESS_STAGE22             = 1<<22,
    LIBRAW_PROGRESS_STAGE23             = 1<<23,
    LIBRAW_PROGRESS_STAGE24             = 1<<24,
    LIBRAW_PROGRESS_STAGE25             = 1<<25,
    LIBRAW_PROGRESS_STAGE26             = 1<<26,
    LIBRAW_PROGRESS_STAGE27             = 1<<27,

    LIBRAW_PROGRESS_THUMB_LOAD          = 1<<28,
    LIBRAW_PROGRESS_TRESERVED1          = 1<<29,
    LIBRAW_PROGRESS_TRESERVED2          = 1<<30
};
#define LIBRAW_PROGRESS_THUMB_MASK 0x0fffffff

enum LibRaw_errors
{
    LIBRAW_SUCCESS = 0,
    LIBRAW_UNSPECIFIED_ERROR=-1,
    LIBRAW_FILE_UNSUPPORTED = -2,
    LIBRAW_REQUEST_FOR_NONEXISTENT_IMAGE=-3,
    LIBRAW_OUT_OF_ORDER_CALL=-4,
    LIBRAW_NO_THUMBNAIL=-5,
    LIBRAW_UNSUPPORTED_THUMBNAIL=-6,
    LIBRAW_INPUT_CLOSED=-7,
    LIBRAW_UNSUFFICIENT_MEMORY=-100007,
    LIBRAW_DATA_ERROR=-100008,
    LIBRAW_IO_ERROR=-100009,
    LIBRAW_CANCELLED_BY_CALLBACK=-100010,
    LIBRAW_BAD_CROP=-100011
};

#define LIBRAW_FATAL_ERROR(ec) ((ec)<-100000)

enum LibRaw_thumbnail_formats
{
    LIBRAW_THUMBNAIL_UNKNOWN=0,
    LIBRAW_THUMBNAIL_JPEG=1,
    LIBRAW_THUMBNAIL_BITMAP=2,
    LIBRAW_THUMBNAIL_LAYER=4,
    LIBRAW_THUMBNAIL_ROLLEI=5
};

enum LibRaw_image_formats
{
    LIBRAW_IMAGE_JPEG=1,
    LIBRAW_IMAGE_BITMAP=2
};

#endif
