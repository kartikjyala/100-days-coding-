//Q-Write a program to input three numbers and find the largest among them using if–else.
 #include <stdio.h>
 
 int main(){

 int a ,b ,c;
 scanf ("%d %d %d",&a ,&b ,&c);
if(a>b && a>c)
{printf("largest is %d",a);}
else if (b>a && b>c)
{printf("largest is %d",b);}
else 
{printf("largest is %d",c);}
    return 0;
 }
 /*PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc Q16.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe  

3                   
7
5
largest is 7
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc Q16.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe  
-1
-5
0
largest is 0*/