/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:34:47 by root              #+#    #+#             */
/*   Updated: 2025/02/24 04:03:23 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *haystack, unsigned int start, size_t siz)
{
	char	*str;
	size_t	i;
	size_t	len;
	size_t	haystack_len;

	if (!haystack)
		return (NULL);
	haystack_len = ft_strlen(haystack);
	if (start >= haystack_len)
		return (ft_strdup(""));
	len = siz;
	if (start + siz > haystack_len)
		len = haystack_len - start;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = haystack[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char	*big = "hola";
// 	char	*sub = NULL;

// 	sub = ft_substr(big, 3, 18446744073709551615);
// 	printf("%s\n", sub);
// 	free(sub);
// 	return (0);
// }
