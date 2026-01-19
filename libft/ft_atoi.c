/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:31:07 by wehan             #+#    #+#             */
/*   Updated: 2025/10/21 19:05:35 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;

	sign = 1;
	while (*nptr == 32 || (9 <= *nptr && *nptr <= 13))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -sign;
		nptr++;
		if (*nptr < '0' || *nptr > '9' )
			return (0);
	}
	i = 0;
	while ('0' <= *nptr && *nptr <= '9')
	{
		i = i * 10 + (*nptr - '0');
		nptr++;
	}
	return (i * sign);
}

// //int main()
// {
// 	printf("-12 55abc=%d\n", ft_atoi("123"));
// 	printf("%d\n", atoi("-12 55abc"));
// 	printf(" -+12abc=%d\n", ft_atoi(" -+12abc"));
// 	printf("%d\n", atoi(" -+12abc"));
// 	printf("- 12abc=%d\n", ft_atoi("- 12abc"));
// 	printf("%d\n", atoi("- 12abc"));
// 	printf("--12abc=%d\n", ft_atoi("--12abc"));
// 	printf("%d\n", atoi("--12abc"));
// 	return (0);
// }
