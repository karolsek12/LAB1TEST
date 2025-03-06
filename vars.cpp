#include <iostream>
#include <vars.hpp>

int global_extern = 0;
static int global_static = 0;

void inc_vars(){
    cout << "Increasing...";
    global_extern++;
    global_static++;
}

void print_vars(){
    std::cout << "global_extern: " << global_extern << "\n";
    std::cout << "global_static: " << global_static << "\n";
}