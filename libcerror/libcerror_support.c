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

#include <common.h>
#include <types.h>

#include "libcerror_definitions.h"
#include "libcerror_support.h"

#if !defined( HAVE_LOCAL_LIBCERROR )

/* Returns the library version as a string
 */
const char *libcerror_get_version(
             void )
{
	return( (const char *) LIBCERROR_VERSION_STRING );
}

#endif /* !defined( HAVE_LOCAL_LIBCERROR ) */

