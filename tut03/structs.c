// COMP1511 Tut03 - structs
// Ada Luong, September 2021

#include <stdio.h>

struct time {
    int hour;
    int minute;
    char meridian;
};

int main (void) {
    
    // struct time lockdown_opening;
    // lockdown_opening.hour = 1;
    // lockdown_opening.minute = 2;
    // lockdown_opening.meridian = 'p';

    struct time tutorial_start_time;
    tutorial_start_time.hour = 9;
    tutorial_start_time.minute = 0;
    tutorial_start_time.meridian = 'a';

    // starts at 9:00am 
    printf("the tutorial starts at %02d:%02d%cm\n", tutorial_start_time.hour, tutorial_start_time.minute, tutorial_start_time.meridian);

    return 0;
}