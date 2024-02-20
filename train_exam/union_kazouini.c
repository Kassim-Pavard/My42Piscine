int	check_double(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int	i, j;
	char r[455];
	char d[455];

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (check_double(s1, s1[i], i))
		{
			r[j] = s1[i];
			j++;
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (check_double(s2, s2[i], i))
		{
			r[j] = s2[i];
			j++;
		}
		i++;
	}
	i = 0;
	r[j] = '\0';
	j = 0;
	while (r[i])
	{
		if (check_double(r, r[i], i))
		{
			d[j] = r[i];
			j++;
		}
		i++;
	}
	i = 0;
	d[i] = '\0';
	while (d[i])
	{
		write(1, &d[i], 1);
		i++;
	}
}


