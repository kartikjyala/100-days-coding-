//Q-Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
int main(){
char ch;
scanf ("%c",&ch);
if (ch == 'a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{printf ("vowel");}
else 
{printf ("consonant");}
    return 0;
}
/*PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc Q14.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe  
a
vowel
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc Q14.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe  
b
consonant*/