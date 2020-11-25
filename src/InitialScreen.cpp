#include "InitialScreen.h"

void InitialScreen::buildInitialScreen(const std::vector<char> &gameTitle) {
    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);
    color_set(1, NULL);
    int position = 10;
    for (int i = 0; i < gameTitle.size(); ++i) {
        mvaddch(10, position, gameTitle[i]);
        refresh();
        position = position + 2;
        sleep(1);
    }

}
