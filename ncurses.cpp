#include <iostream>
#include <unistd.h>
#include <ncurses.h>

int main() {
    initscr();
    WINDOW *win = newwin(10, 10, 10, 10);
    box(win, '*', '+');

    refresh();
    wrefresh(win);

    waddch(win, 'A');
    mvwprintw(win, 5, 5, "HELOO");

    wrefresh(win);

    getch();
    endwin();
    delwin(win);
    return 0;
}



// int main() {
//     initscr();
//     noecho();
//     addch('H' | A_UNDERLINE);
//     addch('E' | A_UNDERLINE);
//     addch('L' | A_BOLD);
//     addch('L' | A_BOLD);
//     addch('O' | A_BOLD);
//     getch();
//     endwin();

//     return 0;

// }


// int main() {
//     initscr();
//     WINDOW *win = newwin(10, 10, 1, 1);
//     box(win, '*', '+');
//     refresh();
//     wrefresh(win);
//     getch();
//     endwin();
//     delwin(win);
//     return 0;
// }
