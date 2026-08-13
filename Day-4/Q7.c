//Write a program to swap two numbers without using a third variable.
#include <stdio.h>

int main(){
int a,b ;
scanf ("%d %d",&a ,&b);
a = a+b;
b = a-b;
a = a-b;
printf ("after swap :%d %d",a ,b);
    return 0;
}
/*PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc Q7.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe 
10
20
after swap :20 10
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc Q7.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe 
7
14
after swap :14 7*/
