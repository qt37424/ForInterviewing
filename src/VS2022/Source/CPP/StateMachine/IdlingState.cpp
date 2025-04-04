#include <iostream>
#include "IdlingState.h"
#include "stateMachine.h"


void IdlingState::handleEvent(Event event, State*& nextState) {
    switch (event) {
    case Event::KICKSTAND_DOWN:
        nextState = &StateMachine::readyState;
        break;
    case Event::TURN_THROTTLE:
        nextState = &StateMachine::runningState;
        break;
    case Event::KEY_OFF:
        nextState = &StateMachine::standbyState;
        break;
    default:
        break;
    }
}

void IdlingState::onEntry() {
    std::cout << "IdlingState::onEntry - go to Idling State" << std::endl;
}

void IdlingState::onExit() {
    std::cout << "IdlingState::onExit - Exit dling State" << std::endl;
}

IdlingState::~IdlingState() {
//do nothing
}
