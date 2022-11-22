#ifndef LABS_RULESPAWNBOX_H
#define LABS_RULESPAWNBOX_H


#include "Field/Field.h"

template<int magic_number, int max_count>
class RuleSpawnBox {
    void operator()(Field& field) {
        auto player = field.get_player();
        int k = 0;

        for (int i = 1; i != field.get_height(); ++i) {
            for (int j = 0; j != field.get_width(); ++j) {
                if (k == max_count) return;
                if ((magic_number / i) % field.get_height() % 7 == 0
                && (magic_number / j) % field.get_width() % 7 == 0 && field.get_cur_cell(j, i).get_event() == nullptr) {
                    field.get_cur_cell(j, i).set_event(new Box(player));
                    ++k;
                }
            }
        }
    }
};

#endif
