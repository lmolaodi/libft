/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:37:58 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/06/17 12:36:33 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	int		negative;
	int		temp;
	char	*str;

	negative = 0;
	len = 1;
	temp = n;
	if (n < 0)
		negative = 1;
	while ((temp /= 10))
		len++;
	str = ft_strnew(len + negative);
	if (str == NULL)
		return (NULL);
	if (negative)
		str[0] = '-';
	while (len--)
	{
		str[len + negative] = (negative ? -(n % 10) : (n % 10)) + '0';
		n = n / 10;
	}
	return (str);
}
