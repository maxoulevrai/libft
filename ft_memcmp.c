/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 13:44:19 by root              #+#    #+#             */
/*   Updated: 2025/02/21 14:17:43 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t siz)
{
	size_t	i;
	unsigned char *ps1;
	unsigned char *ps2;
	
	i = 0;
	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	if (siz == 0)
		return (0);
	while (i < siz)
	{
		if (ps1[i] != ps2[i])
			return (ps1[i] - ps2[i]);
		i++;
	}
	return (ps1[i] - ps2[i]);
}

// int	main(void)
// {
// 	int 	s1[6] = {1, 5, 3, 8, 6};
// 	int 	s2[6] = {1, 8, 8, 8, 6};
// 	size_t	siz = 5;

// 	printf("%d\n", ft_memcmp(s1, s2 , siz));
// 	printf("%d\n", memcmp(s1, s2 , siz));
// 	return (0);
// }