/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 16:02:02 by jfremond          #+#    #+#             */
/*   Updated: 2021/06/05 16:35:01 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int	main(int argc, char const **argv)
{
	int		fd;
	char	*line;
	int		countline;

	countline = 1;
	line = NULL;
	if (argc == 1)
		fd = 0;
	else
		fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		printf("line %d : %s\n", countline, line);
		countline++;
		free(line);
	}
	close(fd);
	return (0);
}
