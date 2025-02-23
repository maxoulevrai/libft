/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:18:42 by root              #+#    #+#             */
/*   Updated: 2025/02/23 16:30:09 by root             ###   ########.fr       */
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
	if (siz == 0)
		return (srclen);
	while (i != siz - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (siz != 0)
		dst[i] = '\0';
	return (srclen);
}

// int	main(void)
// {
// 	char	dst[10];
// 	char	dst2[10];
// 	char	*str = "lorem ipsum dolor sit amet";

// 	printf("%ld\n", ft_strlcpy(dst, str, 0));
// 	printf("%s\n", dst);
// 	printf("%ld\n", strlcpy(dst2, str, 0));
// 	printf("%s\n", dst2);
// 	return (0);
// }