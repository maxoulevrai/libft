/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 22:18:22 by root              #+#    #+#             */
/*   Updated: 2025/03/19 23:13:40 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int	main(void)
// {
// 	t_list	*node1 = NULL;
// 	t_list	*node2 = NULL;
// 	t_list	*node3 = NULL;

// 	node1 = malloc(sizeof(t_list));
// 	if (!node1)
// 		return (0);

// 	node2 = malloc(sizeof(t_list));
// 	if (!node2)
// 			return (0);
// 	node3 = malloc(sizeof(t_list));
// 	if (!node3)
// 		return (0);
// 	node1->content = "julie";
// 	node1->next = node2;
// 	node2->content = "maxime";
// 	node2->next = node3;
// 	node3->content = "othmane";
// 	printf("&node3: %p\n", node3);
// 	printf("&last node: %p\n", ft_lstlast(node1));
// 	free(node1);
// 	free(node2);
// 	free(node3);
// 	return (0);
// }
