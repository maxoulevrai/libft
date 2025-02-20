/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:11:46 by root              #+#    #+#             */
/*   Updated: 2025/02/20 18:44:16 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t siz)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	while (i < siz)
	{
		tmp[i] = ((unsigned char *)src)[i];
		i++;
	}
	i = 0;
	while (i < siz)
	{
		((unsigned char *)dest)[i] = tmp[i];
		i++;
	}
	return (dest);
}
