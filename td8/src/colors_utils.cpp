#include "colors_utils.hpp"
#include "color.hpp"

Color::Rgb mix(const Color::Rgb& c1, const Color::Rgb& c2) {
    Color::Rgb result;
    result.r = (c1.r + c2.r) / 2;
    result.g = (c1.g + c2.g) / 2;
    result.b = (c1.b + c2.b) / 2;
    return result;
}

float luminance(const Color::Rgb& color) {
    return 0.2126f * color.r + 0.7152f * color.g + 0.0722f * color.b;
}

Color::Rgb invert(const Color::Rgb& color) {
    Color::Rgb result;
    result.r = 255 - color.r;
    result.g = 255 - color.g;
    result.b = 255 - color.b;
    return result;
}

Color::Rgb to_grayscale(const Color::Rgb& color) {
    int gray {static_cast<int>(luminance(color))};
    Color::Rgb result;
    result.r = gray;
    result.g = gray;
    result.b = gray;
    return result;
}