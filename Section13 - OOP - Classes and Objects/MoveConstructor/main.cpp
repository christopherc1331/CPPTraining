#include <iostream>
#include <vector>

using namespace std;

class Move {
private:
    int *data;
public:
    void setDataValue(int d) {
        *data = d;
    }

    int getDataValue() {
        return *data;
    }

    // Constructor
    Move(int d);

    // Copy Constructor
    Move(const Move &source);

    // Move Constructor
    Move(Move &&source) noexcept;

    // Destructor
    ~Move();
};

Move::Move(int d) {

    // allocate resources
    data = new int;
    *data = d;
}

Move::Move(const Move &source)
    :Move{*source.data} {};

Move::Move(Move &&source) noexcept
    :data{source.data} {
    source.data = nullptr;
}

Move::~Move() {
    cout << "Freeing up data from Move object" << endl;
}

int main() {
    vector<Move> vec;

    vec.push_back(Move{10});

    return 0;
}
