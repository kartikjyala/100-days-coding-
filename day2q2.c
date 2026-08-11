//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int main(){
    int r;
float  area ,circumference;
scanf("%d" ,&r);
printf("area of a circle= %.2f\n", r*r*3.14);
printf("circumference of a circle= %.2f\n ", 2*r*3.14);

    return 0;
}
/*PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc day2q2.c 
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe     
7
area of a circle= 153.86
circumference of a circle= 43.96
 
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc day2q2.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe     
3
area of a circle= 28.26
circumference of a circle= 18.84*/