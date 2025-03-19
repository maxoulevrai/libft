/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:27:12 by root              #+#    #+#             */
/*   Updated: 2025/03/19 22:52:31 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	*front = NULL;
// 	t_list	*next_front = NULL;

// 	front = malloc(sizeof(t_list));
// 	front->content = "olala";
// 	front->next = NULL;
// 	next_front = malloc(sizeof(t_list));
// 	next_front->content = "glglglg";
// 	next_front->next = NULL;
// 	printf("front val: %s\n", (char *)front->content);
// 	printf("front val: %p\n", front->next);
// 	ft_lstadd_front(&front, next_front);
// 	printf("front val: %s\n", (char *)front->content);
// 	free(front->next);
// 	free(front);
// 	return (0);
// }
