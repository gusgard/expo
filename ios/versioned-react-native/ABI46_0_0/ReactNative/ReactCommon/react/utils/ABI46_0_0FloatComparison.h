/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

namespace ABI46_0_0facebook {
namespace ABI46_0_0React {

inline bool floatEquality(float a, float b, float epsilon = 0.005f) {
  return (std::isnan(a) && std::isnan(b)) ||
      (!std::isnan(a) && !std::isnan(b) && fabs(a - b) < epsilon);
}

} // namespace ABI46_0_0React
} // namespace ABI46_0_0facebook
