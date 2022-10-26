int	ft_sp_s(char *str)
{
	int	i;

	i = 0;
	if (str == '\0')
		write(1, "NULL", 4);
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}