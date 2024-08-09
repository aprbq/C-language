#include <stdio.h>
void read_time(int *);
void convert_time(int , int *, int *, int *);
void print_time(int, int, int);    
int time,hour = 0,minute = 0,second = 0;
int main(void) {
    read_time(&time);
    convert_time(time,&hour,&minute,&second);
    print_time(hour,minute,second);
    return 0;
}
void read_time(int *timp) {
    printf("Enter time (in second): ");
    scanf("%d", timp);
}
void convert_time(int timep,int *hourp, int *minutep, int *secondp) {
    *hourp += timep/3600;
    *minutep += (timep/60)%10;
    *secondp += timep%10;
}
void print_time(int hour, int minute, int second) {
    printf("Hour(s): %d\n",hour);
    printf("Minute(s): %d\n",minute);
    printf("Second(s): %d\n",second);
}