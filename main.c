/* ************************************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvasconc <jvasconc@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 10:07:08 by jvasconc          #+#    #+#             */
/*   Updated: 2025/10/15 11:49:34 by ageoffro         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
/*
void	test_split()
{
	char const	s[] = "SALUT$CAPI$BARA";
	char	**myft;
	char	c;
	size_t	y;

	c = '$';
	y = 0;
	printf("--ft_split--\n\n");
	printf("value of s = %s\n", s);
	printf("value of c = %c\n", c);
	myft = ft_split(s, c);
	printf("Result of myft = \n");
	while (myft[y] != 0)
	{
		printf("%zu --> ", y);
		printf("%s\n", myft[y]);
		y++;
	}
	printf("\n\n");
}*/

void	test_strtrim()
{
	char const	s1[] = "ADACAPIDSAA";
	char const	set[] = "ASD";
	char	*myft;

	printf("--ft_strtrim--\n\n");
	printf("value of s1 = %s\n", s1);
	printf("value of set = %s\n", set);
	myft = ft_strtrim(s1, set);
	printf("Result of myft = %s\n", myft);
	printf("\n\n");
	free(myft);
}
void	test_strjoin()
{
	char const	s1[] = "SALUT";
	char const	s2[] = "FRANCISSSSS";
	char	*myft;

	printf("--ft_strjoin--\n\n");
	printf("value of s1 = %s\n", s1);
 	printf("value of s2 = %s\n", s2);
	myft = ft_strjoin(s1, s2);
	printf("Result of myft = %s\n", myft);
	printf("\n\n");
	free(myft);
}


void	test_substr()
{
	const char	s[] = "CAPIBARA";
	unsigned int	start;
	size_t	len;
	char	*myft;

	start = 3;
	len = 0;
	printf("--ft_substr--\n\n");
	printf("value of s = %s\n\n", s);
	myft = ft_substr(s, start, len);
	printf("value of myft = %s\n", myft);
	free(myft);
	printf("\n\n");
}

void	test_strdup()
{
	const char	s[] = "SALUTCAPIBARACESTTROPOUF";
	char	*ogft;
	char	*myft;

	printf("--ft_strdup--\n\n");
	printf("value of s = %s\n\n", s);
	ogft = strdup(s);
	printf("value of ogft = %s\n", ogft);
	myft = ft_strdup(s);
	printf("value of myft = %s\n", myft);
	free(ogft);
	free(myft);
	printf("\n\n");
}

void	test_calloc()
{
	size_t	nmemb;
	size_t	size;
	char	*ogft;
	char	*myft;
	size_t	i;

	nmemb = 9;
	size = sizeof(char);
	printf("--ft_calloc--\n\n");
	printf("value of nmemb = %zu\n", nmemb);
	printf("value of size = %zu\n\n", size);
	ogft = calloc(nmemb, size);
	i = 0;	
	printf("Result of ogft = ");
	while (i < nmemb)
	{
		printf("%d", ogft[i]);
		i++;
	}

	printf("\n");
	printf("Result of myft = ");
	myft = ft_calloc(nmemb, size);
	i = 0;
	while (i < nmemb)
	{
		printf("%d", myft[i]);
		i++;
	}
	printf("\n\n");
	free(ogft);
	free(myft);
}

void	test_atoi()
{
	const char	nptr[] = "  s  -123 456789ab-let";
	int	ogft;
	int	myft;
	printf("--ft_atoi--\n\n");
	printf("value of nptr = %s\n", nptr);
	ogft = atoi(nptr);
	printf("Result of ogft = %d\n", ogft);
	myft = ft_atoi(nptr);
	printf("Result of myft = %d\n", myft);
	printf("\n\n");
}

void	test_strnstr()
{
	const char	little[] = "BARA";
	const char	big[] = "";
	size_t	len;
	char	*ogft;
	char	*myft;

	len = 4;
	printf("--ft_strnstr--\n\n");
	printf("value of little = %s\n", little);
	printf("value of big = %s\n", big);
	printf("value of len = %zu\n", len);
	ogft = strnstr(big, little, len);
	printf("Result of ogft = %s\n", ogft);
	myft = ft_strnstr(big, little, len);
	printf("Result of myft = %s\n", myft);
	printf("\n\n");
}


void	test_memcmp()
{
	const char	s1[] = "CAPIC";
	const char	s2[] = "CAPIBARA";
	size_t	n;
	int	ogft;
	int	myft;

	n = 0;
	printf("--ft_memchr--\n\n");
	printf("value of s1 = %s\n", s1);
	printf("value of s2 = %s\n", s2);
	printf("value of size = %zu\n", n);
	ogft = memcmp(s1, s2, n);
	printf("Result of ogft = %d\n", ogft);
	myft = ft_memcmp(s1, s2, n);
	printf("Result of myft = %d\n", myft);
	printf("\n\n");
}

void	test_memchr()
{
	const char	s[] = "CAPI";
	int	c;
	size_t	n;
	const char	*ogft;
	const char	*myft;

	c = 'I';
	n = 0;
	printf("--ft_memchr--\n\n");
	ogft = memchr(s, c, n);
	printf("Result of ogft = %s\n", ogft);
	myft = ft_memchr(s, c, n);
	printf("Result of myft = %s\n", myft);
	printf("\n\n");
}

void	test_strncmp()
{
	const char	s1[] = "CAPIBARA";
	const char	s2[] = "CAPIBARB";
	size_t	n;
	int	ogft;
	int	myft;

	n = 8;
	printf("--ft_strncmp--\n\n");
	printf("value of s1 = %s\n", s1);
	printf("value of s2 = %s\n", s2);
	printf("value of size = %zu\n", n);
	ogft = strncmp(s1, s2, n);
	printf("Result of ogft = %d\n", ogft);
	myft = ft_strncmp(s1, s2, n);
	printf("Result of myft = %d\n", myft);
	printf("\n\n");
}

void	test_strrchr()
{
	const char	s[] = "CAPIBARA";
	int	c;
	char	*ogft;
	char	*myft;

	c = 'R';
	printf("--ft_strrchr--\n\n");
	printf("value of s = %s\n", s);
	ogft = strrchr(s, c);
	printf("Result of ogft = %s\n", ogft);
	myft = ft_strrchr(s, c);
	printf("Result of myft = %s\n", myft);
	printf("\n\n");
}

void	test_strchr()
{
	const char	s[] = "CAPIBARA";
	int	c;
	char	*ogft;
	char	*myft;

	c = 'O';
	printf("--ft_strchr--\n\n");
	printf("value of s = %s\n", s);
	ogft = strchr(s, c);
	printf("Result of ogft = %s\n", ogft);
	myft = ft_strchr(s, c);
	printf("Result of myft = %s\n", myft);
	printf("\n\n");
}

void	test_strlcat()
{
	const char	src[] = "BARA";
	char	dst1[8] = "CAPI";
	char	dst2[8] = "CAPI";
	size_t	size;
	size_t	res1;
	size_t	res2;

	size = 8;
	printf("--ft_strlcat--\n\n");
	printf("value of src1 = %s\n", src);
	printf("value of size1 = %zu\n", size);
	printf("value of dst1 = %s\n", dst1);
	printf("value of dst2 = %s\n\n", dst2);
	res1 = strlcat(dst1, src, size);
	printf("result string of ogft = %s\n", dst1);
	printf("result size of ogft = %zu\n", res1);
	res2 = ft_strlcat(dst2, src, size);
	printf("result string of myft = %s\n", dst2);
	printf("result size of myft = %zu\n", res2);
	printf("\n\n");
}
void	test_strlcpy()
{
	const char	src[] = "CAPIS";
	char	dst1[0];
	char	dst2[0];
	size_t	size;
	size_t	res1;
	size_t	res2;

	size = 0;
	printf("--ft_strlcpy--\n\n");
	printf("value of src = %s\n", src);
	printf("value of size = %zu\n", size);
	printf("value of dst1 = %s\n", dst1);
	printf("value of dst2 = %s\n\n", dst2);
	res1 = strlcpy(dst1, src, size);
	printf("result string of ogft = %s\n", dst1);
	printf("result size of ogft = %zu\n", res1);
	res2 = ft_strlcpy(dst2, src, size);
	printf("result string of myft = %s\n", dst2);
	printf("result size of myft = %zu\n", res2);
	printf("\n\n");
}
void	test_memmove()
{
	char	src[] = "ab";
	char	dest1[] = "cdefgh";
	char	dest2[] = "cdefgh";
	//char	*myft;
	//char	*ogft;
	size_t	n;

	n = 2;
	printf("--ft_memmove--\n\n");
	printf("value of src = %s\n", src);
	printf("value of dest1 = %s\n", dest1);
	printf("value of dest2 = %s\n", dest2);
	memcpy(dest1, src, n);
	printf("result with ogft = %s\n", dest1);
	ft_memcpy(dest2, src, n);
	printf("result with myft = %s\n", dest2);
	printf("\n\n");		
}

	

void	test_memcpy()
{
	//int	src[] = { 561 , '1' , '2' , '3' };
	//int	dest[5];
	char	src[] = "CAPI";
	char	dest[5];
	char	*myft;
	char	*ogft;
	size_t	i;
	size_t	j;
	size_t	n;

	j = 4;
	n = 1;
	printf("--ft_memcpy--\n\n");
	printf("value of src = ");
	i = 0;
	while (i < j)
	{
		printf("%c,", src[i]);
		i++;
	}	
	printf("\n");
	printf("value of dest = ");
	i = 0;
	while (i < j)
	{
		printf("%c,", dest[i]);
		i++;
	}
	printf("\n");
	ogft = memcpy(dest, src, n);
	printf("result of test 1 with ogft = ");
	i = 0;
	while (i < j)
	{
		printf("%c,", ogft[i]);
		i++;
	}
	printf("\n");
	myft = ft_memcpy(dest, src, n);
	printf("result of test 1 with myft = ");
	i = 0;
	while (i < j)
	{
		printf("%c,", myft[i]);
		i++;
	}
	printf("\n\n");	
}

void	test_bzero()	
{
	//int	tabin[] = { 561 , '1' , '2' , '3' };
	char	tabin[] = "CAPI";
	//int	ogtabout[] = { 561 , '1' , '2' , '3' };
	//int	mytabout[] = { 561 , '1' , '2' , '3' };
	char	ogtabout[] = "CAPI";
	char	mytabout[] = "CAPI";
	size_t	n;
	size_t	i;
	size_t	j;

	n = 2;
	j = 4;
	printf("--ft_bzero--\n\n");

	printf("value of test 1 = ");
	i = 0;
	while (i < j)
	{
		printf("%c,", tabin[i]);
		i++;
	}
	printf("\n");
	bzero(ogtabout, n);
	printf("result of test 1 with ogft = ");
	i = 0;
	while (i < j)
	{
		printf("%c,", ogtabout[i]);
		i++;
	}
	printf("\n");
	printf("result of test 1 with myft = ");
	ft_bzero(mytabout, n);
	i = 0;
	while (i < j)
	{
		printf("%c,", mytabout[i]);
		i++;
	}
	printf("\n\n");	
	printf("NOTICE:\ntrue values are integers from 65 to 90.\n\n");	
}

void	test_memset()
{
	int	tab1[] = { 561 , '1' , '2' , '3' };
	int	*myft;
	int	*ogft;
	int	c;
	size_t	n;
	size_t	i;
	size_t	j;

	c = 48;
	n = 6;
	j = 4;
	printf("--ft_memset--\n\n");
	printf("value of test 1 = ");
	i = 0;
	while (i < j)
	{
		printf("%d,", tab1[i]);
		i++;
	}
	printf("\n");
	ogft = memset(tab1, c, n);
	printf("result of test 1 with ogft = ");
	i = 0;
	while (i < j)
	{
		printf("%d,", ogft[i]);
		i++;
	}
	printf("\n");
	myft = ft_memset(tab1, c, n);
	printf("result of test 1 with myft = ");
	i = 0;
	while (i < j)
	{
		printf("%d,", myft[i]);
		i++;
	}
	printf("\n\n");	
	printf("NOTICE:\ntrue values are integers from 65 to 90.\n\n");

	
}

void	test_tolower()
{
	int	tab[] = { 0 , -42 , 64 , 65 , 90, 91 };//	<----	here to change the values
	int	n;
	int	i;
	int	myft;
	int	ogft;

	n = 6;//	<------------------------------------	here to change nb of tested values
	i = 0;
	printf("--ft_tolower--\n\n");
	while (i < n)
	{
		printf("value of test%d = %d\n", i, tab[i]);
		ogft = tolower(tab[i]);
		printf("result of test%d with ogft = %d\n", i, ogft);
		myft = ft_tolower(tab[i]);
		printf("result of test%d with myft = %d\n\n", i, myft);
		i++;
	}
	printf("NOTICE:\ntrue values are integers from 65 to 90.\n\n\n");
}


void	test_toupper()
{
	int	tab[] = { 0 , -42 , 96 , 97 , 122 , 123 };//	<----	here to change the values
	int	n;
	int	i;
	int	myft;
	int	ogft;

	n = 6;//	<------------------------------------	here to change nb of tested values
	i = 0;
	printf("--ft_toupper--\n\n");
	while (i < n)
	{
		printf("value of test%d = %d\n", i, tab[i]);
		ogft = toupper(tab[i]);
		printf("result of test%d with ogft = %d\n", i, ogft);
		myft = ft_toupper(tab[i]);
		printf("result of test%d with myft = %d\n\n", i, myft);
		i++;
	}
	printf("NOTICE:\ntrue values are integers from 97 to 122.\n\n\n");
}

void	test_isprint()
{
	int	tab[] = { 0 , -42 , 31 , 32 , 126, 127 };//	<----	Here to change the values
	int	n;
	int	i;
	int	myft;
	int	ogft;

	n = 6;//	<------------------------------------	Here to change nb of tested values
	i = 0;
	printf("--ft_isprint--\n\n");
	while (i < n)
	{
		printf("Value of test%d = %d\n", i, tab[i]);
		ogft = isprint(tab[i]);
		printf("Result of test%d with ogft = %d\n", i, ogft);
		myft = ft_isprint(tab[i]);
		printf("Result of test%d with myft = %d\n\n", i, myft);
		i++;
	}
	printf("NOTICE:\nTrue values are integers from 32 to 126.\n\n\n");
}


void	test_isascii()
{
	int	tab[] = { 0 , -42 , -1 , 85 , 127 , 128 };//	<----	Here to change the values
	int	n;
	int	i;
	int	myft;
	int	ogft;

	n = 6;//	<------------------------------------	Here to change nb of tested values
	i = 0;
	printf("--ft_isascii--\n\n");
	while (i < n)
	{
		printf("Value of test%d = %d\n", i, tab[i]);
		ogft = isascii(tab[i]);
		printf("Result of test%d with ogft = %d\n", i, ogft);
		myft = ft_isascii(tab[i]);
		printf("Result of test%d with myft = %d\n\n", i, myft);
		i++;
	}
	printf("NOTICE:\nTrue values are integers from 0 to 127.\n\n\n");
}

void	test_isalnum()
{
	int	tab[] = { 0 , -42 , 47 , 48 , 57 , 58 , 64 , 65 , 90 , 91 , 96 , 97 , 122 , 123 };//	<----	Here to change the values
	int	n;
	int	i;
	int	myft;
	int	ogft;

	n = 14;//	<------------------------------------	Here to change nb of tested values
	i = 0;
	printf("--ft_isalnum--\n\n");
	while (i < n)
	{
		printf("Value of test%d = %d\n", i, tab[i]);
		ogft = isalnum(tab[i]);
		printf("Result of test%d with ogft = %d\n", i, ogft);
		myft = ft_isalnum(tab[i]);
		printf("Result of test%d with myft = %d\n\n", i, myft);
		i++;
	}
	printf("NOTICE:\nTrue values are integers from 48 to 57, from 65 to 90 and from 97 to 122.\n\n\n");
}

void	test_isdigit()
{
	int	tab[] = { 0 , -42 , 47 , 48 , 56 , 57 };//	<----	Here to change the values
	int	n;
	int	i;
	int	myft;
	int	ogft;

	n = 6;//	<------------------------------------	Here to change nb of tested values
	i = 0;
	printf("--ft_isdigit--\n\n");
	while (i < n)
	{
		printf("Value of test%d = %d\n", i, tab[i]);
		ogft = isdigit(tab[i]);
		printf("Result of test%d with ogft = %d\n", i, ogft);
		myft = ft_isdigit(tab[i]);
		printf("Result of test%d with myft = %d\n\n", i, myft);
		i++;
	}
	printf("NOTICE:\nTrue values are integers from 48 to 57.\n\n\n");
}

void	test_isalpha()
{
	int	tab[] = { 0 , -42 , 64 , 65 , 90 , 91 , 96 , 97 , 122 , 123 };//	<------- Here to change the values
	int	n;
	int	i;
	int	myft;
	int	ogft;

	n = 10;//	<--------------------------------------- Here to change nb of tested values
	i = 0;
	printf("--ft_isalpha--\n\n");
	while (i < n)
	{
		printf("Value of test%d = %d\n", i, tab[i]);
		ogft = isalpha(tab[i]);
		printf("Result of test%d with ogft = %d\n", i, ogft);
		myft = ft_isalpha(tab[i]);
		printf("Result of test%d with myft = %d\n\n", i, myft);
		i++;
	}
	printf("NOTICE:\nTrue values are integers from 65 to 90 and 97 to 122.\n\n\n");
}


void	test_strlen()
{
	const char	*tab[] = { "SALUT" , "CAPI" , "" , "BARA" };//	<------- Here to change the values
	int	n;
	int	i;
	size_t	myft;
	size_t	ogft;

	n = 4;//	<-------------------------------------------------	 Here to change nb of tested values
	i = 0;
	printf("--ft_strlen--\n\n");
	while (i < n)
	{
		printf("Value of test%d = %s\n", i, tab[i]);
		ogft = strlen(tab[i]);
		printf("Result of test%d with ogft = %zu\n", i, ogft);
		myft = ft_strlen(tab[i]);
		printf("Result of test%d with myft = %zu\n\n", i, myft);
		i++;
	}
}

int	main(void)
{
	printf("\n___---***START LIBFT TESTS***---___\n\n\n");
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_strlen();
	test_toupper();
	test_tolower();
	test_memset();
	test_bzero();
	test_memcpy();
	test_memmove();
	test_strlcpy();
	test_strlcat();
	test_strchr();
	test_strrchr();
	test_strncmp();
	test_memchr();
	test_memcmp();
	test_strnstr();
	test_atoi();
	test_calloc();
	test_strdup();
	test_substr();
	test_strjoin();
	test_strtrim();
	test_split();
	printf("\n___---***END LIBFT TESTS***---___\n\n");
	return (0);
}	
