/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumujic <mumujic@student.42Lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:56:53 by mumujic           #+#    #+#             */
/*   Updated: 2023/01/30 20:56:53 by mumujic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i ++;
	return (i);
}

char	*ft_stash(const char *s1, const char *s2)
{
	int		i;
	char	*dst;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dst[i] = s1[i];
		i ++;
	}
	len = ft_strlen(s1);
	i = 0;
	while (s2[i])
	{
		dst[len + i] = s2[i];
		i ++;
	}
	dst[len + i] = '\0';
	return (dst);
}

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i ++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*tab;

	tab = malloc(sizeof(char) * (count * size));
	if (!tab)
		return (NULL);
	ft_bzero(tab, count * size);
	return (tab);
}

int	ft_strchr(const char *s, char c)
{
	int		i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (c);
		i++;
	}
	return (0);
}
