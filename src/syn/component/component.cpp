#include <algorithm>

#include "component.hpp"

void evl_component::display(
    std::ostream &out) const {

    out << "  component " << type << " ";
    if(name != "") {
        out << name << " ";
    }
    out << pins.size() << std::endl;
    for_each(pins_begin(), pins_end(),
        [&](evl_pin p) {
            p.display(out);
        }
    );
}