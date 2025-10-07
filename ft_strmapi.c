#include "libft.h"
/*`char	f(unsigned int c, char k)
{
	k = k + c;
	return (k);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		k;
	size_t	count;
	char	*str;

	i = 0;
	k = 0;
	count = ft_strlen(s);
	str = (char *)malloc((count + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[k] = (*f)((unsigned int)i, s[i]);
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}
/*#include <stdio.h>
int main()
{
	char s[] = "noman";
	printf("%s",ft_strmapi(s,f));

}*/
