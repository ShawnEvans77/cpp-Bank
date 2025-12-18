class MonetaryValue {
    public:
        int cents;

    public:
        MonetaryValue(int cents) : cents(cents) // we call this the member initializer list. 
            {}

        MonetaryValue(double amount) : cents((int) (amount * 100))
            {}

        bool is_negative() { return cents < 0; };

        int get_cents() { 
            return cents; 
        }
};