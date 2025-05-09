//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP___FWD_OSTREAM_H
#define _LIBCPP___FWD_OSTREAM_H

#include <__config>
#include <__fwd/string.h>

#if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
#  pragma GCC system_header
#endif

_LIBCPP_BEGIN_NAMESPACE_STD

template <class _CharT, class _Traits = char_traits<_CharT> >
class _LIBCPP_TEMPLATE_VIS basic_ostream;

using ostream = basic_ostream<char>;

#if _LIBCPP_HAS_WIDE_CHARACTERS
using wostream = basic_ostream<wchar_t>;
#endif

template <class _CharT, class _Traits>
class _LIBCPP_PREFERRED_NAME(ostream) _LIBCPP_IF_WIDE_CHARACTERS(_LIBCPP_PREFERRED_NAME(wostream)) basic_ostream;

_LIBCPP_END_NAMESPACE_STD

#endif // _LIBCPP___FWD_OSTREAM_H
