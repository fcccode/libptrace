/*
 * Copyright (C) 2019, Cyxtera Cybersecurity, Inc.  All rights reserved.
 *
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License version 2.1 as
 * published by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License
 * version 2.1 for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * version 2.1 along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street - Fifth Floor, Boston, MA 02110-1301,
 * USA.
 *
 * THE CODE AND SCRIPTS POSTED ON THIS WEBSITE ARE PROVIDED ON AN "AS IS" BASIS
 * AND YOUR USE OF SUCH CODE AND/OR SCRIPTS IS AT YOUR OWN RISK.  CYXTERA
 * DISCLAIMS ALL EXPRESS AND IMPLIED WARRANTIES, EITHER IN FACT OR BY OPERATION
 * OF LAW, STATUTORY OR OTHERWISE, INCLUDING, BUT NOT LIMITED TO, ALL
 * WARRANTIES OF MERCHANTABILITY, TITLE, FITNESS FOR A PARTICULAR PURPOSE,
 * NON-INFRINGEMENT, ACCURACY, COMPLETENESS, COMPATABILITY OF SOFTWARE OR
 * EQUIPMENT OR ANY RESULTS TO BE ACHIEVED THEREFROM.  CYXTERA DOES NOT WARRANT
 * THAT SUCH CODE AND/OR SCRIPTS ARE OR WILL BE ERROR-FREE.  IN NO EVENT SHALL
 * CYXTERA BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, RELIANCE,
 * EXEMPLARY, PUNITIVE OR CONSEQUENTIAL DAMAGES, OR ANY LOSS OF GOODWILL, LOSS
 * OF ANTICIPATED SAVINGS, COST OF PURCHASING REPLACEMENT SERVICES, LOSS OF
 * PROFITS, REVENUE, DATA OR DATA USE, ARISING IN ANY WAY OUT OF THE USE AND/OR
 * REDISTRIBUTION OF SUCH CODE AND/OR SCRIPTS, REGARDLESS OF THE LEGAL THEORY
 * UNDER WHICH SUCH LIABILITY IS ASSERTED AND REGARDLESS OF WHETHER CYXTERA HAS
 * BEEN ADVISED OF THE POSSIBILITY OF SUCH LIABILITY.
 *
 * charset.h
 *
 * Dedicated to Yuzuyu Arielle Huizer.
 *
 * Author: Ronald Huizer <ronald@immunityinc.com>
 *
 */
#ifndef __PT_CHARSET_H
#define __PT_CHARSET_H

#include <stdint.h>

typedef char     utf8_t;
typedef uint16_t utf16_t;

#ifdef __cplusplus
extern "C" {
#endif

utf8_t  *pt_utf16_to_utf8(const utf16_t *);
utf16_t *pt_utf8_to_utf16(const utf8_t *);

int utf16_valid(const utf16_t *);

#ifdef __cplusplus
};
#endif

#endif	/* !__PT_CHARSET_H */
