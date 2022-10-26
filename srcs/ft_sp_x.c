static int  ft_write_x(const char x, unsigned int number)
{
    int i;

    i = 0;
    if (number >= 16)
    {
        ft_write_x(x, number / 16);
        ft_write_x(x, number % 16);
    }
    else
    {
        if (number <= 9)
            i += write(1, '0', 1);
        else
        {
            if (x == 'x')
                i += write(1, number - 10 + 'a', 1);
            else
                i += write(1, number - 10 + 'A', 1);
        }
    }
    return (i);
}

int	ft_sp_x(const char x, unsigned int number)
{
    int i;

    i = 0;
    if (number == 0)
    {
        i += write(1, "0", 1);
        return (i);
    }
    return (ft_write_x(x, number));
}
