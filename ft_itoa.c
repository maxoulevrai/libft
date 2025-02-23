/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 14:32:30 by root              #+#    #+#             */
/*   Updated: 2025/02/23 14:46:37 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrlen(long nb)
{
	size_t	len;

	len = 0;
	while (nb > 0)
	{
		len++;
		nb /= 10;
	}
	return (len);
}	

char	*ft_itoa(int n)
{
	char	*convert;
	long	nbr;
	size_t	len;
	int		neg;

	convert = NULL;
	nbr = (long)n;
	neg = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		neg = 1;
	}
	len = ft_nbrlen(nbr) + neg;
	convert = malloc(sizeof(char) * len + 1);
	if (!convert)
		return (NULL);
	while (len--)
	{
		convert[len] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (neg == 1)
		convert[0] = '-';
	return (convert);
}

// int	main(void)
// {
// 	char	*str = NULL;
// 	int 	nbr = -2147483648;
	
// 	str = ft_itoa(nbr);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }