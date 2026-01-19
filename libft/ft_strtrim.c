/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 18:31:46 by wehan             #+#    #+#             */
/*   Updated: 2025/10/20 20:39:12 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <bsd/string.h>
//#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*p;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = (char *)s1;
	end = (char *)s1 + ft_strlen(s1);
	while (*start && ft_strchr(set, *start))
		start++;
	while (end >= start && ft_strrchr(set, *end))
		end--;
	len = end - start + 1;
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	ft_strlcpy(p, (const char *)start, len + 1);
	return (p);
}
//
// int	main(void)
// {
// 	char *s1 = "aaabaaaa";
// 	char *s2 = "a-abc-a";
// 	char *p1 = ft_strtrim(s1, "a");
// 	printf("s1=aaabaaaa, set=a, ft_strrim=%s\n", p1);
// 	free(p1);
// 	p1 = NULL;
// 	char *p2 = ft_strtrim(s2, "a-a");
// 	printf("s2=a-abc-a, set=a-a, ft_strrim=%s\n", p2);
// 	free(p2);
// 	p2 = NULL;
// 	return (0);
// }
//strchr(set, *end), *end == \0 (not NULL), it will move ahead jump over end --
