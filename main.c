#include <stdio.h>

struct time {
    unsigned int hours;
    unsigned int minutes;
    double seconds;
};

double seconds_diff(struct time time_a, struct time time_b);

int main(void) {
    struct time time_a;
    struct time time_b;
    
    printf("First time (hh:mm:ss): \n");
    scanf("%d:%d:%lf", &time_a.hours, &time_a.minutes, &time_a.seconds);

    printf("Second time (hh:mm:ss): \n");
    scanf("%d:%d:%lf", &time_b.hours, &time_b.minutes, &time_b.seconds);
    
    if (seconds_diff(time_a, time_b) > 0) {
        printf("\nThe first time has %.2f more seconds than the second time", seconds_diff(time_a, time_b));
    }
    else if (seconds_diff(time_a, time_b) < 0) {
        printf("\nThe second time has %.2f more seconds than the first time", seconds_diff(time_a, time_b) * -1);
    }
    else {
        printf("\nThose times have equals number of seconds !");
    }

    return 0;
}

double seconds_diff(struct time time_a, struct time time_b) {
    double seconds_a, seconds_b;

    seconds_a = (time_a.hours * 3600) + (time_a.minutes * 60) + time_a.seconds;

    seconds_b = (time_b.hours * 3600) + (time_b.minutes * 60) + time_b.seconds;

    return seconds_a - seconds_b;
}