/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:44:33 by root              #+#    #+#             */
/*   Updated: 2025/02/20 19:26:37 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *mem, int val, size_t siz)
{
	size_t	i;

	i = 0;
	while (i < siz)
	{
		((unsigned char *)mem)[i] = (unsigned char)val;
		i++;
	}
	return (mem);
}

// int	main(void)
// {
// 	char	str1[10] = "alors";
// 	char	str2[10] = "alors";

// 	ft_memset(str1, 'e', 10);
// 	memset(str2, 'e', 10);

// 	printf("%s\n", str1);
// 	printf("%s", str2);
// 	return (0);
// }