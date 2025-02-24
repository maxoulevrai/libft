/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 20:22:56 by root              #+#    #+#             */
/*   Updated: 2025/02/24 03:18:26 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	word_len(char *str, char sep)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != sep)
		i++;
	return (i);
}

size_t	tab_len(char *str, char sep)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == sep)
			i++;
		if (str[i])
		{
			count++;
			i += word_len(&str[i], sep);
		}
	}
	return (count);
}

char	*ft_strldup(char *str, size_t siz)
{
	char	*dup;
	size_t	i;

	i = 0;
	if (!str || !siz)
		return (NULL);
	dup = malloc(sizeof(char) * (siz + 1));
	if (!dup)
		return (NULL);
	while (i < siz)
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
	char	*cast;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	cast = (char *)str;
	split = malloc(sizeof(char *) * (tab_len(cast, sep) + 1));
	if (!split)
		return (NULL);
	while (str[i])
	{
		while (str[i] && str[i] == sep)
			i++;
		if (str[i])
		{
			split[j] = ft_strldup(&cast[i], word_len(&cast[i], sep));
			i += word_len(&cast[i], sep);
			j++;
		}
	}
	split[j] = NULL;
	return (split);
}

// int	main(void)
// {
// 	char	*str = "";
// 	char	sep = 'z';
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
