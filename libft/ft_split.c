/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:55:52 by wehan             #+#    #+#             */
/*   Updated: 2025/10/21 20:33:14 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

static size_t	wordcount(char const *s, char c)
{
	size_t	n;
	char	*s1;

	s1 = (char *)s;
	n = 0;
	while (*s1)
	{
		while (*s1 && *s1 == c)
			s1++;
		if (*s1 && *s1 != c)
			n++;
		while (*s1 && *s1 != c)
			s1++;
	}
	return (n);
}

static char	**ft_free(char **p, int i)
{
	while (i >= 0)
	{
		free(p[i]);
		p[i] = NULL;
		i--;
	}
	free(p);
	return (NULL);
}

static char	**assignspace(char const *s, char c)
{
	char	**p;
	size_t	i;
	char	*s2;
	size_t	len;

	p = (char **)malloc(sizeof(char *) * (wordcount(s, c) + 1));
	if (!p)
		return (NULL);
	s2 = (char *)s;
	i = -1;
	while (++i < wordcount(s, c))
	{
		while (*s2 && *s2 == c)
			s2++;
		len = 0;
		while (*s2 && *s2 != c)
		{
			len++;
			s2++;
		}
		p[i] = malloc(sizeof(char) * (len + 1));
		if (!p[i])
			return (ft_free(p, i - 1));
	}
	return (p[i] = NULL, p);
}

static char	**splitcpy(char **p, char *s, char c)
{
	size_t	n;
	size_t	i;
	size_t	j;

	n = wordcount(s, c);
	i = 0;
	while (s && i < n)
	{
		while (*s && *s == c)
			s++;
		j = 0;
		while (*s && *s != c)
		{
			p[i][j] = *s;
			j++;
			s++;
		}
		p[i][j] = '\0';
		i++;
	}
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;

	if (!s)
		return (NULL);
	p = assignspace(s, c);
	if (p == NULL)
		return (NULL);
	splitcpy(p, (char *)s, c);
	return (p);
}
//
// int	main(void)
// {
// 	char const s[] = "abc-aed-ked";
// 	char **p = ft_split(s, '-');
// 	int i = 0;
// 	if (!p)
// 	{
// 		return (1);
// 		printf("assign error\n");
// 	}
// 	while (p[i])
// 	{
// 		printf("p[%d] = %s\n", i, p[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (p[i])
// 	{
// 		free(p[i]);
// 		p[i] = NULL;
// 		i++;
// 	}
// 	free(p);
// 	return (0);
// }
