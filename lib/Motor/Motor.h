#pragma once

#include "Arduino.h"

class Motor 
{
    public:
        Motor(int, int);
        void setSpeed(int);
        void forward(int);
        void reverse(int);
        void stop();
        void coast();
    private:
        int pinIn1;
        int pinIn2;
        
};