/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 16:39:20 by root              #+#    #+#             */
/*   Updated: 2025/02/23 14:20:51 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t siz)
{
	unsigned char	*mem;

	mem = NULL;
	if (nmemb * siz > UINT_MAX)
		return (NULL);
	if (nmemb == 0 || siz == 0)
	{
		mem = malloc(sizeof(unsigned char));
		return (mem);
	}
	mem = malloc(nmemb * siz);
	if (!mem)
		return (NULL);
	ft_bzero(mem, nmemb);
	return (mem);
}

// int	main(void)
// {
// 	int	*tab = {2, 5, 3, 4};
// 	int	*tab2 = {2, 5, 3, 4};

// 	tab = ft_calloc(7, sizeof(int));
// 	tab2 = calloc(7, sizeof(int));

// 	printf("%ls\n", tab);
// 	printf("%ls\n", tab2);
// 	free(tab);
// 	free(tab2);
// 	return (0);
// }