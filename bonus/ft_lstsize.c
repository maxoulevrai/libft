/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:59:47 by root              #+#    #+#             */
/*   Updated: 2025/03/19 22:51:49 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// int	main(void)
// {
// 	t_list	*node1 = NULL;
// 	t_list	*node2 = NULL;
// 	t_list	*node3 = NULL;
// 	int		count;

// 	node1 = malloc(sizeof(t_list));
// 	if (!node1)
// 		return (0);
// 	node2 = malloc(sizeof(t_list));
// 	if (!node2)
// 			return (0);
// 	node3 = malloc(sizeof(t_list));
// 	if (!node3)
// 		return (0);
// 	node1->next = node2;
// 	node2->next = node3;
// 	count = ft_lstsize(node1);
// 	printf("lstsize = %d\n", count);
// 	free(node1);
// 	free(node2);
// 	free(node3);
// 	return (0);
// }