#include <iostream>

class MonetaryValue {
    public:
        int cents;

    public:
        MonetaryValue(int cents) : cents(cents) // we call this the member initializer list. 
            {}

        MonetaryValue(double amount) {
            this->cents = (int) (amount * 100);
        }

        bool is_negative() { 
            return cents < 0;
         };

        int get_cents() { 
            return cents; 
        }
};

int main() {
    MonetaryValue val(455);

    std::cout << val.get_cents() << "\n";

    return 0;
}