#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);

    if(ch>='A' && ch<='a' && ch>='E' && ch<='e' && ch>='I' && ch<='i' && ch>='O' && ch<='o' && ch>='U' && ch<='u')
    {
        printf("%c is a vowel",ch);
    }
    else if(ch>='B' && ch<='b' && ch>='C' && ch<='c' && ch>='D' && ch<='d' && ch>='F' && ch<='f' 
        && ch>='G' && ch<='g' && ch>='H' && ch<='h' && ch>='J' && ch<='j' && ch>='K' && ch<='k' && ch>='L'
         && ch<='l' && ch>='M' && ch<='m' && ch>='N' && ch<='n' && ch>='P' && ch<='p' && ch>='Q' && ch<='q' 
         && ch>='R' && ch<='r' && ch>='S' && ch<='s' && ch>='T' && ch<='t' && ch>='V' && ch<='v' && ch>='W'
          && ch<='w' && ch>='X' && ch<='x' &&ch>='Y'&&ch<='y' && ch>='Z' && ch<='z')
    {
        printf("%c is a consonant",ch);
    }   

    return 0;
}