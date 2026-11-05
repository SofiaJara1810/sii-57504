#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

int main(int argc, char **argv) {
    int fd;
    int n;
    char buffer[1024];

    // borrar FIFO por si existiera previamente
    unlink("/tmp/FIFO");

    /* crear el FIFO */
    if (mkfifo("/tmp/FIFO", 0600)<0) {
        perror("No puede crearse el FIFO");
        return(1);
    }
    /* Abrir el FIFO */
    if ((fd=open("/tmp/FIFO", O_RDONLY))<0) {
        perror("No puede abrirse el FIFO");
        return(1);
    }
    /* Leer de la FIFO */
    while (read(fd, buffer, sizeof(buffer)-1)>0) {
	printf("%s", buffer);
    }
    close(fd);
    unlink("/tmp/FIFO");
    return(0);
}
