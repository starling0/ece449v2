#ifndef COMPONENT_PART
#define COMPONENT_PART

#include <iostream>
#include <string>
#include <list>

#include "pin/pin.hpp"

class evl_component {
    std::string type;
    std::string name;
    evl_pins pins;
public:
    evl_component(std::string t, std::string n)
        : type(t), name(n) {}

    std::string get_name() const { return name; }
    void set_name(std::string new_name) { name = new_name; }

    std::string get_type() const { return type; }
    void set_type(std::string new_type) { type = new_type; }

    void display(
        std::ostream &out
    ) const;

    evl_pins::const_iterator pins_begin() const
        { return pins.begin(); }
    evl_pins::const_iterator pins_end() const
        { return pins.end(); }
    void add_pin(evl_pin pin) { pins.push_back(pin); }

    ~evl_component() {}
}; // evl_component class

typedef std::list<evl_component> evl_components;

#endif