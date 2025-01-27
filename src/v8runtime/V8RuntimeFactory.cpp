/*
 * Copyright (c) Kudo Chien.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "V8RuntimeFactory.h"

#include "V8Runtime.h"

namespace rnv8 {

std::unique_ptr<facebook::jsi::Runtime> createV8Runtime(
    const V8RuntimeConfig &config) {
  return std::make_unique<V8Runtime>(config);
}

} // namespace rnv8
