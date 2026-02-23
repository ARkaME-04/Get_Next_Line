/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhrandri <rhrandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 09:22:18 by rhrandri          #+#    #+#             */
/*   Updated: 2026/02/23 10:27:00 by rhrandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*buf;
	char		*nl;
	char		*r;
	char		tmp;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	
}
