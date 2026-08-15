//Q-Write a program to calculate simple and compound interest for given principal, rate, and time
#include <stdio.h>
#include <math.h>
int main(){
float p ,r ,t ;
//pricipal = p;
//rate =r;
//time =t;
scanf ("%f %f %f", &p,&r ,&t );
printf ("simple interest = %.0f\n",(p*r*t )/100);
printf ("compund interest = %.2f\n",p*pow(1+(r/100),t)-p);
    return 0;
}
/*PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc Q9.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe 
1000
5
2
simple interest = 100
compund interest = 102.50
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc Q9.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe 
5000
7
3
simple interest = 1050
compund interest = 1125.22*/