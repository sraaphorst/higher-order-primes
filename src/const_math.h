/**
 * const_math.h
 *
 * By Sebastian Raaphorst, 2019.
 */

#pragma once

#include <limits>

namespace const_math {

    namespace impl {
        double constexpr sqrtNewtonRaphson(double x, double curr, double prev);
    }

    double constexpr const_sqrtd(double);
}



//
//namespace const_math {
//    namespace impl {
//        double constexpr sqrtNewtonRaphson(double x, double curr, double prev) {
//            return curr == prev
//                   ? curr
//                   : sqrtNewtonRaphson(x, 0.5 * (curr + x / curr), curr);
//        }
//    }
//
//    double constexpr const_sqrtd(double x) {
//        return x >= 0 && x < std::numeric_limits<double>::infinity()
//               ? impl::sqrtNewtonRaphson(x, x, 0)
//               : std::numeric_limits<double>::quiet_NaN();
//    }
//}