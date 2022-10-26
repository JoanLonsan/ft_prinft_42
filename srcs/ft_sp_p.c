static int ft_write_pointer(unsigned long long pointer)
{
    int i;

    i = 0;
    if (pointer >= 16)
    {
    
        ft_write_pointer(pointer / 16);
        ft_write_pointer(pointer % 16);
    }
    else
    {
        if (pointer <= 9)
            i += ft_putchar_fd((pointer + '0'), 1);
        else
            i += ft_putchar_fd((pointer - 10 + 'a'), 1);
    }
	return (i);
}

int ft_sp_p(unsigned long long pointer)
{
    int i;

    i = 0;
    i += write(1, "0x", 2);
    if (pointer == 0)
        i += write(1, "0", 1);
    else
    {
        i += ft_write_pointer(pointer);
    }
    return (i);
}