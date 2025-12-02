#include "color.hpp"
#include "colors_utils.hpp"
#include "color_hex.hpp"
#include <iostream>

void print_color(const Color::Rgb& col)
{
    std::cout << "Color(R: " << col.r << ", G: " << col.g << ", B: " << col.b << ")\n";
}

