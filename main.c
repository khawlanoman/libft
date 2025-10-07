#include "libft.h"

#include <stdio.h>

int main()
{
		///ft_isalpha
	//printf("%d",ft_isalpha('a'));
	//printf("\n%d",ft_isalpha(45));

		///ft_isdigit
	//printf("%d",ft_isdigit('a'));
        //printf("\n%d",ft_isdigit('4'));

		 ///ft_isalnum
        //printf("%d",ft_isalnum('a'));
        //printf("\n%d",ft_isalnum('7'));
	
		 ///ft_isascii
        //printf("%d",ft_isascii('a'));
        //printf("\n%d",ft_isascii(45));

	 	///ft_isprint
        //printf("%d",ft_isprint('a'));
        //printf("\n%d",ft_isprint(45));

		//ft_strlen
	//char str[] = "hello noman";
	//printf("%zu",ft_strlen(str));
	
		//ft_memset
	//char b[4];
	//printf("%s",b);
	//ft_memset(b,'t',3);
	//printf("\n%s",b);
	//ft_memset(&b[0],'1',1);
	//ft_memset(&b[1],'3',2);
	//ft_memset(&b[3],'7',1);
	//printf("\n%s",b);

		//ft_bzero
	//char b[4];
        //printf("%s",b);
        //ft_bzero(b,3);
        //printf("\n%s",b);

		//ft_memcpy
	//char dst[7];
	//char src[] = "hi khawla";
	//ft_memcpy(dst,src,7);
	//printf("%s",dst);
	
		//ft_strlcpy
        //char dst[7];
        //char src[] = "hi khawla";
        //ft_strlcpy(dst,src,7);
        //printf("%s",dst);
	
		//ft_strlcat
	//char dst[10] = "Hi";
	//char *src = "Hello";
	//size_t ret = ft_strlcat(dst, src, 7);
	//printf("dst = %s, ret = %zu\n", dst, ret);
	
		//ft_toupper
	//printf("%d",ft_toupper('a'));
	//printf("\n%d",ft_toupper(4));	

	 	//ft_tolower
        //printf("%d",ft_tolower('a'));
        //printf("\n%d",ft_tolower(4));

		//ft_strchr.c
	//printf("%s",ft_strchr("khawla",'a'));
	//printf("\n%s",ft_strchr("khawla",2));
	//printf("\n%s",ft_strchr("khawla",'y'));


		//ft_strncmp
	char dst[10] = "Hi";
        char *src = "Hello";
        int i = ft_strncmp(dst, src, 7);
        printf("%d" ,i);





	return (0);
}
