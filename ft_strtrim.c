/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 23:23:21 by root              #+#    #+#             */
/*   Updated: 2025/03/12 14:29:49 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char c, const char *set)
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

	if (!str && !set)
		return (NULL);
	start = 0;
	end = ft_strlen(str);
	while (str[start] && is_in_set(str[start], set))
		start++;
	while (end > start && is_in_set(str[end - 1], set))
		end--;
	trim = malloc (sizeof(char) * (end - start + 1));
	if (!trim)
		return (NULL);
	i = 0;
	while (start < end)
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
// 	char	*str = "alorsothmanealors";
// 	char	*set = "srola";
// 	char	*trim = NULL;

// 	trim = ft_strtrim(str, set);
// 	printf("%s\n", trim);
// 	free(trim);
// 	return (0);
// }
