#include "so_long.h"
#include <stdio.h>
#include <fcntl.h>  // for open()
#include <unistd.h> // for close()

int main (void)
{
    int fd = open("./maps/map1.ber", O_RDONLY);
    printf("Value of fd is: %i \n",fd);
    char *out = ft_gnl(fd);
    printf("The 1st result is: %s", out);
    char *out1 = ft_gnl(fd);
    printf("The 2nd result is: %s", out1);
    char *out2 = ft_gnl(fd);
    printf("The 3rd result is: %s", out2);
	free(out);
	free(out1);
	free(out2);
    close(fd);
    return (0);
}
