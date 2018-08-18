#ifndef PIN_PART
#define PIN_PART

#include <iostream>
#include <string>
#include <list>

class evl_pin {
    std::string name;
    int bus_msb;
    int bus_lsb;
public:
    evl_pin(std::string n, int m, int l)
        : name(n), bus_msb(m), bus_lsb(l) {}

    std::string get_name() const { return name; }
    void set_name(std::string new_name) { name = new_name; }

    int get_msb() const { return bus_msb; }
    void set_msb(int new_msb) { bus_msb = new_msb; }

    int get_lsb() const { return bus_lsb; }
    void set_lsb(int new_lsb) { bus_lsb = new_lsb; }

    void display(
        std::ostream &out
    ) const;

    ~evl_pin() {}
}; // pin class

typedef std::list<evl_pin> evl_pins;

#endif