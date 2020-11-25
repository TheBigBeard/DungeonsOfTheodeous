#include "StartGame.h"

int main() {
    InitialScreen initialScreen;
    Cleanup cleanup;
    WINDOW *mainwin;
    if ((mainwin = initscr()) == NULL ) {
        fprintf(stderr, "Error initialising ncurses.\n");
        exit(EXIT_FAILURE);
    }
    initialScreen.buildInitialScreen(gameTitle);
    sleep(3);
    cleanup.destroyAndEnd(mainwin);
    return 0;
}


