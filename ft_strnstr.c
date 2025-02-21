/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 14:36:00 by root              #+#    #+#             */
/*   Updated: 2025/02/21 16:38:07 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t siz)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle == NULL)
		return ((char *)haystack);
	while (haystack[i] && i < siz)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j])
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i + j]);
		i++;
	}
	return (NULL);
}

// #include <bsd/string.h>

// int	main(int ac, char **av)
// {
// 	size_t	siz = 5;
// 	(void)ac;
// 	printf("%p\n", ft_strnstr(av[1], av[2], siz));
// 	printf("%p\n", strnstr(av[1], av[2], siz));
// 	return (0);
// }