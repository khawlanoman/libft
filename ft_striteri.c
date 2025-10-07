#include "libft.h"

/*void	f(unsigned int c, char *k)
{
	*k = *k + c;
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
int main()
{
	char s[]="noman";
	ft_striteri(s,f);
	printf("%s",s);

}*/
