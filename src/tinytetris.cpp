#include <ctime>    //   ████████  ██████  ████████  ████████  ██  ██████  ██
#include "curses.h" //      ██     ██         ██     ██    ██  ██  ██      ██
#include <stdlib.h> //      ██     ████       ██     ████████  ██  ██████  ██
#include <string.h> //      ██     ██         ██     ██  ██    ██      ██
#include <unistd.h> //      ██     ██████     ██     ██    ██  ██  ██████  ██

int main() {
    srand((unsigned int) time(0));
    initscr();
    return 0;
}