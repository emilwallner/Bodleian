/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 20:13:07 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/08 16:42:28 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putendl(char const *s);
void	ft_putchar(char c);
void	ft_putstr(char const *str);
int		ft_strlen(char const *s);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr(int n);
int		ft_isalpha(int n);
int		ft_isdigit(int n);
int		ft_isalnum(int n);
int		ft_isprint(int n);
int		ft_isascii(int n);
int		ft_toupper(int n);
int		ft_lolower(int n);
int		ft_atoi(char const *s);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_bzero(void *s, size_t n);
void	*ft_memalloc(size_t n);
char	*ft_strnew(size_t n);
void	*ft_memchr(const void *src, int c, size_t n);
void	*ft_memdel(void **ap);
int		ft_memcmp(void const *str1, void const *str2, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memcpy(void *dest, void const *src, size_t n);
char	*ft_strcpy(char *dest, const char *src);
void	*ft_memccpy(void *dest, void const *src, int c, size_t n);
char	*ft_strdup(const char *s);
char	*ft_strncpy(char *dest, const char *src, size_t len);
int		ft_strcmp(const char *s1,const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);


#endif

