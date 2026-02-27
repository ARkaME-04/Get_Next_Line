/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhrandri <rhrandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 13:29:34 by rhrandri          #+#    #+#             */
/*   Updated: 2026/02/25 13:14:55 by rhrandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

char	*ft_strchr(char *str, int c);
char	*ft_strdup(char *s1);

void	ft_calloc(unsigned int count, unsigned int size);
void	ft_bzero(char *s, unsigned int n);

size_t	ft_strlen(char *str);

#endif
