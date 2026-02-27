#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int	fd;
	fd = open("README.md", O_RDONLY);
	char s = get_next_line(fd);
	while (s)
	{
		printf("%s", s);
		s = get_next_line(fd);
	}
	free(s);
	close(fd);
}
