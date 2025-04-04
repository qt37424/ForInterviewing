#include <iostream>
#include "runningState.h"
#include "stateMachine.h"

void RunningState::handleEvent(Event event, State*& nextState) {
    switch (event) {
    case Event::STOP_5S:
        nextState = &StateMachine::idlingState;
        break;
    case Event::KICKSTAND_DOWN:
        nextState = &StateMachine::readyState;
        break;
    case Event::KEY_OFF:
        nextState = &StateMachine::standbyState;
        break;
    case Event::TURN_THROTTLE:
        move();
        break;
    default:
        break;
    }
}

void RunningState::onEntry() {
    turnOnEngine();
}

void RunningState::onExit() {
    turnOffEngine();
}

void RunningState::turnOnEngine() {
    std::cout << "RunningState::turnOnEngine - Tun On Engine" << std::endl;
}

void RunningState::turnOffEngine() {
    std::cout << "RunningState::turnOffEngine - Tun Off Engine" << std::endl;
}

void RunningState::move() {
    std::cout << "RunningState::move - motorbyte starts running" << std::endl;
}

RunningState::~RunningState() {
    std::cout << "Do nothing";
}
