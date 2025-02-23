/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 14:36:00 by root              #+#    #+#             */
/*   Updated: 2025/02/23 20:59:01 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t siz)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (small == NULL)
		return ((char *)big);
	while (big[i] && i < siz)
	{
		j = 0;
		while (big[i + j] == small[j] && small[j] && i + j < siz)
			j++;
		if (!small[j])
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

// #include <bsd/string.h>

// int	main(void)
// {
// 	size_t	siz = 0;
// 	char	*s1 = "";
// 	char	*s2 = "";

// 	printf("%p\n", ft_strnstr(s1, s2, siz));
// 	printf("%s\n", strnstr(s1, s2, siz));
// 	return (0);
// }