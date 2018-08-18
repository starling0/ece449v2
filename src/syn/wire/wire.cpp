//#include <iostream>
//#include <string>

#include "wire.hpp"

void evl_wire::display(
    std::ostream &out) const {

    out << "  wire " << name << " "
        << width << std::endl;
}