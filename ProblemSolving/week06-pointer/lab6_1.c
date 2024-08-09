#include <stdio.h>

// void summation(int *, int, int); // parameter list
// int c = 5;// gloabal variable
int main(void) {
    int x,y;
    printf("x address: %d, y address: %d\n",&x,&y);
    x = 2, y = 10;
    printf("x: %d, y =%d\n",x,y);
    printf("x address1: %d, y address2: %d\n",&x,&y);
    int *xp, *yp;
    printf("xp address: %d, yp address: %d\n",&xp,&yp);
    xp = &x;
    printf("xp: %d, %d\n",*xp,xp);
    yp = &y;
    printf("yp: %d, %d\n",*yp,yp);
    *xp *= (*xp);
    printf("xp: %d, %d\n",*xp,xp);
    *yp = --(*yp);
    printf("yp: %d, %d\n",*yp,yp);
    return (0);
}

// void summation(int *sump, int a, int b) {
//     printf("a in summation: %d\n",&a);
//     printf("c in summation: %d\n",&c);
//     *sump = a +b;

// }