/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:56:33 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/05/22 16:15:06 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LIBFT_H__
#define __LIBFT_H__

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
char	*ft_strcat(char *restrict s1, const char *restrict s2);
int	ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char	*dest, const char *src, size_t len);
int	ft_tolower(int c);
int	ft_toupper(int c);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	ft_bzero(void *s, size_t n);
char	ft_strstr(const char *haystack, const char *needle);
void	ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

#endif
