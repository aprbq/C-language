#include <stdio.h>
void read_time();
void convert_time();
void print_time();    
int time,hour = 0,minute = 0,second = 0;
int main(void) {
    read_time();
    convert_time();
    print_time();
    return 0;
}
void read_time() {
    printf("Enter time (in second): ");
    scanf("%d",&time);
}
void convert_time() {
    hour += time/3600;
    minute += (time/60)%10;
    second += time%10;
}
void print_time() {
    printf("Hour(s): %d\n",hour);
    printf("Minute(s): %d\n",minute);
    printf("Second(s): %d\n",second);
}