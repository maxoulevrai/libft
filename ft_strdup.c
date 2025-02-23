/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:03:42 by root              #+#    #+#             */
/*   Updated: 2025/02/23 15:52:18 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	size_t	i;

	dst = NULL;
	i = 0;
	dst = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!dst)
		return (NULL);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

// int	main(void)
// {
// 	char	*src = "oeoeoe";
// 	char	*dst = NULL;
// 	char	*dst2 = NULL;

// 	dst = ft_strdup(src);
// 	dst2 = ft_strdup(src);
// 	printf("%s\n", dst);
// 	printf("%s\n", dst2);
// 	free(dst);
// 	free(dst2);
// 	return (0);
// }