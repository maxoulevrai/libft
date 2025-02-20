/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:58:13 by root              #+#    #+#             */
/*   Updated: 2025/02/20 18:16:36 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;
		
	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (siz <= dst_len)
		return (src_len + siz:);
	while ((dst_len + i) < siz - 1 && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}

// int	main(int ac, char **av)
// {
// 	char	dst[64] = "alorsla";
// 	char	dst2[64] = "alorsla";
// 	size_t	siz = 1;

// 	(void)ac;
// 	printf("%ld\n", ft_strlcat(dst, av[1], siz));
// 	printf("%s\n", dst);
// 	printf("%ld\n", strlcat(dst2, av[1], siz));
// 	printf("%s\n", dst2);
// 	return (0);
// }