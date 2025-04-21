#include "libft.h"
#include <bsd/string.h>

char jorgetolower(unsigned int i, char c)
{
	(void) i;
	return (ft_tolower(c));
}
void vjorgetolower(unsigned int i, char *c)
{
	(void) i;
	c[0] = ft_tolower(c[0]);
}
int	main()
{
	char str[] = "Hello, Jorginho!";
	char letter_a = 'a';
	char letter_b = 'B';
	char plus_char = '+';
	char nonprint = '\n';

	printf("=== isalpha tests ===\n\n");
	printf("Input: %c\n", plus_char);
	printf("Original function: %d\n", isalpha(plus_char));
	printf("My function: %d\n\n", ft_isalpha(plus_char));
	
	printf("=== isdigit tests ===\n\n");
	printf("Input: %c\n", letter_a);
	printf("Original function: %d\n", isdigit(letter_a));
	printf("My function: %d\n\n", ft_isdigit(letter_a));

	printf("=== isalnum tests ===\n\n");
	printf("Input: %c\n", plus_char);
	printf("Original function: %d\n", isalnum(plus_char));
	printf("My function: %d\n\n", ft_isalnum(plus_char));

	printf("=== isascii tests ===\n\n");
	printf("Input: %c\n", plus_char);
	printf("Original function: %d\n", isascii(plus_char));
	printf("My function: %d\n\n", ft_isascii(plus_char));

	printf("=== isprint tests ===\n\n");
	printf("Input: %c\n", nonprint);
	printf("Original function: %d\n", isprint(nonprint));
	printf("My function: %d\n\n", ft_isprint(nonprint));

	printf("=== strlen tests ===\n\n");
	printf("Input: %s\n", str);
	printf("Original function: %zu\n", strlen(str));
	printf("My function: %zu\n\n", ft_strlen(str));

	printf("=== memset tests ===\n\n");
	printf("Input: %s\n", str);
	printf("Original function: %s\n", (char *)memset(str, 'J', 5));
	printf("My function: %s\n\n", (char *)ft_memset(str, 'J', 5));

	printf("=== bzero tests ===\n\n");
	printf("Input: %s\n", str);
	bzero(str, 5);
	printf("Original function: %s\n", str);
	ft_memset(str, 'J', 5);
	ft_bzero(str, 5);
	printf("My function: %s\n\n", str);

	printf("=== memcpy tests ===\n\n");
	char sttr1[] = "Jorginho is good";
	char sttr2[] = " Amazing";
	printf("Input1: %s\n", sttr1);
	printf("Input2: %s\n", sttr2);
	memcpy(sttr1 + 8, sttr2, 8);
	printf("Original function: %s\n", sttr1);
	char sttr3[] = "Jorginho is good";
	char sttr4[] = " Amazing";
	ft_memcpy(sttr3 + 8, sttr4, 8);
	printf("My function: %s\n\n", sttr3);

	printf("=== memmove tests ===\n\n");
	char sttr5[] = "TheCar";
	char sttr6[] = "TheCat";
	printf("Input1: %s\n", sttr5);
	printf("Input2: %s\n", sttr6);
	memmove(sttr5, sttr6, 6);
	printf("Original function: %s\n", sttr5);
	char sttr7[] = "TheCar";
	char sttr8[] = "TheCat";
	ft_memmove(sttr7, sttr8, 6);
	printf("My function: %s\n\n", sttr7);

	printf("=== strlcpy tests ===\n\n");
	char word1[] = "";
	char word2[] = "Jorginho";
	printf("Input dest: %s\n", word2);
	strlcpy(word1, word2, 3);
	printf("Original function: %s\n", word1);
	char word3[] = "";
	char word4[] = "Jorginho";
	printf("Input dest: %s\n", word4);
	ft_strlcpy(word3, word4, 3);
	printf("My function: %s\n\n", word3);

	printf("=== strlcat tests ===\n\n");
	char strtocat1[] = "Jorginho is";
	char strtocat2[] = " Amazing";
	size_t	nnstrtocat1 = strlcat(strtocat1, strtocat2, 20);
	printf("Input of dest: %s\nInput of src: %s\n", strtocat1, strtocat2);
	strlcat(strtocat1, strtocat2, 20);
	printf("Original function: %s\n", strtocat1);
	printf("Size of str after cat: %zu\n", nnstrtocat1);
	char strtocat3[] = "Jorginho is";
	char strtocat4[] = " Amazing";
	size_t	nnstrtocat2 = ft_strlcat(strtocat3, strtocat4, 20);
	ft_strlcat(strtocat3, strtocat4, 20);
	printf("My function: %s\n", strtocat3);
	printf("Size of str after cat: %zu\n\n", nnstrtocat2);

	printf("=== toupper tests ===\n\n");
	printf("Input: %c\n", letter_a);
	printf("Original function: %c\n", toupper(letter_a));
	printf("My function: %c\n\n", ft_toupper(letter_a));

	printf("=== tolower tests ===\n\n");
	printf("Input: %c\n", letter_b);
	printf("Original function: %c\n", tolower(letter_b));
	printf("My function: %c\n\n", ft_tolower(letter_b));

	printf("=== strchr tests ===\n\n");
	char ltchar[] = "Hello, Jorginho !!";
	printf("Input: %s\n", ltchar);
	char *found = strchr(ltchar, 'J');
	printf("Original function: %s\n", found);
	char *found2 = ft_strchr(ltchar, 'J');
	printf("My function: %s\n\n", found2);

	printf("=== strchr tests ===\n\n");
	printf("Input: %s\n", ltchar);
	char *found3 = strrchr(ltchar, 'o');
	printf("Original function: %s\n", found3);
	char *found4 = ft_strrchr(ltchar, 'o');
	printf("My function: %s\n\n", found4);

	printf("=== strncmp tests ===\n\n");
	char strtocmp1[] = "Hello";
	char strtocmp2[] = "hello";
	char strtocmp3[] = "Hello";
	char strtocmp4[] = "hello";
	printf("Input 1: %s\n", strtocmp1);
	printf("Input 2: %s\n", strtocmp2);
	printf("Original function: %d\n", strncmp(strtocmp1, strtocmp2, 6));
	printf("My function: %d\n\n", ft_strncmp(strtocmp3, strtocmp4, 6));

	printf("=== memchr tests ===\n\n");
	char strtfchar1[] = "Hi, jorginho !";
	char founded1 = 'j';
	char strtfchar2[] = "Hi, jorginho !";
	char founded2 = 'j';
	printf("Input: %s\n", strtfchar1);
	char *ptrtof = memchr(strtfchar1, founded1, 9);
	char *ptrtof2 = ft_memchr(strtfchar2, founded2, 9);
	printf("Original function: %s\n", ptrtof);
	printf("My function: %s\n\n", ptrtof2);

	printf("=== memcmp tests ===\n\n");
	char memcmpchar1[] = "I Love dotinha";
	char memcmpchar2[] = "I love dotinha";
	printf("Input 1: %s\n", memcmpchar1);
	printf("Input 2: %s\n", memcmpchar2);
	printf("Original function: %d\n", memcmp(memcmpchar1, memcmpchar2, 5));
	printf("Original function: %d\n\n", ft_memcmp(memcmpchar1, memcmpchar2, 5));

	printf("=== strnstr tests ===\n\n");
	char bigstr[] = "I Love dotinha";
	char littlestr[] = "dotinha";
	printf("Input1: %s\n", bigstr);
	printf("Input2: %s\n", littlestr);
	char *linbig = strnstr(bigstr, littlestr, strlen(bigstr));
	printf("Original function: %s\n", linbig);
	char *linbig2 = ft_strnstr(bigstr, littlestr, strlen(bigstr));
	printf("My function: %s\n\n", linbig2);

	printf("=== atoi tests ===\n\n");
	char stoi[] = "123456";
	char nstoi[] = "-123456";
	printf("Input 1 : %s\n", stoi);
	printf("Input 2 : %s\n", nstoi);
	printf("Original function: %d\n", atoi(stoi));
	printf("Original function: %d\n", atoi(nstoi));
	printf("My function: %d\n", ft_atoi(stoi));
	printf("My function: %d\n\n", ft_atoi(nstoi));

	printf("=== calloc tests ===\n\n");
	char mem1[7] = "Hello!";
	char *mem2;
	mem2 = NULL;
	mem2 = calloc(ft_strlen(mem1) , sizeof(char *));
	if(!mem2)
	{
		printf("Alocation Failed !");
		return (1);		
	}
	size_t i = 0;
	printf("Original function:");
	while(i < ft_strlen(mem1))
	{
		printf("%s", mem2[i] == 0 ? " O," : "X,");
		i++;
	}
	printf("\n");
	char mem3[7] = "Hello!";
	char *mem4;
	mem4 = NULL;
	mem4 = ft_calloc(ft_strlen(mem3) , sizeof(char *));
	if(!mem4)
	{
		printf("Alocation Failed !");
		return (1);		
	}
	size_t j = 0;
	printf("My function:");
	while(j < ft_strlen(mem3))
	{
		printf("%s", mem4[j] == 0 ? " O," : "X,");
		j++;
	}
	printf("\n\n");

	printf("=== strdup tests ===\n\n");
	char stringdp[] = "Hello";
	char *stringdp2 = strdup(stringdp);
	printf("Input: %s\n", stringdp);
	printf("Original function: %s\n", stringdp2);
	char stringdpmy[] = "Hello";
	char *stringdmy2 = ft_strdup(stringdpmy);
	printf("My function: %s\n\n", stringdmy2);
	
	printf("=== substr tests ===\n\n");
	char subword1[] = "Dota is better than lol";
	char *subword2 = ft_substr(subword1, 19, 4);
	printf("Input: %s\n", subword2);
	printf("Function: %s\n\n", subword2);

	printf("=== strjoin tests ===\n\n");
	char join1[] = "Hello";
	char join2[] = " Jorginho ";
	char *join3 = ft_strjoin(join1, join2);
	printf("Inputs: %s ,%s\n", join1, join2);
	printf("My function: %s\n\n", join3);

	printf("=== strtrim tests ===\n\n");
	char totrim[] = "*****Jorginho*****";
	char toset[] = "*";
	printf("Inputs: %s ,%s\n", totrim, toset);
	char *settrimmed = 	ft_strtrim(totrim, toset);
	printf("My function: %s\n\n", settrimmed);

	printf("=== split tests ===\n\n");
	char strtosplit[] = ",Miss,You,Ragnarok,";
	char ctoremove = ',';
	char **allstr = ft_split(strtosplit, ctoremove);
	printf("Inputs: %s ,%c\n", strtosplit, ctoremove);
	size_t aj = 0;
	size_t ai = 0;
	while(allstr[aj] != NULL)
	{
		while (allstr[aj][ai] != '\0')
		{
			printf("%c", allstr[aj][ai]);
			ai++;
		}
		aj++;
		ai = 0;
		printf("\n");
	}
	printf("\n");
	printf("=== itoa tests ===\n\n");
	int	numbertostr = 123456;
	int	nnumbertostr = -123456;
	char *strofitoa = ft_itoa(numbertostr);
	char *strofitoa2 = ft_itoa(nnumbertostr);
	printf("Inputs %d, %d\n", numbertostr, nnumbertostr);
	printf("Positive number to string: %s\n", strofitoa);
	printf("Negative number to string: %s\n\n", strofitoa2);

	printf("=== strmapi tests ===\n\n");
	char nameofjorge[] = "JORGINHO";
	printf("Input: %s\n", nameofjorge);
	char *snameofjorge = ft_strmapi(nameofjorge, jorgetolower);
	printf("My function: %s\n\n", snameofjorge);

	printf("=== striteri tests ===\n\n");
	char teristr[] = "JORGINHO";
	printf("Input: %s\n", teristr);
	ft_striteri(teristr, vjorgetolower);
	printf("My function: %s\n\n", teristr);

	printf("=== putchar tests ===\n\n");
	write(1, "Input: ", 8);
	ft_putchar_fd('J', 1);
	printf("\n\n");

	printf("=== putstr tests ===\n\n");
	char strput[] = "Jorginho";
	write(1, "Input: ", 8);
	ft_putstr_fd(strput, 1);
	printf("\n\n");

	printf("=== putendl tests ===\n\n");
	char strput1[] = "Project Zomboid";
	write(1, "Input: ", 8);
	ft_putendl_fd(strput1, 1);
	printf("\n");

	printf("=== putendl tests ===\n\n");
	int nmbr = 2147483647;
	int nnmbr = -2147483648;
	ft_putnbr_fd(nmbr, 1);
	printf("\n");
	ft_putnbr_fd(nnmbr, 1);
}