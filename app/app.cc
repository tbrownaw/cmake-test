#include <iostream>

#include "hello.hh"
#include "external.hh"

int main(int argc, char **argv) {
    std::cout<<get_number()<<"\n";
    hello();
    return 0;
}