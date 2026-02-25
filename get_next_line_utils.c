/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhrandri <rhrandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 09:26:07 by rhrandri          #+#    #+#             */
/*   Updated: 2026/02/25 07:35:15 by rhrandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	if (!str)
		return (NULL);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	unsigned int	i;
	char			*s2;

	if (!s1)
		return (NULL);
	s2 = (char *) malloc(ft_strlen(s1) + 1);
	if (!s2)
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	ft_strchr(char *str, int c)
{
	unsigned char	ch;

	ch = c;
	while (*str)
	{
		if (*str == ch)
			return ((char *)str);
		str++;
	}
	if (ch == '\0')
		return ((char *)str);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	res = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char);
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		res[j++] = s1[i++];
	i = 0;
	while (s2[i])
		res[j++] = s2[i++];
	res[j] = '\0';
	return (res);
}

char	*ft_substr(char *str, unsigned int start, size_t len)
{
	char	*s;
	size_t	i;

	if (!str)
		return (NULL);
	if (start >= ft_strlen(str))
		return (malloc(1));
	if (start < 0)
		return (NULL);
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	s = malloc(len + 1) * sizeof(char);
	if (!s)
		return (NULL);
	while (i < len)
	{
		s[i] = str[i + start];
		i++;
	}
	s[i] = '\0';
	return (s);
}
