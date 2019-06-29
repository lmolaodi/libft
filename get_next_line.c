/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 14:40:09 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/06/29 16:16:20 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_next_line(const int fd, char **list)
{
	char *str;
	char *buff;
	int temp;
	ssize_t i;
	int len;

	if (fd < 0 || (!str[fd]  && (!str = ft_strnew(1))) || !list)
		return (-1);
	while (!ft_strchr(str[fd], '\n') && (i == read(fd, buff, BUFF_SIZE)) > 0 )
	{
		buff[i] = '\0';
		temp = str[fd];
		str[fd] = ft_strjoin(str[fd] , buff);
		ft_srdel(&temp);
	}
	if (str == -1 || !*(temp = str[fd]))
		return (str == -1 ? -1 : 0);
	if (( len = (ft_strchr(str[fd] , '\n') > 0)))
		*line = ft_strsub(str[fd], 0, ft_strchr(str[fd], '\n') - str[fd]);
	else
		*line = ft_strdup(str[fd]);
	str[fd] = ft_strsub(str[fd], (unsigned int)(ft_strlen(*line), (size_t)(ft_strlen(str[fd]) - (ft_strlen(*line) + len)));
			ft_strdel(&temp);
			return (!(str[fd] && !(ft_strlen(*line))));
}
