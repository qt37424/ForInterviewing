#include <iostream>
#include "stateMachine.h"


 int main() {
     StateMachine machine;

     machine.transition(Event::KEY_ON);
     machine.transition(Event::START_ENGINE_PRESSED);
     machine.transition(Event::STOP_5S);
     machine.transition(Event::KICKSTAND_DOWN);
     machine.transition(Event::TURN_THROTTLE);
     machine.transition(Event::KEY_OFF);

     return 0;
 }
