
#include <iostream>

class Beta; // Forward declaration of class Beta

class Alpha {
private:
    int privateValue;

public:
    Alpha() : privateValue(42) {}

    // Declare Beta as a friend class
    friend class Beta;
};

class Beta {
public:
    void showPrivateValue(Alpha& a) {
        std::cout << "The private value of Alpha is: " << a.privateValue << std::endl;
    }
};

int main() {
    Alpha a;
    Beta b;
    b.showPrivateValue(a);

    return 0;
}