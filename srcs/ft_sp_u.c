int	ft_printnbr(int u)
{
	int		len;
	char	*number;

	len = 0;
	number = ft_itoa(u);
	len = ft_sp_s(number);
	free(number);
	return (len);
}
