/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:11:46 by root              #+#    #+#             */
/*   Updated: 2025/02/23 15:03:24 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	long	i;

	i = n - 1;
	if (!dest && !src)
		return (NULL);
	if (dest < src)
		dest = ft_memcpy(dest, src, n);
	else
	{
		while (i >= 0)
		{
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
			i--;
		}
		return (dest);
	}
	return (dest);
}
