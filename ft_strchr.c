/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:50:01 by root              #+#    #+#             */
/*   Updated: 2025/02/24 19:29:55 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	c = (char)c;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (NULL);
}

// int	main(void)
// {
// 	char s[] = "tripouille";
// 	// ft_strchr("tripouille", 't' + 256);
// 	printf("%s\n", strchr(s, 't' + 256));
// 	printf("%s\n", ft_strchr(s, 't' + 256));
// 	 return (0);
// }