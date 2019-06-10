/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:46:27 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/06/06 12:51:03 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	i = 0;
	if (s[i] != '\0' && f)
	{
		while (s[i] != '\0')
		{
			f(&s[i]);
			i++;
		}
	}
}