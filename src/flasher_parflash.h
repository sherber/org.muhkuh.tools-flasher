/***************************************************************************
 *   Copyright (C) 2010 by Hilscher GmbH                                   *
 *   cthelen@hilscher.com                                                  *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU Library General Public License as       *
 *   published by the Free Software Foundation; either version 2 of the    *
 *   License, or (at your option) any later version.                       *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this program; if not, write to the                 *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#include "netx_consoleapp.h"
#include "flasher_interface.h"
#include "sha1.h"

#ifndef __FLASHER_PARFLASH_H__
#define __FLASHER_PARFLASH_H__


NETX_CONSOLEAPP_RESULT_T parflash_detect(CMD_PARAMETER_DETECT_T *ptParameter);
NETX_CONSOLEAPP_RESULT_T parflash_getEraseArea(CMD_PARAMETER_GETERASEAREA_T *ptParameter);
NETX_CONSOLEAPP_RESULT_T parflash_isErased(const CMD_PARAMETER_ISERASED_T *ptParameter, NETX_CONSOLEAPP_PARAMETER_T *ptConsoleParams);
NETX_CONSOLEAPP_RESULT_T parflash_flash(const CMD_PARAMETER_FLASH_T *ptParameter);
NETX_CONSOLEAPP_RESULT_T parflash_erase(const CMD_PARAMETER_ERASE_T *ptParameter);
NETX_CONSOLEAPP_RESULT_T parflash_read(const CMD_PARAMETER_READ_T *ptParameter);
NETX_CONSOLEAPP_RESULT_T parflash_verify(const CMD_PARAMETER_VERIFY_T *ptParameter, NETX_CONSOLEAPP_PARAMETER_T *ptConsoleParams);
NETX_CONSOLEAPP_RESULT_T parflash_sha1(const CMD_PARAMETER_CHECKSUM_T *ptParameter, SHA_CTX *ptSha1Context);

#endif	/* __FLASHER_PARFLASH_H__ */
