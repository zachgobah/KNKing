#include <stdio.h>

int main() {

    int hrs = 0, mins = 0;
    int arrival = 0, arrival_hrs = 0, arrival_mins = 0;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hrs, &mins);
    char time_period[2] = "a";
    char arrival_period[2] = "a";

    /* departure times:
        8:00 - 480
        9:43 - 583
        11:19 - 679
        12:47 - 767
        2:00 - 840
        3:45 - 945
        7:00 - 1140
        9:45 - 1305

       arrival times:
        10:16 - 616
        11:52 - 712
        1:31 - 811
        3:00 - 900
        4:08 - 968
        5:55 - 1075
        9:20 - 1280
        11:58 - 1438

    Calculating midpoints

    A + (B - A) / 2

    480 + (583 - 480) / 2 = 531.5       - 8:00 to 9:43
    583 + (679 - 583) / 2 = 631         - 9:43 to 11:19
    679 + (767 - 679) / 2 = 723         - 11:19 to 12:47
    767 + (840 - 767) / 2 = 803.5       - 12:47 to 2:00
    840 + (945 - 840) / 2 = 892.5       - 2:00 to 3:45
    945 + (1140 - 945) / 2 = 1042.5     - 3:45 to 7:00
    1140 + (1305 - 1140) / 2 = 1222.5   - 7:00 to 9:45

    */

    hrs = ((hrs * 60) + mins);

    if (hrs <= 531) {
        hrs = 480;
        arrival = 616;
    } else if (hrs <= 631){
        hrs = 583;
        arrival = 712;
    } else if (hrs <= 723){
        hrs = 679;
        arrival = 811;
    } else if (hrs <= 803){
        hrs = 767;
        arrival = 900;
    } else if (hrs <= 892){
        hrs = 840;
        arrival = 968;
    } else if (hrs <= 1042){
        hrs = 945;
        arrival = 1075;
    } else if (hrs <= 1222){
        hrs = 1140;
        arrival = 1280;
    } else {
        hrs = 1305;
        arrival = 1438;
    }

    mins = (hrs % 60);
    hrs = (hrs / 60);

    if (hrs >= 12){
        time_period[0] = 'p';
        if (hrs > 12){
            hrs = (hrs - 12);
        }
    } else if (hrs == 0){
        hrs = 12;
    }

    arrival_mins = (arrival % 60);
    arrival_hrs = (arrival / 60);

    if (arrival_hrs >= 12){
        arrival_period[0] = 'p';
        if (arrival_hrs > 12){
        arrival_hrs = (arrival_hrs - 12);
        }
    } else if (hrs == 0){
        arrival_hrs = 12;
    }

    printf("Closest departure time is: %d:%02d %s.m., arriving at %d:%02d %s.m.\n", hrs, mins, time_period, arrival_hrs, arrival_mins, arrival_period);

    return 0;

}
