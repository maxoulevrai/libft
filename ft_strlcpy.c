/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:18:42 by root              #+#    #+#             */
/*   Updated: 2025/02/20 18:45:04 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	srclen;
	size_t	i;

	srclen = 0;
	i = 0;
	while (src[srclen])
		srclen++;
	while (i < siz && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (siz != 0)
		dst[i] = '\0';
	return (srclen);
}

// int	main(int ac, char **av)
// {
// 	char	dst[10];
// 	char	dst2[10];

// 	(void)ac;
// 	printf("%ld\n", ft_strlcpy(dst, av[1], 10));
// 	printf("%s\n", dst);
// 	printf("%ld\n", strlcpy(dst2, av[1], 10));
// 	printf("%s\n", dst2);
// 	return (0);
// }