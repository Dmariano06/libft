#include <stdlib.h>
#include <stdio.h>
int len(long long nb)
{
    int len =  0;
    if(nb < 0)
    {
        nb *= -1;
        len++;
    }
    while(nb > 0)
    {
        nb/=10;
        len++;
    }
    return len;
 
}

char *ft_itoa(int nb)
{
    long long n = nb;
    char *res;
    int sz = len(n);
    res = malloc((sz + 1) * (sizeof(char)));
    if(!res)
        return NULL;
    res[sz] = '\0';
    sz--;
    if(n < 0)
    {
        n *= -1;
        res[0] = '-';
    }
    while(n > 0)
    {
        res[sz] = '0' + (n % 10);
        n /= 10;
        sz--;
    }
    return res;

}