/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:06:18 by root              #+#    #+#             */
/*   Updated: 2025/02/20 19:20:36 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t siz)
{
	size_t	i;

	if (siz == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && i < siz - 1)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main(int ac, char **av)
// {
// 	(void)ac;
// 	printf("%d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
// 	printf("%d\n", strncmp(av[1], av[2], atoi(av[3])));
// 	return (0);
// }