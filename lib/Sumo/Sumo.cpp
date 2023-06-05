#include "Sumo.h"
#include "Constants.h"

Sumo::Sumo()
{

   
}


void Sumo::forward(int speed){

    _motor1.forward(speed);
    _motor2.forward(speed);

}

void Sumo::reverse(int speed){

    _motor1.reverse(speed);
    _motor2.reverse(speed);

}
void Sumo::left(int speed){

    _motor1.reverse(speed);
    _motor2.reverse(0);

}
void Sumo::right(int speed){

    _motor1.reverse(0);
    _motor2.reverse(speed);
}
void Sumo::stop(){

    _motor1.stop();
    _motor2.stop();
}

void Sumo::coast(){

    _motor1.coast();
    _motor2.coast();
}