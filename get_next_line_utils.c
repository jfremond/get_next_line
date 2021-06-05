/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 18:03:20 by jfremond          #+#    #+#             */
/*   Updated: 2021/06/05 16:01:28 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_newline(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptr_d;
	char	*ptr_s;

	ptr_d = (char *)dest;
	ptr_s = (char *)src;
	if (dest == src)
		return (dest);
	if (ptr_s < ptr_d)
	{
		while (n--)
			ptr_d[n] = ptr_s[n];
		return (dest);
	}
	while (n--)
		*ptr_d++ = *ptr_s++;
	return (dest);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len;
	size_t	len_s1;
	size_t	len_s2;
	char	*res;

	if (!s1 && !s2)
		return (0);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	len = len_s1 + len_s2;
	res = (char *)malloc(sizeof(*res) * (len + 1));
	if (!res)
		return (0);
	ft_memmove(res, s1, len_s1);
	ft_memmove(res + len_s1, s2, len_s2);
	res[len] = '\0';
	free((char *)s1);
	return (res);
}
