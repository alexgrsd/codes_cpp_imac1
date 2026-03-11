#pragma once

namespace Color {

    struct Rgb {
        unsigned int r;
        unsigned int g;
        unsigned int b;
    };

}

void print_color(const Color::Rgb& col);