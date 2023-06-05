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
    analogWrite(pinIn1, 255);
    analogWrite(pinIn2, 255);
}

void Motor::coast()
{
    //brake low -> this will free the wheels and let the robot continue to move under its own momentum.
    analogWrite(pinIn1, 0);
    analogWrite(pinIn2, 0);

}

void Motor::forward(int speed){
    setSpeed(speed);
}

void Motor::reverse(int speed){
    setSpeed(-1 * speed);
}

void Motor::setSpeed(int value)
{
    
    
    if(value == 0)
    {
        stop();
    }
    else if(value > 0)
    {
        value = constrain(abs(value),0,100);
        value = map(value,0,100,0,255);
        analogWrite(pinIn2, 0);
        analogWrite(pinIn1, value);
        
        
    }
    else if(value < 0)
    {
       
        value = constrain(abs(value),0,100);
        value = map(value,0,100,0,255);
        analogWrite(pinIn1, 0);
        analogWrite(pinIn2, value);
        
    }
}