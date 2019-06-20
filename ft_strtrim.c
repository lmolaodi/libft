/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 14:08:32 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/06/20 16:01:00 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int	i;
	int	j;

	i = 0;
	if (s)
	{
		j = ft_strlen(s);
		while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
			i++;
		while ((i < j && (s[j - 1] == ' ' ||
						s[j - 1] == '\n' || s[j - 1] == '\t')))
			j--;
		if (i == j)
			return (ft_strnew(1));
		return (ft_strsub(s, i, j - i));
	}
	return (0);
}
