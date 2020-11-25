#include "Cleanup.h"

void Cleanup::destroyAndEnd(WINDOW *mainwin) {
    delwin(mainwin);
    endwin();
    refresh();
}
