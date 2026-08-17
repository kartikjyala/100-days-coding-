//Q-Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>
int main(){
int year ;
scanf ("%d",&year);
if (year%400==0)
{printf ("leap year");}
else if (year % 100==0)
{printf ("not a leap year");}
else if (year % 4 ==0)
{printf ("leap year");}
else 
{printf ("not a leap year");}
    return 0;
}
/*PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc Q13.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe
2020
leap year
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc Q13.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe
1900
not a leap year
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc Q13.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe  
2000
leap year*/
