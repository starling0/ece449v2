#ifndef WIRE_PART
#define WIRE_PART

#include <iostream>
#include <string>
#include <list>

class evl_wire {
    std::string name;
    int width;
public:
    evl_wire(std::string n, int w)
        : name(n), width(w) {}

    std::string get_name() const { return name; }

    int get_width() const { return width; }

    void display(
        std::ostream &out
    ) const;

    ~evl_wire() {}
}; // evl_wire class

typedef std::list<evl_wire> evl_wires;

#endif