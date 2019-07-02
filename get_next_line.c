/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 14:40:09 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/07/02 11:08:00 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	ft_check_fd_error(int fd, char **str, char **line)
{
	int i;

	i = 0;
	if (fd == -1 || line == NULL)
		return (-1);
	if (!*str)
	{
		if (!(*str = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1))))
			return (-1);
	}
	return (0);
}

char	*ft_read_fd_line(char *str, int fd)
{
	char	file[BUFF_SIZE + 1];
	int		i;
	
	while ((i = read(fd, file, BUFF_SIZE)) > 0)
	{
		file[i] = '\0';
		str = ft_strjoin(str, file);
	}
	return (str);
}

int	get_next_line(const int fd, char **list)
{
	char	*str;
	int		i;

	i = 0;
	if (ft_check_fd_error(fd, &str, list) == -1)
		return (-1);
	if (*str)
		ft_strcpy(*list, str);
	str = ft_read_fd_line(str, fd);
	if (str[i])
	{
		while (str[i] != '\n' && str[i])
			i++;
		if (i == 0)
			(*list) = ft_strdup("");
		else
		{
			(*list) = ft_strsub(str, 0, i);
			str = &str[i + 1];
		}
		return (1);
	}
	else
		(*list) = ft_strdup("");
	return (0);
}
