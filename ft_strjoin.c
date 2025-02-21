/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:47:39 by root              #+#    #+#             */
/*   Updated: 2025/02/21 19:28:25 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strdblcat(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*cat;
	// char	*str1;
	// char	*str2;

	i = 0;
	j = 0;
	cat = NULL;
	// str1 = (char *)s1;
	// str2 = (char *)s2;
	while (s1[i])
	{
		cat[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		cat[i + j] = s2[j];
		j++;
	}
	cat[i + j] = '\0';
	return (cat);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*join;

	
	join = NULL;
	if (!s1 && !s2)
		return (NULL);
	join = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!join)
		return (NULL);
	join = ft_strdblcat((char *)s1, (char *)s2);
	return (join);
}

int	main(void)
{
	char	*s1 = "oeoeoe";
	char	*s2 = "lalal";
	char	*join = NULL;

	join = ft_strjoin(s1, s2);
	printf("%s\n", join);
	free(join);
	return (0);
}
