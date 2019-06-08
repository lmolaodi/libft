/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 11:19:27 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/06/08 14:06:28 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	int	len;
	int i;

	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = ft_strnew(len);
	while (i < len)
	{
		ft_strcpy(str, s1);
		ft_strcat(str, s2);
		i++;
	}
	str[len] = '\0';
	return (str);
}
