/*
 * Library support functions test program
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
#include <file_stream.h>
#include <narrow_string.h>
#include <types.h>

#if defined( HAVE_STDLIB_H ) || defined( WINAPI )
#include <stdlib.h>
#endif

#include "cerror_test_libcerror.h"
#include "cerror_test_macros.h"
#include "cerror_test_unused.h"

/* Tests the libcerror_get_version function
 * Returns 1 if successful or 0 if not
 */
int cerror_test_get_version(
     void )
{
	const char *version_string = NULL;
	int result                 = 0;

	version_string = libcerror_get_version();

	result = narrow_string_compare(
	          version_string,
	          LIBCERROR_VERSION_STRING,
	          9 );

	CERROR_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 0 );

	return( 1 );

on_error:
	return( 0 );
}

/* The main program
 */
#if defined( HAVE_WIDE_SYSTEM_CHARACTER )
int wmain(
     int argc CERROR_TEST_ATTRIBUTE_UNUSED,
     wchar_t * const argv[] CERROR_TEST_ATTRIBUTE_UNUSED )
#else
int main(
     int argc CERROR_TEST_ATTRIBUTE_UNUSED,
     char * const argv[] CERROR_TEST_ATTRIBUTE_UNUSED )
#endif
{
	CERROR_TEST_UNREFERENCED_PARAMETER( argc )
	CERROR_TEST_UNREFERENCED_PARAMETER( argv )

	CERROR_TEST_RUN(
	 "libcerror_get_version",
	 cerror_test_get_version );

	return( EXIT_SUCCESS );

on_error:
	return( EXIT_FAILURE );
}

