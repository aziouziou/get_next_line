/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 00:41:06 by abziouzi          #+#    #+#             */
/*   Updated: 2022/02/22 15:04:27 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

char	*get_next_line(int fd);

char	*ft_read_to_rest(int fd, char *rest);

int		ft_check_nl(char *rest);

char	*ft_strjoin(char *rest, char *buff);
size_t	ft_strlen(char *s);
char	*ft_strdup(char *s1);

char	*ft_getline(char *rest);

char	*ft_new_rest(char *rest);

#endif
