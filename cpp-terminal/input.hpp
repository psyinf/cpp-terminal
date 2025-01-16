/*
* cpp-terminal
* C++ library for writing multi-platform terminal applications.
*
* SPDX-FileCopyrightText: 2019-2025 cpp-terminal
*
* SPDX-License-Identifier: MIT
*/

#pragma once

#include "cpp-terminal/event.hpp"
#include <chrono>
#include <optional>

namespace Term
{

Term::Event read_event();

std::optional<Term::Event> read_event(std::chrono::high_resolution_clock::duration timeout);

}  // namespace Term
