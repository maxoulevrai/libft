/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 13:46:07 by root              #+#    #+#             */
/*   Updated: 2025/02/23 14:56:50 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char	upcase(unsigned int	i, char c)
// {
// 	(void)i;

// 	c = c - 'a' + 'A';
// 	return (c);
// }

char	*ft_strmapi(char const *str, char (*fct)(unsigned int, char))
{
	unsigned int	i;
	char			*map;

	i = 0;
	map = NULL;
	if (!str)
		return (NULL);
	map = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!map)
		return (NULL);
	while (str[i])
	{
		map[i] = fct(i, str[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}

// int	main(void)
// {
// 	char	*str = "oalla";
// 	char	*map = NULL;

// 	map = ft_strmapi(str, upcase);
// 	printf("%s\n", map);
// 	free(map);
// 	return (0);
// }