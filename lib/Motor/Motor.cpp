#include "motor.h"

Motor::Motor(int p1, int p2)
{
    pinMode(p1, OUTPUT);
    pinMode(p2, OUTPUT);
    
   
    pinIn1 = p1;
    pinIn2 = p2;
    
   
}
void Motor::stop()
{
    
    //brake high -> this will stop the wheels
    digitalWrite(pinIn1, HIGH);
    digitalWrite(pinIn2, HIGH);
}

void Motor::coast()
{
    //brake low -> this will free the wheels and let the robot continue to move under its own momentum.
    digitalWrite(pinIn1, LOW);
    digitalWrite(pinIn2, LOW);

}

void Motor::forward(int speed){
    setSpeed(speed);
}

void Motor::reverse(int speed){
    setSpeed(-1 * speed);
}

void Motor::setSpeed(int value)
{
    
    if(value > 255)
    {
        value = 255;
    }
    if(value < -255)
    {
        value = -255;
    }
    if(value == 0)
    {
        stop();
    }
    else if(value > 0 && value <= 255)
    {
        analogWrite(pinIn1, int((0xffff * (abs(value) / 255))));
        analogWrite(pinIn2, 0);
        
    }
    else if(value < 0 && value >= -255)
    {
        
        analogWrite(pinIn1, 0);
        analogWrite(pinIn2, int((0xffff * (abs(value) / 255))));
        
    }
}