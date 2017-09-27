#include "libft.h"
#include "get_next_line.h"
#include <fcntl.h>

int	main(int ac, char **av)
{
	int	fd;
	char	*line;

	(void)ac;
	fd = open(av[1], O_RDONLY);
	line = NULL;
	if (fd != -1)
	{
		while (get_next_line(fd, &line) > 0)
		{
			ft_putendl(line);
			free(line);
		}
	}
	return (0);
}
