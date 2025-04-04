#ifndef STATE_H
#define STATE_H
#include "common_data.h"

class State {
public:
    virtual void handleEvent(Event event, State*& nextState) = 0;
    virtual void onEntry() = 0;
    virtual void onExit() = 0;
    virtual ~State() {};
};

#endif
