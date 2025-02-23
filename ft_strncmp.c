/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:06:18 by root              #+#    #+#             */
/*   Updated: 2025/02/23 16:19:26 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t siz)
{
	size_t	i;

	if (siz == 0)
		return (0);
	i = 0;
	while ((s1[i] || s2[i]) && i < siz - 1)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int main(void)
// {
// 	char	*s1 = "test\200";
// 	char	*s2 = "test\0";
// 	size_t	siz = 6;

// 	printf("%d\n", ft_strncmp(s1, s2, siz));
// 	printf("%d\n", strncmp(s1, s2, siz));
// 	return (0);
// }