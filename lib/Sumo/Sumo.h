
#pragma once

#include "Motor.h"
#include "Constants.h"


class Sumo
{
    public:
       

        Sumo();
        void forward(int);
        void reverse(int);
        void left(int);
        void right(int);
        void stop();
        void coast();
        

    private:
     
        Motor _motor1 = Motor(MOTOR_1A,MOTOR_1B);
        Motor _motor2 = Motor(MOTOR_2A,MOTOR_2B);
       
        
};