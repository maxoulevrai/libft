/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 20:22:56 by root              #+#    #+#             */
/*   Updated: 2025/03/03 03:51:06 by root             ###   ########.fr       */
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
char	**ft_free(char **split, int top)
{
	int	i;

	i = 0;
	while (i <= top)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

char	**ft_split(char const *str, char sep)
{
	char	**split;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!str || !sep)
		return (NULL);
	split = malloc(sizeof(char *) * (tab_len((char *)&str[i], sep) + 1));
	if (!split)
		return (NULL);
	while (str[i])
	{
		while (str[i] && str[i] == sep)
			i++;
		if (str[i])
		{
			split[j] = ft_strldup((char *)&str[i], word_len((char *)&str[i], sep));
			if (split[j] == NULL)
				return (ft_free(split, j));
			i += word_len((char *)&str[i], sep) && j++;
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

// int main(int ac, char **av)
// {
// 	char **split = ft_split(NULL, 'a');
	
// 	int i = 0;
	// while (split[i])
	// {
	// 	printf("%s\n", split[i]);
	// 	i++;
	// }
	// i = 0;
	// while (split[i])
	// {
	// 	free(split[i]);
	// 	i++;
	// }
	// free(split);
// 	return (0);
// }