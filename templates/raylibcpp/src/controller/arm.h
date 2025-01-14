#ifndef ARM_H
#define ARM_H

#include <string>

void controller_function();

class Controller {
public:
    Controller(const std::string& name);

    std::string getName() const;

    void displayStatus() const;

private:
    std::string name;
};

#endif
