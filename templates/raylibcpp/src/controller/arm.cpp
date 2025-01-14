#include "arm.h"

#include <iostream>
#include <ostream>
#include <string>

void controller_function() {
    std::cout << "Hello from Controller!\n" << std::endl;
}

Controller::Controller(const std::string& name)
    : name(name) {}

std::string Controller::getName() const {
    return name;
}

void Controller::displayStatus() const {
    std::cout << "Controller: " 
        << name 
        << "\n" 
        << "Crazy isn't it??" 
        << std::endl;
}
