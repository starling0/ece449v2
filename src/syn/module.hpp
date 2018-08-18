#ifndef MODULE
#define MODULE

#include <iostream>
#include <string>
#include <list>
#include <map>

#include "../lex/lex.hpp"
#include "component/component.hpp"
#include "wire/wire.hpp"

//class evl_tokens;

class evl_module {
    typedef std::map<std::string, int> evl_wires_table;
    std::string name;
    evl_wires wires;
    evl_components components;
    evl_wires_table wires_table;

protected:
    bool add_wire_to_table(const evl_wire &w);

    bool get_module_name(
        evl_tokens &t
    );

    bool get_wires(
        evl_tokens &t
    );

    bool get_component(
        evl_tokens &t
    );

public:
    evl_module() {}

    std::string get_name() const { return name; }

    evl_wires get_wires_list() const { return wires; }

    evl_wires::const_iterator wires_begin() const
        { return wires.begin(); }
    evl_wires::const_iterator wires_end() const
        { return wires.end(); }

    evl_components::const_iterator components_begin() const
        { return components.begin(); }
    evl_components::const_iterator components_end() const
        { return components.end(); }

    evl_wires_table get_wires_table() const { return wires_table; }

    bool group(
        evl_tokens &tokens
    );

    void display(
        std::ostream &out
    ) const;

    bool store(
        std::string file_name
    ) const;

    ~evl_module() {}
}; // evl_module class

typedef std::list<evl_module> evl_modules;

#endif
