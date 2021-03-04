/*
** EPITECH PROJECT, 2017
** read_return.c
** File description:
** reading the returning value
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include "struct.h"

int reading(struct list *bsq)
{
	bsq->temp = 0;
	bsq->buffer = NULL;
	bsq->buffer = malloc(sizeof(char) * bsq->buffer_size);
	if (bsq->buffer == NULL) {
		return (84);
	}
	bsq->temp = read(bsq->fd, bsq->buffer, bsq->buffer_size);
	bsq->size = bsq->buffer_size;
	fs_understand_return_of_read(bsq);
	return (0);
}

void fs_understand_return_of_read(struct list *bsq)
{
	if (bsq->temp == -1) {
		my_putstr("read failed\n");
	}
	if (bsq->temp == 0) {
		my_putstr("read are nothing more to read\n");
	}
	if (bsq->size == bsq->buffer_size) {
		my_putstr("read completed the entire buffer\n");
	}
	if (bsq->buffer_size > bsq->size ) {
		my_putstr("read didn't complete the entire buffer\n");
	}
	tab(bsq);
}
