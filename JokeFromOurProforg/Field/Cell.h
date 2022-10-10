#ifndef SURVIVE_CELL_H
#define SURVIVE_CELL_H

#include "Event/Event.h"
#include "Event/EventManager.h"

class Cell {
public:
    Cell() : mManager(nullptr), mWall(false), mEvent(nullptr) {};
    Cell(const Cell& obj);

    Cell& operator =(Cell const& other);

    bool IsWall() const { return mWall; }
    void SetWall(bool val) { mWall = val; }
    void SetManager(EventManager* manager) { mManager = manager; }

    void ActiveEvent();

private:
    bool mWall;
    Event* mEvent;
    EventManager* mManager;
};

#endif //SURVIVE_CELL_H