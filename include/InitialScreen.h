#ifndef INITIALSCREEN_H
#define INITIALSCREEN_H

#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#include <vector>


class InitialScreen
{
    public:
        void buildInitialScreen(const std::vector<char> &gameTitle);

    protected:

    private:
};

#endif // INITIALSCREEN_H
