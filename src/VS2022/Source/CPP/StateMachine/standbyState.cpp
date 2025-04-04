#include <iostream>
#include "standbyState.h"
#include "stateMachine.h"

void StandbyState::handleEvent(Event event, State*& nextState) {
    switch (event) {
    case Event::KEY_ON:
        nextState = &StateMachine::readyState;
        break;
    default:
        // Khong xu ly
        break;
    }
 }

void StandbyState::onEntry() {
    turnOffDashboard();
}

void StandbyState::onExit() {
    std::cout << "StandbyState::onExit - Exit StanbyState" << std::endl;
}


void StandbyState::turnOffDashboard() {
    std::cout << "StandbyState::turnOffDashboard - Tun Off Dash Board" << std::endl;
}

StandbyState::~StandbyState() {
    //do nothing
}

