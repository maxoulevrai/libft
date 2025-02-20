/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:49:29 by root              #+#    #+#             */
/*   Updated: 2025/02/19 16:58:46 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *mem, size_t siz)
{
	size_t	i;

	i = 0;
	while (i < siz)
	{
		((char *)mem)[i] = 0;
		i++;
	}
}

int	main(void)
{
	char	str1[10] = "alors";
	char	str2[10] = "alors";
	size_t	siz = 2;
	
	ft_bzero(str1, siz);
	bzero(str2, siz);
	
	printf("%s\n", str1);
	printf("%s\n", str2);
	return (0);
}