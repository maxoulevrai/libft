/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 18:36:30 by root              #+#    #+#             */
/*   Updated: 2025/02/23 15:32:58 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <ctype.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t siz);
int		ft_memcmp(const void *s1, const void *s2, size_t siz);
void	ft_bzero(void *mem, size_t siz);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_striteri(char *str, void (*fct)(unsigned int, char*));
void	*ft_calloc(size_t nmemb, size_t siz);
void	*ft_memset(void *mem, int val, size_t siz);
void	*ft_memchr(const void *mem, int val, size_t siz);
void	*ft_memcpy(void *dest, const void *src, size_t siz);
void	*ft_memmove(void *dest, const void *src, size_t siz);
char	*ft_itoa(int n);
char	*ft_strdup(const char *src);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char *str, const char *set);
char	*ft_strmapi(char const *str, char (*fct)(unsigned int, char));
char	*ft_strnstr(const char *haystack, const char *needle, size_t siz);
char	*ft_substr(char const *haystack, unsigned int start, size_t siz);
char	**ft_split(char const *str, char sep);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t siz);
size_t	ft_strlcat(char *dst, const char *src, size_t siz);

#endif