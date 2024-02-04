#include "ft_printf.h"

int ft_printptr(void *ptr)
{
    unsigned long address;
    
    address = (unsigned long) ptr;
    ft_putstr_fd("0x", 1);
    ft_printhex('x', address);
}