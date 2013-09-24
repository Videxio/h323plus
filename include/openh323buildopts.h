/*
 * openh323buildopts.h
 *
 * Build options generated by the configure script.
 *
 * Portable Windows Library
 *
 * Copyright (c) 2003     Equivalence Pty. Ltd.
 * Copyright (c) 20007-13 ISVO(Asia) Pte Ltd.
 * 
 *
 * The contents of this file are subject to the Mozilla Public License
 * Version 1.0 (the "License"); you may not use this file except in
 * compliance with the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS"
 * basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See
 * the License for the specific language governing rights and limitations
 * under the License.
 *
 * The Original Code is Portable Windows Library.
 *
 * The Initial Developer of the Original Code is Equivalence Pty. Ltd.
 *
 * Contributor(s): ______________________________________.
 *
 * $Id$
 *
 */

#ifndef _OPENH323_BUILDOPTS_H
#define _OPENH323_BUILDOPTS_H

#include <ptbuildopts.h>
#include <ptlib/../../revision.h>

#if PTLIB_MAJOR == 2 && PTLIB_MINOR < 10
   #define PTLIB_VER ( PTLIB_MAJOR*100 + PTLIB_MINOR*10 + PTLIB_BUILD )
#else
   #if (PTLIB_BUILD < 10)  // We currently only handle Build numbers less then 10 - SH
      #define PTLIB_VER ( PTLIB_MAJOR*1000 + PTLIB_MINOR*10 + PTLIB_BUILD )
   #else
      #define PTLIB_VER ( PTLIB_MAJOR*1000 + PTLIB_MINOR*10 + 9 )
   #endif 
#endif

#define PTLIB_SVN_REVISION  SVN_REVISION

/////////////////////////////////////////////////
//
// Major options
//

#define OPENH323_MAJOR 1
#define OPENH323_MINOR 25
#define OPENH323_BUILD 3
#define OPENH323_VERSION "1.25.3"
#define H323PLUS_VER ( OPENH323_MAJOR*1000 + OPENH323_MINOR*10 + OPENH323_BUILD )


//#if PTLIB_VER >= 2110
  #define H323_STLDICTIONARY  1
//#endif

#define H323_AUDIO_CODECS 1

#ifdef P_VIDEO
#define H323_VIDEO 1
#endif


//////////////////////////////////////////////////
// static codec definitions

#ifdef H323_AUDIO_CODECS
   #undef H323_STATIC_G7221
   #undef H323_STATIC_GSM
#endif

#ifdef H323_VIDEO
   #undef H323_STATIC_H261
   #undef H323_STATIC_H263
   #undef H323_STATIC_H264
#endif

/////////////////////////////////////////////////
//
// Various item support
//

#define H323_T38 1
#define H323_T120 1
#define H323_H224 1
#ifdef H323_H224
    #define H224_H281   1
    #define H224_T140	1
    #define H224_H284	1
#endif
#define H323_H230 1
#if (PTLIB_VER > 260) && (P_SSL)
  #define H323_H235 1
  #ifdef H323_H235
    #define H323_H235_AES256 1
  #endif
  #define H323_TLS 1
#endif
#ifdef P_VIDEO
#define H323_H239 1
#endif
#define H323_H248 1
//#define H323_H249 1
#ifdef P_SNMP
#define H323_H341 1
#endif
#ifdef P_LDAP
#define H323_H350 1
#endif
#define H323_H450 1

#define H323_H460 1
#ifdef H323_H460
#define H323_H4609 1
#if (PTLIB_VER > 260) && defined(P_STUN)
    #define H323_H46017	1
    #if defined(H323_H46017)
        #define H323_H46026 1
    #endif
    #define H323_H46018 1
    #if defined(H323_H46018)
        #define H323_H46019M	1
    #endif
    #define H323_H46023 1
    #if defined(H323_H46018) && defined(H323_H46023) && defined(P_SSL)
        #define H323_H46024A 1
        #define H323_H46024B 1
    #endif
    #if defined(H323_H46023) && (WINVER > 0x500)
        #define H323_UPnP 1
    #endif
#endif

#undef H323_H461 //#define H323_H461 1

// Presence Feature
#define H323_H460P 1
#ifdef H323_H460P
   #define H323_H460P_VER 3
#endif
// Registration Priority Feature
#define H323_H460PRE 1
// Endpoint Compatibility 
#define H323_H460COM 1
#endif

#define H323_H501 1
#if (PTLIB_VER > 260) && (P_STUN)
    #define H323_GNUGK 1
#endif
#define H323_FILE 1

#define H323_AEC 1
#if defined(_MSC_VER) && (H323_AEC)
#pragma include_alias(<speex/speex_echo.h>,            <c:/speex-1.2rc1/include/speex/speex_echo.h>      )
#pragma include_alias(<speex/speex_preprocess.h>,      <c:/speex-1.2rc1/include/speex/speex_preprocess.h>)
#pragma include_alias(<speex/speex_types.h>,           <c:/speex-1.2rc1/include/speex/speex_types.h>     )
#define H323_AEC_LIB "c:/speex-1.2rc1/lib/libspeexdsp.lib"
#endif

#undef H323_SIGNAL_AGGREGATE
#undef H323_RTP_AGGREGATE

#undef H323_FIXED_VIDEOCLOCK

#define H323_FRAMEBUFFER 1

//#define H323_PACKET_TRACE 1

#endif

// End Of File ///////////////////////////////////////////////////////////////

