/*
 * Support functions
 *
 * Copyright (C) 2008-2023, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#if !defined( _LIBCERROR_SUPPORT_H )
#define _LIBCERROR_SUPPORT_H

#include <common.h>
#include <types.h>

#include "libcerror_extern.h"

#if defined( __cplusplus )
extern "C" {
#endif

#if !defined( HAVE_LOCAL_LIBCERROR )

LIBCERROR_EXTERN \
const char *libcerror_get_version(
             void );

#endif /* !defined( HAVE_LOCAL_LIBCERROR ) */

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBCERROR_SUPPORT_H ) */

