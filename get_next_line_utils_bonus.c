/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 00:40:53 by abziouzi          #+#    #+#             */
/*   Updated: 2022/02/22 15:04:38 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_check_nl(char *rest)
{
	int		i;

	i = 0;
	while (rest[i])
	{
		if (rest[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_strjoin(char *rest, char *buff)
{
	char	*str;
	int		i;
	int		j;

	if (!rest || !buff)
		return (NULL);
	str = (char *)malloc(sizeof(char)
			* ((ft_strlen(rest) + ft_strlen(buff)) + 1));
	if (!str)
		return (NULL);
	i = -1;
	j = 0;
	while (rest[++i])
			str[i] = rest[i];
	while (buff[j])
		str[i++] = buff[j++];
	str[i] = '\0';
	free(rest);
	return (str);
}

size_t	ft_strlen(char *s)
{
	size_t	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

char	*ft_strdup(char *s1)
{
	int		i;
	char	*x;

	i = 0;
	x = malloc(sizeof(char) * (ft_strlen((char *)s1)) + 1);
	if (!x)
		return (NULL);
	while (s1[i])
	{
		x[i] = s1[i];
		i++;
	}
	x[i] = '\0';
	return (x);
}
