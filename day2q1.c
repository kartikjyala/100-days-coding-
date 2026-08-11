//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main(){
int l,b ;
scanf("%d %d", &l ,&b);
printf ("area= %d\n" ,l*b);
printf ("perimeter= %d\n" ,2*(l+b));
    return 0;
}
/*PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc day2q1.c 
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe     
5
10
area= 50
perimeter= 30
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc day2q1.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe     
3
7
area= 21
perimeter= 20*/