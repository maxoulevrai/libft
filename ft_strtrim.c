/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 23:23:21 by root              #+#    #+#             */
/*   Updated: 2025/02/23 16:49:57 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char c, char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *str, const char *set)
{
	char	*trim;
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	start = 0;
	end = ft_strlen(str) - 1;
	while (str[start] && is_in_set(str[start], (char *)set))
		start++;
	while (end > start && is_in_set(str[end], (char *)set))
		end--;
	if (!str && !set)
		return (NULL);
	trim = malloc (sizeof(char) * end - start + 1);
	if (!trim)
		return (NULL);
	while (start <= end)
	{
		trim[i] = str[start];
		start++;
		i++;
	}
	trim[i] = '\0';
	return (trim);
}

// int	main(void)
// {
// 	char	*str = "lorem \n ipsum \t dolor \n sit \t amet";
// 	char	*set = " ";
// 	char	*trim = NULL;

// 	trim = ft_strtrim(str, set);
// 	printf("%s\n", trim);
// 	free(trim);
// 	return (0);
// }
