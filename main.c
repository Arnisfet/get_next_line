
#include "./cmake-build-debug/get_next_line.h"


int main()
{
	char *line;
	int fd;

	fd = 0;
	fd = open("t.txt", O_RDONLY);
	if (fd == -1)
		puts("error");
	get_next_line(fd, &line);
	printf("%s\n", line);
	get_next_line(fd, &line);
	printf("%s\n", line);
	get_next_line(fd, &line);
	printf("%s\n", line);
}