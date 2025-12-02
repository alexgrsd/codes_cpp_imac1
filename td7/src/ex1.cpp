#include <iostream>

using namespace std;

struct submarine {
    int x {0};
    int y {0};

};

string sub = R"( 

 /--------------------------------\
 |  roger, position is ()";

string sub2 = R"()   |
 \--------------------------------/


                             ?
 ~~~~~~~~~~~~~~~~~~~~~~~~~~~|^"~~~~~~~~~~~~~~~~~~~~~~~~~o~~~~~~~~~~~
        o                   |                  o      __o
         o                  |                 o     |X__>
       ___o                 |                __o
     (X___>--             __|__            |X__>     o
                         |     \                   __o
                         |      \                |X__>
  _______________________|_______\________________
 <                                                \____________   _
  \                                                            \ (_)
   \    O       O       O                                       >=)
    \__________________________________________________________/ (_)

                            ___
                           / o \
                      __   \   /   _
                        \__/ | \__/ \
                       \___//|\\___/\
                        ___/ | \___          
                             |     \
                            /
)";

enum class Direction {
    FORWARD,
    DOWN,
    BACKWARD,
    UP
};

struct Move {
    Direction dir {Direction::FORWARD};
    int distance {0};
};

void move_position(submarine &sub, Direction dir, int distance) {
    switch (dir) {
        case Direction::UP:
            sub.y += distance;
            break;
        case Direction::DOWN:
            sub.y -= distance;
            break;
        case Direction::BACKWARD:
            sub.x -= distance;
            break;
        case Direction::FORWARD:
            sub.x += distance;
            break;
    }
}

void display(const submarine &sub) {
    cout << "Position: (" << sub.x << ", " << sub.y << ")" << endl;
}

void display_2(const submarine &sub_pos){
    cout << sub << sub_pos.x << ", " << sub_pos.y << sub2;
}


int main() {

    submarine sub = {0, 0};
    std::vector<Move> moves {
    {Direction::FORWARD, 10},
    {Direction::DOWN, 5},
    {Direction::BACKWARD, 3},
    {Direction::UP, 2},
    {Direction::FORWARD, 5},
    {Direction::DOWN, 1},
    {Direction::BACKWARD, 2},
    {Direction::FORWARD, 3},
    {Direction::DOWN, 1},
    {Direction::UP, 3},
    {Direction::FORWARD, 1},
    {Direction::DOWN, 5},
    {Direction::BACKWARD, 2},
    {Direction::FORWARD, 6}
    };
    for (const Move &move : moves) {
        move_position(sub, move.dir, move.distance);
        display(sub);
    }

    display_2(sub);
}