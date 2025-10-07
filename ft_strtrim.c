#include "libft.h"
static int is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if(set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	count;
	char	*str;

	start = 0;
	end = ft_strlen(s1);
	while ((is_in_set(s1[start], set) == 1) && s1[start])
		start++;
	end--;
	while ((is_in_set(s1[end], set) == 1) && end > start)
		end--;
	count =  end - start + 1;
	str = ft_substr(s1, start,count);
	return (str);
}
#include <stdio.h>
int	main(){
	char const s1[]="----hi noman----khawla----";
	char const set[]="---";
	printf("%s",ft_strtrim(s1,set));
	return (0);
}
