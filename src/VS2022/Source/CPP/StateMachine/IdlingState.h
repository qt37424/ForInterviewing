#ifndef IDLINGSTATE_H
#define IDLINGSTATE_H
#include "common_data.h"
#include "state.h"

class IdlingState : public State {
public:
    virtual void handleEvent(Event event, State*& nextState);
    virtual void onEntry();
    virtual void onExit();
    virtual ~IdlingState();
};

#endif