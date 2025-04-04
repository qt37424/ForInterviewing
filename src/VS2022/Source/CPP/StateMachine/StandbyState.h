#ifndef STANDBYSTATE_H
#define STANDBYSTATE_H
#include "common_data.h"
#include "state.h"

class StandbyState : public State {
public:
    virtual void handleEvent(Event event, State*& nextState);
    virtual void onEntry();
    virtual void onExit();
    virtual ~StandbyState();
private:
    void turnOffDashboard();
};

#endif
