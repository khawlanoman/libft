#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (char)c)
		{
			break ;
		}
		i++;
	}
	if (i == n)
	{
		return (NULL);
	}
	return ((unsigned char *)s + i);
}
