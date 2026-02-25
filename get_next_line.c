/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhrandri <rhrandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 09:22:18 by rhrandri          #+#    #+#             */
/*   Updated: 2026/02/25 12:56:22 by rhrandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*fill_stash(char *stash, char *buf)
{
	char	*tmp;

	tmp = ft_strjoin(stash, buf);
	free(stash);
	return (tmp);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*buf;
	size_t		bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	bytes = 1;
	while (bytes > 0)
	{
		bytes = read(fd, buf, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(buf);
			free(stash);
			return (NULL);
		}
		buf[bytes] = '\0';
		stash = fill_stash(stash, buf);
		if (ft_strchr(stash, '\n'))
			break ;
	}
	free(buf);
	return (stash);
}
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int	fd;
	fd = open("README.md", O_RDONLY);
	char *s = get_next_line(fd);
	while (s)
	{
		printf("%s", s);
		s = get_next_line(fd);
	}
	free(s);
	close(fd);
}
