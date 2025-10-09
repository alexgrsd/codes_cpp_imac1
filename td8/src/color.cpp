#include "color.hpp"
#include "colors_utils.hpp"
#include "color_hex.hpp"
#include <iostream>



int main() {

    Color::Rgb color{255, 100, 50};

    /*

    Color::Rgb color2{0, 200, 255};

    Color::Rgb mixed {mix(color, color2)};

    std::cout << "Mixed color: (" << mixed.r << ", " << mixed.g << ", " << mixed.b << ")" << std::endl;

    float lum {luminance(color)};
    std::cout << "Luminance of color: " << lum << std::endl;

    Color::Rgb inverted {invert(color)};
    std::cout << "Inverted color: (" << inverted.r << ", " << inverted.g << ", " << inverted.b << ")" << std::endl;

    Color::Rgb gray {to_grayscale(color)};
    std::cout << "Grayscale color: (" << gray.r << ", " << gray.g << ", " << gray.b << ")" << std::endl;

    unsigned int hex {hex_from_color_int(color)};
    std::cout << "Hex from color: 0x" << std::hex << hex << std::dec << std::endl;

    Color::Rgb from_hex {color_from_hex(0xff6432)};
    std::cout << "Color from hex 0xff6432: (" << from_hex.r << ", " << from_hex.g << ", " << from_hex.b << ")" << std::endl;

    */

    Color::Rgb from_str {color_from_hex("#ff6432")};
    std::cout << "Color from hex string \"#ff6432\": (" << from_str.r << ", " << from_str.g << ", " << from_str.b << ")" << std::endl;

    return 0;
}