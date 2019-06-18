/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:56:33 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/06/18 12:00:47 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <ctype.h>
# include <unistd.h>

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_strcat(char *s1, const char *s2);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, char const *src);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
char	*ft_strstr(const char *haystack, const char *needle);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strclr(char *s);
void	ft_putstr(char const *s);
void	ft_putchar(char c);
void	ft_putendl(char const *str);
void	ft_strdel(char **as);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr(int n);
int		ft_atoi(const char *str);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void(*f)(unsigned int, char *));
void	ft_putnbr_fd(int n, int fd);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s);
char	*ft_itoa(int n);
char	**ft_strsplit(char const *s, char c);

#endif
