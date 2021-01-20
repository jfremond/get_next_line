#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int		main(int argc, char const **argv)
{
	int		test;
	int		fd;
	char	*line;
	int		countline;
	test = 0;
	countline = 1;
	line = NULL;
	if (argc == 1)
		fd = 0;
	else
		fd = open(argv[1], O_RDONLY);
	while ((test = get_next_line(fd, &line)) > 0)
	{
		printf("line %d : %s\n", countline, line);
		countline++;
		free(line);
	}
	close(fd);
	return (0);
}