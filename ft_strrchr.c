/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:59:10 by root              #+#    #+#             */
/*   Updated: 2025/02/24 03:39:54 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int search)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0 && str[i] != (char)search)
		i--;
	if (str[i] == (char)search)
		return ((char *)&str[i]);
	return (NULL);
}

// int	main(int ac, char **av)
// {
// 	(void)ac;

// 	printf("%s\n", ft_strrchr(av[1], av[2][0]));
// 	return (0);
// }