/****************************************************************************
 *                                                                          *
 *  Author : lukasz.iwaszkiewicz@gmail.com                                  *
 *  ~~~~~~~~                                                                *
 *  License : see COPYING file for details.                                 *
 *  ~~~~~~~~~                                                               *
 ****************************************************************************/

#pragma once

#include <etl/array.h>
#include <etl/map.h>
#include <etl/optional.h>

#include <cstdint>

namespace gsl {

template <class T, std::size_t N> constexpr T &at (T (&arr)[N], const int i)
{
        assert (i >= 0 && i < static_cast<int> (N));
        return arr[static_cast<size_t> (i)];
}

template <class Cont> constexpr auto at (Cont &cont, const int i) -> decltype (cont[cont.size ()])
{
        assert (i >= 0 && i < static_cast<int> (cont.size ()));
        using size_type = decltype (cont.size ());
        return cont[static_cast<size_type> (i)];
}
} // namespace gsl
