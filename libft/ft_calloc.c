/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:36:08 by wehan             #+#    #+#             */
/*   Updated: 2025/10/21 18:55:14 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*calloc;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > ((size_t)-1) / size)
		return (NULL);
	calloc = (void *)malloc(nmemb * size);
	if (calloc != NULL)
		ft_bzero(calloc, nmemb * size);
	return (calloc);
}

// void	test_ft_calloc(void)
// {
// 	int *arr = ft_calloc(5, sizeof(int));
// 	if (arr == NULL)
// 	{
// 		printf("error\n");
// 		return;
// 	}
// 	if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
// 		printf("zero-set\n");
// 	else
// 		printf("no zero-set\n");
// 	free(arr);
// 	printf("success\n");
// }

// int	main(void)
// {
// 	test_ft_calloc();
// 	return 0;
// }
// //memset(calloc, 0, nmemb * size);
