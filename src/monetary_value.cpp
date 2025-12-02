#include <iostream>

class MonetaryValue {
    public:
        int cents;

    public:
        MonetaryValue(int cents) { this->cents = cents; };
        bool is_negative() { return cents < 0; };
};

int main() {
    MonetaryValue val(50);

    std::cout << val.cents << "\n";
    std::cout << val.is_negative() << "\n";

    return 0;
}