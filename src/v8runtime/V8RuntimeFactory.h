/*
 * Copyright (c) Kudo Chien.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <memory.h>
#include "V8RuntimeConfig.h"
#include "jsi/jsi.h"

namespace rnv8 {

std::unique_ptr<facebook::jsi::Runtime> createV8Runtime(
    const V8RuntimeConfig &config);

} // namespace rnv8
