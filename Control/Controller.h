#ifndef LABS_CONTROLLER_H
#define LABS_CONTROLLER_H

#include "../Background/FieldView.h"
#include "../Characters/PlayerView.h"
#include "GameStatus.h"

class Controller {
public:
    Controller();
    ~Controller();

    void set_field(int, int);
    void set_field_standard();
    void set_step(Player::STEP);

    void check_win_game();
    void check_end_game();
    GameStatus::STATUS get_status() const;
private:
    Player          player;
    Field            field;
    PlayerView player_view;
    FieldView   field_view;
    GameLog      field_log;
    GameLog     player_log;
    StatusLog*  status_log;
    GameStatus game_status;
};


#endif