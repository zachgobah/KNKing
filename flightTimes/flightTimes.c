#include <stdio.h>

int main(){
    unsigned int hrs = 0, minutes = 0, time = 0;

    while(1){
        printf("Enter a 24-hour time: ");
        scanf("%d:%2d", &hrs, &minutes);

        if (minutes > 60 || minutes < 0 || hrs > 23 || hrs < 0){
            printf("INVALID INPUT! Please try again.\n\n");
        } else {
            break;
        }
    }

    time = (hrs * 60) + minutes;

    unsigned int departure[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    unsigned int arrival[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    unsigned int diff = 0;
    unsigned int closest = 0;
    unsigned int closestArr = 0;
    unsigned int arrHrs = 0, arrMins = 0;
    char ampm[3] = "AM";
    char ampmArr[3] = "AM";

    size_t size = sizeof(departure) / sizeof(departure[0]);

    for (int i = 0; i < size; i++){
        if (time < departure[i]){
            if (i == 0){
                diff = (departure[i] - time);
                closest = departure[i];
                closestArr = arrival[i];
            }
            if (i+1 > size){
                break;
            }
            if (diff > departure[i+1] - time){
                diff = (departure[i+1] - time);
                closest = departure[i+1];
                closestArr = arrival[i+1];
            }
        } else if (time >= departure[i]){
            if (i == 0){
                diff = (time - departure[i]);
                closest = departure[i];
                closestArr = arrival[i];
            }
            if (i+1 > size){
                break;
            }
            if (diff > time - departure[i+1]){
                diff = time - departure[i+1];
                closest = departure[i+1];
                closestArr = arrival[i+1];
            }
        }
    }

    hrs = (closest / 60);
    minutes = (closest % 60);

    arrHrs = (closestArr / 60);
    arrMins = (closestArr % 60);

    if (hrs >= 13){
        ampm[0] = 'P';
        hrs = (hrs - 12);
    }

    if (arrHrs >= 13){
        ampmArr[0] = 'P';
        arrHrs = (arrHrs - 12);
    }

    if (hrs == 0){
        hrs = 12;
    }

    if (arrHrs == 0){
        arrHrs = 12;
    }

    printf("The closest departure is: %u:%02u %s, arriving at %u:%02u %s\n", hrs, minutes, ampm, arrHrs, arrMins, ampmArr);

    return 0;

}
