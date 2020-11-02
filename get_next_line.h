/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:41:12 by jfremond          #+#    #+#             */
/*   Updated: 2020/11/02 13:43:08 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2);

size_t	ft_strlen(const char *str);

void	*ft_memmove(void *dest, const void *src, size_t n);

int		ft_newline(char *str);
int		get_next_line(int fd, char **line);

#endif
