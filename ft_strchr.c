/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:50:01 by root              #+#    #+#             */
/*   Updated: 2025/02/23 16:34:55 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	if (c == '\0')
		return ((char *)&str[ft_strlen(str)]);
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}

// int	main(int ac, char **av)
// {
// 	 (void)ac;

// 	 printf("%s\n", ft_strchr(av[1], av[2][0]));
// 	 return (0);
// }