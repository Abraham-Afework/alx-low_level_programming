#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
        int file_from, file_to, nread;
        char buff[1024];

    if (ac != 3)
    {
        dprintf(2, "Usage:  cp file_from file_to\n");
        exit(97);
    }
    file_from = open(av[1], O_RDONLY);
    if (file_from == -1)
    {
            dprintf(STDERR_FILENO,"Error:cant read from file %s\n", av[1]);
            exit(98);
    }
    file_to = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

    while ((nread = read(file_to,buff,1024)) > 0)
    {
            if (write(file_to,buff,nread) != nread || file_to == -1)

            {
                    dprintf(STDERR_FILENO,"Error:cant write from file %s\n" ,av[2]);
                    exit(99);
            }
    }
    if (nread == -1)
    {
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
            exit(98);
    }
    if (close(file_from) < 0)
    {
            dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
            exit(100);
    }
    if (close(file_to) < 0)
    {
            dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
            exit(100);
    }
    return (0);
}
