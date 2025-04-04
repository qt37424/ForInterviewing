#ifndef READYSTATE_H
#define READYSTATE_H
#include "common_data.h"
#include "state.h"
class ReadyState : public State {
public:
    virtual void handleEvent(Event event, State*& nextState);
    virtual void onEntry();
    virtual void onExit();
    virtual ~ReadyState();

private:
    void turnOnDashboard();
    bool isBreakHold{ true };
    bool isKickStandDown{ true };
};


#endif