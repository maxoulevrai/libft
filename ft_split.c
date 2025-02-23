/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 20:22:56 by root              #+#    #+#             */
/*   Updated: 2025/02/23 13:29:07 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	gwl(char *str, char sep)
{
	size_t	i;

	i = 0;
	while (str[i] != sep && str[i])
		i++;
	return (i);
}

size_t	gtl(char *str, char sep)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == sep && str[i])
			i++;
		if (str[i])
		{
			count++;
			i += gwl(&str[i], sep);
			i++;
		}
	}
	return (count);
}

char	*ft_strndup(char *str, size_t siz)
{
	size_t	i;
	char	*dup;

	i = 0;
	dup = NULL;
	if (!str && !siz)
		return (NULL);
	dup = malloc(sizeof(char) * siz + 1);
	if (!dup)
		return (NULL);
	while (i < siz && str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	**ft_split(char const *str, char sep)
{
	char	**split;
	size_t	i;
	size_t	j;

	split = NULL;
	i = 0;
	j = 0;
	if (!str && !sep)
		return (NULL);
	split = malloc(sizeof(char *) * gtl((char *)str, sep) + 1);
	if (!split)
		return (NULL);
	while (str[i])
	{
		while (str[i] == sep && str[i])
			i++;
		if (str[i])
		{
			split[j] = ft_strndup((char *)&str[i], gwl((char *)&str[i], sep));
			i += gwl((char *)&str[i], sep);
			j++;
		}
	}
	split[j] = NULL;
	return (split);
}

// int	main(void)
// {
// 	char	*str = "alors la c pas vrai";
// 	char	sep = ' ';
// 	char	**split = NULL;
// 	size_t	i = 0;

// 	split = ft_split(str, sep);
// 	while (split[i])
// 	{
// 		printf("%s\n", split[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (split[i])
// 	{
// 		free(split[i]);
// 		i++;
// 	}
// 	free(split);
// 	return (0);
// }
