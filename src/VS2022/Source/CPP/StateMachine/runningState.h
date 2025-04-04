#ifndef RUNNINGSTATE_H
#define RUNNINGSTATE_H
#include "common_data.h"
#include "state.h"
class RunningState : public State {
public:
    virtual void handleEvent(Event event, State*& nextState);
    virtual void onEntry();
    virtual void onExit();
    virtual ~RunningState();

private:
    void turnOnEngine(); // Thuc hien hanh dong bat dong co 
    void turnOffEngine(); // thuc hien hanh dong tat dong co 
    void move(); // thuc hien hanh dong di chuyen 
};

#endif