#ifndef STARTGAME_H
#define STARTGAME_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <ncurses.h>
#include "InitialScreen.h"
#include "Cleanup.h"

std::vector<char> gameTitle = {'D', 'U', 'N', 'G', 'E', 'O', 'N', 'S', ' ', 'O', 'F', ' ', 'T', 'H', 'E', 'O', 'D', 'E', 'O', 'U', 'S'};

class StartGame
{
    public:
        int main();

    protected:

    private:
};

#endif
