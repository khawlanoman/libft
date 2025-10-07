#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*ptr;
	size_t	count;

	i = 0;
	count = ft_strlen(s1);
	ptr = malloc((count + 1) * sizeof(char));
	if (!ptr)
	{
		return (NULL);
	}
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
