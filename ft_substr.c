/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:34:47 by root              #+#    #+#             */
/*   Updated: 2025/02/23 20:11:29 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *haystack, unsigned int start, size_t siz)
{
	char	*sub;
	size_t	i;

	sub = NULL;
	i = 0;
	if (!haystack || start >= ft_strlen(haystack))
		return (NULL);
	sub = malloc(sizeof(char) * siz + 1);
	if (!sub)
		return (NULL);
	while (i < siz && haystack[start + i])
	{
		sub[i] = haystack[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// int	main(void)
// {
// 	char	*big = "";
// 	char	*sub = NULL;

// 	sub = ft_substr(big, 400, 20);
// 	printf("%s\n", sub);
// 	free(sub);
// 	return (0);
// }
