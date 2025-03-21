/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 15:44:05 by root              #+#    #+#             */
/*   Updated: 2025/03/21 18:01:32 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_del(void *element);

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}

// int	main(void)
// {
// 	t_list	*node1 = malloc(sizeof(t_list));
// 	t_list	*node2 = malloc(sizeof(t_list));

// 	if (!node1 || !node2)
// 		return (1);

// 	node1->content = strdup("julie");
// 	node1->next = node2;

// 	node2->content = strdup("maxime");
// 	node2->next = NULL;

// 	printf("Avant:\n");
// 	printf("Node 1: %s\n", (char *)node1->content);
// 	printf("Node 2: %s\n", (char *)node2->content);

// 	ft_lstdelone(node1, ft_del);

// 	printf("Après:\n");
// 	printf("Node 2: %s\n", (char *)node2->content);

// 	ft_lstdelone(node2, ft_del);
// 	return (0);
// }
