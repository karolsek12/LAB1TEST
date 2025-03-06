#include <iostream>
#include "vars.hpp"
#include "greeter.hpp"

int main(){

    greeter::english();
    greeter::polish();
    greeter::greek();

    print_vars();
    inc_vars();
    print_vars();
    
    std::cout << global_extern << "\n";

    return 0;
}