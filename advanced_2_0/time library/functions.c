#include <stdio.h>
#include <time.h>

// Function declaration without parameters
int get_current_time(void);

int main() {
    int current_time = get_current_time();
    printf("Current time (seconds since epoch): %d\n", current_time);
    return 0;
}

// Function definition without parameters
int get_current_time(void) {
    time_t t;
    time(&t);
    return (int)t;
}




