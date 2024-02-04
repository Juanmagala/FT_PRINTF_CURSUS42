#include "ft_printf.h"

int ft_printexa(char *s, int num)
{
    char	*str;
    int count;

    count = 0;
    if(s == 'x')
        str = "0123456789abcdef";
    else
        str = "0123456789ABCDEF";
    if (num < 0)
        num = num * (-1);
    if(num >= 0 && num <= 15)
    {
        ft_putcharfd(str[num], 1);
        return (count++);
    }
    else
    {
        count += ft_printexa(s, num / 16);
        count += ft_printexa(s, num % 16);
        return (count);
    }
    return (0);
}