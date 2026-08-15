//Q-Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main(){
int n;
scanf ("%d",&n);
if (n >=0 )
{if (n==0)
printf("zero");
else 
printf ("positive");}
else 
{printf("negative");}
    return 0;
}
/*PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc Q12.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe  
-5
negative
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc Q12.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe  
0
zero
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc Q12.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe  
10
positive*/