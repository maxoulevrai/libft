/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:18:04 by root              #+#    #+#             */
/*   Updated: 2025/03/21 15:34:35 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	if (!content)
		return (NULL);
	element = malloc(sizeof(t_list));
	if (!element)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}

// int	main(void)
// {
// 	char	*new = "olala";
// 	t_list	*ma_list = NULL;

// 	ma_list = ft_lstnew(new);
// 	printf("nvl element: %s\n", (char *)ma_list->content);
// 	free(ma_list);
// 	return (0);	
// }
