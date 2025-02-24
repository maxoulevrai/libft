/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:50:01 by root              #+#    #+#             */
/*   Updated: 2025/02/24 04:19:47 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	char	char_c;

	char_c = (unsigned char)c;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	if (char_c == '\0')
		return ((char *)&str[i]);
	return (NULL);
}

// int	main(void)
// {
// 	 printf("%s\n", ft_strchr("teste", 'e'));
// 	 return (0);
// }