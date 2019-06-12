/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:37:58 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/06/12 15:37:20 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t itoa_len(int n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (i);
	if (n < 0)
        i++;
    while (n)
    {
        n /= 10;
        i++;
    }
    return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t len;
	unsigned int i;

	len = n;
	i = itoa_len(n);
	if (n == -2147483648)
		return ("-2147483648");
	if (!(str = (char *)malloc(sizeof(char) * (i +1))))
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n = n / 10;
		i--;
	}
	return (str);
}
