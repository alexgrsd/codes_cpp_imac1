#include "color.hpp"
#include "colors_utils.hpp"
#include "color_hex.hpp"
#include <iostream>

int main() {

    Color::Rgb color{255, 100, 50};

    print_color(color);

    Color::Rgb color2{0, 200, 255};

    Color::Rgb mixed {mix(color, color2)};
    print_color(mixed);

    float lum {luminance(color)};
    std::cout << "Luminance of color: " << lum << std::endl;

    Color::Rgb inverted {invert(color)};
    print_color(inverted);

    Color::Rgb gray {to_grayscale(color)};
    print_color(gray);

    unsigned int hex {hex_from_color_int(color)};
    std::cout << "Hex from color: 0x" << std::hex << hex << std::dec << std::endl;

    Color::Rgb from_hex {color_from_hex(0xff6432)};
    std::cout << "Color from hex 0xff6432: ("; 
    print_color(from_hex); 
    std::cout << ")" << std::endl;

    

    Color::Rgb from_str {color_from_hex("#ff6432")};
    std::cout << "Color from hex string \"#ff6432\": ("; 
    print_color(from_str); 
    std::cout << ")" << std::endl;

    std::string hex_str {hex_string_from_color_int(color)};
    std::cout << "Hex string from color: " << hex_str << std::endl;

    return 0;
}

