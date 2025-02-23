/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:59:51 by root              #+#    #+#             */
/*   Updated: 2025/02/23 15:44:00 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t siz)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < siz)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	src[10] = NULL;
// 	char	dst1[10] = NULL;
// 	char	dst2[10] = "";
// 	size_t	siz = 5;

// 	printf("%s\n", (char *)ft_memcpy(dst1, src, siz));
// 	printf("%s\n", (char *)memcpy(dst2, src, siz));
// 	return (0);
// }