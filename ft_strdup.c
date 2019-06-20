/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:30:01 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/06/20 15:56:52 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s1);
	if (!(new = (char *)malloc(sizeof(*s1) * len + 1)))
		return (NULL);
	while (s1[i] != '\0')
	{
		if (s1[i] == '\0')
			return (NULL);
		else
			while (i < len)
			{
				new[i] = s1[i];
				i++;
			}
	}
	new[i] = '\0';
	return (new);
}
