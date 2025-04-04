#ifndef STATEMACHINE_H
#define STATEMACHINE_H
#include "common_data.h"
#include "state.h"
#include "standbyState.h"
#include "readyState.h"
#include "runningState.h"
#include "IdlingState.h"

class StateMachine {
public:
    static StandbyState standbyState;
    static ReadyState readyState;
    static RunningState runningState;
    static IdlingState idlingState;

    StateMachine();
    void transition(Event event);

private:
    State* currentState;
};

#endif