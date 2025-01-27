#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int check_signe(char *s)
{
    int i = 0;
    while(s[i])
    {
        if ((s[i] < '0' || s[i] > '9') && (s[i] != '-') && (s[i] != '+'))
            return (1);
            i++;
    }
    i = 0;
    while (s[i] == 32)
        i++;
    if ((s[i] == '+' || s[i] == '-') && (s[i + 1] < '0' || s[i + 1] > '9'))
        return 1;
    while (s[i] >= '0' && s[i] <= '9')
        i++;
    while (s[i])
    {
        if ((s[i] == '+' || s[i] == '-') && i != 0)
        {
            if (s[i - 1] != 32)
                return (1);
            i++;
            if (s[i] < '0' || s[i] > '9')
                return (1);
        }
        i++;
    }
     return (0);
}
int check_error(char *arv)
{
    int i;
    i = 0;
   while(arv[i])
    {
        if (arv[i] == '-' || arv[i] == '+')
        {
            if(check_signe(arv) == 1)
                return (1);
        } 
            i++;
    }
    i = 0;
    while(arv[i])
    {
        while (arv[i] == 32)
            i++;
        if ((arv[i] < '0' || arv[i] > '9') && (arv[i] != '-') && (arv[i] != '+'))
            return (1);
            i++;  
        while (arv[i] == 32)
            i++;
    }
    return (0);
}
int main()
{
    char *s[] = {"sh","-   ","36","+37"};
    int i = 1;
    while (i < 4)
    {
       int n = check_error(s[i]);
       printf("%d\n",n);
        i++;
    }
    
}