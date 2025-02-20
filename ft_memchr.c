/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:23:54 by root              #+#    #+#             */
/*   Updated: 2025/02/20 20:49:08 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *mem, int val, size_t siz)
{
	size_t			i;
	unsigned char	*out;
	
	i = 0;
	out = (unsigned char *)mem;
	while (i < siz)
	{
		if (out[i] == (unsigned char)val)
			return (&out[i]);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char 	*mem = "oaladsdfsd";
	char	val = 'd';
	size_t	siz = 4;

	printf("%s\n", (char *)ft_memchr(mem, val , siz));
	printf("%s\n", (char *)memchr(mem, val , siz));
	return (0);
}