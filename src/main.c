/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main
*/

#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "struct.h"

int main(int argc, char **argv)
{
	char *filepath;

	if (argc != 2) {
		my_putstr("You don't have the required number of argument\n");
		return (84);
	}
	filepath = argv[1];
	init(filepath);
	return (0);
}

int init(char *filepath)
{
	struct list *bsq = NULL;
	bsq = malloc(sizeof(*bsq));
	if (bsq == NULL) {
		return (84);
	}
	struct stat size;
	stat(filepath, &size);
	bsq->buffer_size = size.st_size;
	bsq->size = bsq->buffer_size;
	fs_open_file(filepath, bsq);
	return (0);
}
