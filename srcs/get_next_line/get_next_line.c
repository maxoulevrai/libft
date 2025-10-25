/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:48:12 by maleca            #+#    #+#             */
/*   Updated: 2025/10/25 16:42:30 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buff[BUFFER_SIZE];
	static int	buff_iter;
	static int	r_bytes;
	char		line[70000];
	int			line_iter;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	(1 && (r_bytes = 0, buff_iter = 0, line_iter = 0));
	while (1)
	{
		if (buff_iter >= r_bytes)
		{
			(1 && (buff_iter = 0, r_bytes = read(fd, buff, BUFFER_SIZE)));
			if ((r_bytes == 0 && line_iter == 0) || r_bytes == -1)
				return (NULL);
			if (r_bytes == 0)
				break ;
		}
		line[line_iter++] = buff[buff_iter++];
		if (line[line_iter - 1] == '\n')
			break ;
	}
	return (line[line_iter] = '\0', ft_strdup(line));
}
