#include <iostream>

using namespace std;

struct Position {
    int x;
    int y;

};

enum Direction {
    FORWARD,
    DOWN,
    BACKWARD,
    UP
};

struct Move {
    Direction dir;
    int distance;
};

void move_position(Position &pos, Direction dir, int distance) {
    switch (dir) {
        case Direction::UP:
            pos.y += distance;
            break;
        case Direction::DOWN:
            pos.y -= distance;
            break;
        case Direction::BACKWARD:
            pos.x -= distance;
            break;
        case Direction::FORWARD:
            pos.x += distance;
            break;
    }
}

void display(const Position &pos) {
    cout << "Position: (" << pos.x << ", " << pos.y << ")" << endl;
}


int main() {

    Position pos = {0, 0};

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
    for (const auto &move : moves) {
        move_position(pos, move.dir, move.distance);
        display(pos);
    }
}