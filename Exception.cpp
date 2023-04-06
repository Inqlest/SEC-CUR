#include "Exception.h"

    Ex::Ex(const char* message){
        this->message = message;
    }
    const char* Ex::what() const noexcept {return Ex::message;}