/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 14:36:00 by root              #+#    #+#             */
/*   Updated: 2025/02/23 16:38:32 by root             ###   ########.fr       */
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
		while (big[i + j] == small[j] && big[i + j] && i + j < siz)
			j++;
		if (small[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

// #include <bsd/string.h>

// int	main(int ac, char **av)
// {
// 	size_t	siz = 5;
// 	(void)ac;
// 	printf("%s\n", ft_strnstr(av[1], av[2], siz));
// 	printf("%s\n", strnstr(av[1], av[2], siz));
// 	return (0);
// }