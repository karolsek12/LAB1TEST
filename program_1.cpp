#include <iostream>
#include "vars.hpp"

int main(){
    print_vars();
    inc_vars();
    print_vars();
    
    cout << global_extern << "\n";

    return 0;
}