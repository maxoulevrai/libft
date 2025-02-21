/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 18:36:30 by root              #+#    #+#             */
/*   Updated: 2025/02/21 17:17:30 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <ctype.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define UINT_MAX 2147483647

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t siz);
int		ft_memcmp(const void *s1, const void *s2, size_t siz);
void	ft_bzero(void *mem, size_t siz);
void	*ft_calloc(size_t nmemb, size_t siz);
void	*ft_memset(void *mem, int val, size_t siz);
void	*ft_memchr(const void *mem, int val, size_t siz);
void	*ft_memcpy(void *dest, const void *src, size_t siz);
void	*ft_memmove(void *dest, const void *src, size_t siz);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t siz);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t siz);
#endif