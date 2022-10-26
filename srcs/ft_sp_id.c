int	ft_sp_id(int id)
{
	int		i;
	char	*number;

	i = 0;
	number = ft_itoa(id);
	i += ft_sp_s(number);
	free(number);
	return (i);
}