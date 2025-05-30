/*
 * nghttp2 - HTTP/2 C Library
 *
 * Copyright (c) 2013 Tatsuhiro Tsujikawa
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#ifndef SHRPX_DOWNSTREAM_TEST_H
#define SHRPX_DOWNSTREAM_TEST_H

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif // HAVE_CONFIG_H

#define MUNIT_ENABLE_ASSERT_ALIASES

#include "munit.h"

namespace shrpx {

extern const MunitSuite downstream_suite;

munit_void_test_decl(test_downstream_field_store_append_last_header)
munit_void_test_decl(test_downstream_field_store_header)
munit_void_test_decl(test_downstream_crumble_request_cookie)
munit_void_test_decl(test_downstream_assemble_request_cookie)
munit_void_test_decl(test_downstream_rewrite_location_response_header)
munit_void_test_decl(test_downstream_supports_non_final_response)
munit_void_test_decl(test_downstream_find_affinity_cookie)

} // namespace shrpx

#endif // SHRPX_DOWNSTREAM_TEST_H
