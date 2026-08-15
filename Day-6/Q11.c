//Q-Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main(){
int n;
scanf ("%d",&n);
if(n%2==0)
{printf("%d is even",n);}
else
{printf("%d is odd",n);}
    return 0;
}
/*PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc Q11.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe  
7
7 is odd
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc Q11.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe  
12
12 is even*/
