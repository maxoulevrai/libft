/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:58:13 by root              #+#    #+#             */
/*   Updated: 2025/02/19 19:34:07 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
		
	i = 0;
	j = 0;
	src_len = ft_strlen(src);
	if (siz == 0)
		return (src_len);
	while (dst[i])
		i++;
	while (j < siz - 1 && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (src_len + i);
}

int	main(int ac, char **av)
{
	char	dst[64] = "alorsla";
	char	dst2[64] = "alorsla";
	size_t	siz = 1;

	(void)ac;
	printf("%ld\n", ft_strlcat(dst, av[1], siz));
	printf("%s\n", dst);
	printf("%ld\n", strlcat(dst2, av[1], siz));
	printf("%s\n", dst2);
	return (0);
}