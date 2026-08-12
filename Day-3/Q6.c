// Q-Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main(){
int a ,b ,c ;
scanf ("%d %d",&a, &b );
c = a;
a = b;
b = c;
printf ("after swap :%d %d\t",a, b);
    return 0;
}
/*PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc Q6.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe 
3
5
after swap :5 3
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc Q6.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe 
-1
1
after swap :1 -1*/