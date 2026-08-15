//Q-Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main(){
int s,m ,h , totalsecond;
scanf ("%d",&totalsecond);
h =totalsecond/3600;
m= (totalsecond%3600)/60;
s = totalsecond%60;
printf("%d",h);
printf(" : %d",m);
printf(" : %d",s);
 return 0;
}
/*PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc Q10.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe  
3661
1 : 1 : 1
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> gcc Q10.c
PS C:\Users\lenovo\OneDrive\Desktop\100 days codding> .\a.exe  
7322
2 : 2 : 2*/