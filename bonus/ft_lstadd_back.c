/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 22:35:59 by root              #+#    #+#             */
/*   Updated: 2025/03/19 23:13:33 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while ((*lst)->next != NULL)
		(*lst) = (*lst)->next;
	(*lst)->next = new;
}

// int	main(void)
// {
// 	t_list	*node1 = NULL;
// 	t_list	*node2 = NULL;
// 	t_list	*last = NULL;

// 	node1 = malloc(sizeof(t_list));
// 	if (!node1)
// 		return (0);
// 	node2 = malloc(sizeof(t_list));
// 	if (!node2)
// 			return (0);
// 	node1->content = "julie";
// 	node2->content = "maxime";
// 	last = ft_lstlast(node1);
// 	printf("&last node: %s\n", (char *)last->content);
// 	ft_lstadd_back(&node1, node2);
// 	last = ft_lstlast(node1);
// 	printf("&last node: %s\n", (char *)last->content);
// 	free(node1);
// 	free(node2);
// 	return (0);
// }
