//Q-Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>
int main(){
char ch;
scanf("%c",&ch);
if (ch >= 'A'&& ch <='Z')
{printf ("uppercase alphabet");}
else if (ch >= 'a'&& ch <= 'z')
{printf ("lowercase alphabet");}
else if (ch >= '0'&& ch <= '9')
{printf ("digit");}
else 
{printf ("special character");}
    return 0;
}
/*PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc Q15.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe  
A
uppercase alphabet
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc Q15.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe  
a
lowercase alphabet
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc Q15.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe  
3
digit
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc Q15.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe  
#
special character*/