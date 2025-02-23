/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 13:44:19 by root              #+#    #+#             */
/*   Updated: 2025/02/23 16:19:54 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t siz)
{
	size_t			i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	i = 0;
	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	if (siz == 0)
		return (0);
	while (i < siz - 1)
	{
		if (ps1[i] != ps2[i])
			return (ps1[i] - ps2[i]);
		i++;
	}
	return (ps1[i] - ps2[i]);
}

// int	main(void)
// {
// 	char	*s1 = "abcdefghij";
// 	char	*s2 = "abcdefgxyz";
// 	size_t	siz = 7;

// 	printf("%d\n", ft_memcmp(s1, s2 , siz));
// 	printf("%d\n", memcmp(s1, s2 , siz));
// 	return (0);
// }