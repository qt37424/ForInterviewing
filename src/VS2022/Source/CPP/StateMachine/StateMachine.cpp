#include "stateMachine.h"


StateMachine::StateMachine() {
    currentState = &standbyState;
    currentState->onEntry();
}

void StateMachine::transition(Event event) {
    State* nextState = currentState;
    currentState->handleEvent(event, nextState);
    if (currentState != nextState) {
        currentState->onExit();
        currentState = nextState;
        currentState->onEntry();
    }
}
StandbyState StateMachine::standbyState {};
ReadyState StateMachine::readyState {};
RunningState StateMachine::runningState {};
IdlingState StateMachine::idlingState {};