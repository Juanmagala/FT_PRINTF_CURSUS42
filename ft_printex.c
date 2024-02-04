#include "ft_printf.h"

int ft_printex(char *s, int num)
{
    char	*str;
    int count;

    count = 0;
    if(*s == 'x')
        str = "0123456789abcdef";
    else
        str = "0123456789ABCDEF";
    if (num < 0)
        num = num * (-1);
    if(num >= 0 && num <= 15)
    {
        ft_putcharfd(str[num], 1);
        count++;
    }
    else
    {
        count += ft_printex(s, num / 16);
        ft_putcharfd(str[num%16], 1);
        count++;
    }
    return (count);
}