/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 00:41:06 by abziouzi          #+#    #+#             */
/*   Updated: 2023/03/18 15:16:02 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

# define BUFFER_SIZE 4096

char	*get_next_line(int fd);

char	*ft_read_to_rest(int fd, char *rest);

int		ft_check_nl(char *rest);

char	*ft_strjoin(char *rest, char *buff);
size_t	ft_strlen(char *s);
char	*ft_strdup(char *s1);

char	*ft_getline(char *rest);

char	*ft_new_rest(char *rest);

#endif
