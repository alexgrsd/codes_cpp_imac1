#include "color.hpp"
#include <iostream>

#pragma once


Color::Rgb color_from_hex(unsigned int const hex);

unsigned int hex_from_color_int(Color::Rgb const& col);

Color::Rgb color_from_hex(std::string const& hex_str);

std::string hex_string_from_color_int(Color::Rgb const& col);
