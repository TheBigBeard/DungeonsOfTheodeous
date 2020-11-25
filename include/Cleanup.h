#ifndef CLEANUP_H
#define CLEANUP_H

#include <stdlib.h>
#include <ncurses.h>


class Cleanup
{
    public:
        void destroyAndEnd(WINDOW *mainwin);

    protected:

    private:
};

#endif // CLEANUP_H
