#include <stdio.h>
#include "get_next_line.h"

int main()
{
    int fd = open("test.txt", O_RDONLY);
    if (fd < 0)
    {
        printf("Error");
        return (1);
    }

    char *line;
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }

    close(fd);
    return (0);
}
