#ifndef LABS_NEWLEVEL_H
#define LABS_NEWLEVEL_H

#include "EventField.h"
#include "../../Background/Field.h"

class SetWalls final : public EventField {
public:
    explicit SetWalls(Field*);
    void execute() final;
};


#endif
