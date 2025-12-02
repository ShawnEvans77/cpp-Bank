#include <iostream>

class Name {
    private:
        std::string first;
        std::string last;

    public:
        Name(std::string first, std:: string last) {
            this->first = first;
            this->last = last;
        }

        void set_first(std::string first) { this->first = first;}
        void set_last(std::string first) { this->first = first;}
        std::string get_first() {return first;}
        std::string get_last() {return last;}    
};