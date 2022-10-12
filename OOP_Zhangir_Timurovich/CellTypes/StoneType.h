#pragma once

#include "CellType.h"

class StoneType : public CellType {
public:
    StoneType();

    ~StoneType() override = default;

    void execute() override {};

    bool get_pass() override;


private:
    bool pass;
};

