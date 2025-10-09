#include "color.hpp"

Color::Rgb mix(const Color::Rgb& c1, const Color::Rgb& c2);

float luminance(const Color::Rgb& color);

Color::Rgb invert(const Color::Rgb& color);

Color::Rgb to_grayscale(const Color::Rgb& color);