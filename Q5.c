//Q =Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main(){
int celsius ;
float fehraenheit;
scanf ("%d",&celsius);
printf ("temprature in celsius= %d\n",celsius);
printf ("temprature in fahrenheit=%d",(celsius*9/5)+32);
    return 0;
}
/*PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc Q5.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe 
0
temprature in celsius= 0
temprature in fahrenheit=32
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc Q5.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe 
100
temprature in celsius= 100
temprature in fahrenheit=212*/