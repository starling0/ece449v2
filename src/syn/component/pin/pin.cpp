//#include <iostream>
//#include <string>

#include "pin.hpp"

void evl_pin::display(
    std::ostream &out) const {

    out << "    pin " << name;
    if(bus_msb != -1) {
        out << " " << bus_msb;
    }
    if(bus_lsb != -1) {
        out << " " << bus_lsb;
    }
    out << std::endl;
}