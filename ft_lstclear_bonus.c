/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 17:08:04 by root              #+#    #+#             */
/*   Updated: 2025/03/21 18:11:05 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_del(void *element)
{
	if (!element)
		return ;
	free(element);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !*lst || !del)
		return ;
	while (lst && *lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, ft_del);
		*lst = tmp;
	}
}

int	main(void)
{
	t_list	*node1 = malloc(sizeof(t_list));
	t_list	*node2 = malloc(sizeof(t_list));
	t_list	*node3 = malloc(sizeof(t_list));

	if (!node1 || !node2 || !node3)
		return (1);

	node1->content = strdup("julie");
	node1->next = node2;

	node2->content = strdup("maxime");
	node2->next = node3;

	node3->content = strdup("olala");
	node3->next = NULL;

	printf("Avant:\n");
	printf("Node 1: %s\n", (char *)node1->content);
	printf("Node 2: %s\n", (char *)node2->content);
	printf("Node 3: %s\n", (char *)node3->content);

	ft_lstclear(&node2, ft_del);

	printf("Après:\n");
	printf("Node 1: %s\n", (char *)node1->content);
	// printf("Node 2: %s\n", (char *)node2->content);
	// printf("Node 3: %s\n", (char *)node3->content);

	ft_lstclear(&node1, ft_del);
	return (0);
}
