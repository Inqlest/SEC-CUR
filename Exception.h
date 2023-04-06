#pragma once
#include <iostream>

class Ex : public std::exception {
protected:
const char* message;
public:
    Ex(const char* message);
    virtual const char* what() const noexcept override;
};