#include <iostream>
#include "stateMachine.h"
#include "readyState.h"


void ReadyState::handleEvent(Event event, State*& nextState) {
    switch (event) {
    case Event::START_ENGINE_PRESSED:
        if (isBreakHold && !isKickStandDown) {
            nextState = &StateMachine::runningState;
        }
        break;
    case Event::KEY_OFF:
        nextState = &StateMachine::standbyState;
        break;
    default:
        break;
    }
}

void ReadyState::onEntry() {
    turnOnDashboard();
}

void ReadyState::onExit() {
    std::cout << "ReadyState::onExit - Exit ReadyState" << std::endl;
}


void ReadyState::turnOnDashboard() {
    std::cout << "ReadyState::turnOnDashboard - Tun On Dash Board" << std::endl;
}

ReadyState::~ReadyState() {
    //do nothing
}