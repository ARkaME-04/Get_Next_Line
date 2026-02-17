#include <stdlib.h>
#include <unistd.h>

char	*get_next_line(int fd)
{
	static char	*stash;
	char		buffer[BUFFER_SIZE + 1];
	int		bytes;


	bytes = read(fd, buffer, BUFFER_SIZE);
	buffer[bytes] = '\0';
	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	if (!stash)
		stash = buffer;
	if (stash != '\0')
		stash = (stash + buffer);
	return (NULL);
}
