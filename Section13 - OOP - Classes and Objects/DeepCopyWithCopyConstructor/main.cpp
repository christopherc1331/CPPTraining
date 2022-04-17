#include <iostream>

using namespace std;

class Deep {
private:
    int *data;
public:
    void setDataValue(int d) {
        *data = d;
    }

    int getDataValue() {
        return *data;
    }

    Deep(int d);

    Deep(const Deep &source);

    ~Deep();
};

Deep::Deep(int d) {
    data = new int;
    *data = d;
}

Deep::Deep(const Deep &source)
        :Deep{*source.data} {
    cout << "Copy constructor - shallow copy" << endl;
}

Deep::~Deep() {
    delete data;
    cout << "Destructor freeing data" << endl;
}

void displayDeep(Deep s) {
    cout << s.getDataValue() << endl;
}

int main() {

    Deep obj1{100};
    displayDeep(obj1);

    Deep obj2{obj1};
    obj2.setDataValue(1000);
    displayDeep(obj2);

    return 0;
}
