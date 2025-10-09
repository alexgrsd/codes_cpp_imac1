#include "color_hex.hpp"
#include "color.hpp"
#include <string>

Color::Rgb color_from_hex(unsigned int const hex){

    unsigned int r {(hex & 0xff0000) >> 16};
    unsigned int g {(hex & 0x00ff00) >> 8};
    unsigned int b {(hex & 0x0000ff)};

    return Color::Rgb{static_cast<unsigned char>(r), static_cast<unsigned char>(g), static_cast<unsigned char>(b)};
}

unsigned int hex_from_color_int(Color::Rgb const& col){

    unsigned int hex;
    unsigned int r_hex {static_cast<unsigned int>(col.r) << 16};
    unsigned int g_hex {static_cast<unsigned int>(col.g) << 8};
    unsigned int b_hex {static_cast<unsigned int>(col.b)};
    hex = r_hex + g_hex + b_hex;
    return hex;
}

Color::Rgb color_from_hex(std::string const& hex_str){
    int hex {std::stoi(hex_str.substr(1), nullptr, 16)};
    std::cout << hex << std::endl;
    return color_from_hex(hex);
}

std::string hex_from_color_string(Color::Rgb const& col){
    unsigned int hex {hex_from_color_int(col)};
    std::string hex_str {"#"};

    return hex_str;
}