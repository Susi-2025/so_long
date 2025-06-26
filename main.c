#include "so_long.h"
#include <stdio.h>
#include <fcntl.h>  // for open()
#include <unistd.h> // for close()

int main (void)
{
    int fd = open("./maps/map_no_rec.ber", O_RDONLY);
	int fd1 = open("./maps/map_em.ber", O_RDONLY);
    printf("Value of fd is: %i \n",fd);
    char *out = ft_gnl(fd);
    printf("The 1st result is: %s", out);
    char *out1 = ft_gnl(fd);
    printf("The 2nd result is: %s", out1);
    char *out2 = ft_gnl(fd);
    printf("The 3rd result is: %s", out2);
	char *out3 = ft_gnl(fd1);
	printf("The file content is: %s", out3);
	free(out);
	free(out1);
	free(out2);
	free(out3);
    close(fd);
	close(fd1);
    return (0);
}
