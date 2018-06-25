//
// Copyright(c) 2015 Gabi Melman.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)
//

#pragma once

#include "fmt/fmt.h"
#include "spdlog/details/log_msg.h"

#include <memory>
#include <string>
#include <vector>

namespace spdlog {

class formatter
{
public:
    virtual ~formatter() = default;
    virtual void format(const details::log_msg &msg, fmt::memory_buffer &dest) = 0;
};
} // namespace spdlog

#include "details/pattern_formatter_impl.h"
