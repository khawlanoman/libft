#include "libft.h"

static int	count_num(int n)
{
	int		i;
	long	nb;

	i = 0;
	nb = n;
	if (nb < 0)
	{
		i++;
		nb *= -1;
	}
	if (nb == 0)
		i++;
	while (nb > 0)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}

static void	zero_negative(char **str, long *nb, int n)
{
	int	i;
	int	found;

	found = 0;
	i = count_num(n);
	(*str)[i--] = '\0';
	if (*nb == 0)
		(*str)[i] = '0';
	if (*nb < 0)
	{
		found = 1;
		*nb *= -1;
	}
	while (*nb > 0)
	{
		(*str)[i--] = (*nb % 10) + '0';
		*nb = *nb / 10;
	}
	if (found == 1)
		(*str)[i] = '-';
}

char	*ft_itoa(int n)
{
	long	nb;
	int		count;
	int		found;
	char	*str;

	nb = n;
	found = 0;
	count = count_num(n);
	str = (char *)malloc((count + 1) * sizeof(char));
	if (!str)
		return (NULL);
	zero_negative(&str, &nb, n);
	return (str);
}
