/*
** EPITECH PROJECT, 2017
** BSQ.c
** File description:
** main function
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include "struct.h"

int fs_open_file(char const *filepath, struct list *bsq)
{
	bsq->fd = open(filepath, O_RDONLY);

	if (bsq->fd == -1) {
		my_putstr("FAILURE\n");
		return (84);
	}
	if (bsq->fd != -1) {
		my_putstr("SUCCESS\n");
		reading(bsq);
		return (0);
	}
	close(bsq->fd);
	return (0);
}

int tab(struct list *bsq)
{
	int index = 0;
	int x = 0;
	bsq->tab = NULL;
	bsq->tab = malloc(sizeof(char) * bsq->buffer_size);

	if (bsq->tab == NULL) {
		return (84);
	}
	while (x != bsq->buffer_size) {
		bsq->tab[x] = bsq->buffer[index];
		x++;
		index++;
	}
	line_number(bsq);
	return (0);
}

int line_number(struct list *bsq)
{
	bsq->number = 0;
	int x = 0;
	int index = 0;
	bsq->line_nb = NULL;
	bsq->line_nb = malloc(sizeof(char) * bsq->size);

	if (bsq->line_nb == NULL) {
		return (84);
	}
	while (bsq->tab[index] != '\n') {
		bsq->line_nb[x] = bsq->tab[index];
		bsq->number = bsq->number + 1;
		x++;
		index++;
	}
	bsq->y = my_getnbr(bsq->line_nb);
	column(bsq);
	return (0);
}

int column(struct list *bsq)
{
	int x = 0;
	int index = bsq->number + 1;
	bsq->number = bsq->number + 1;
	bsq->real = 0;
	bsq->real = bsq->size - bsq->number;
	bsq->tab_new = NULL;
	bsq->tab_new = malloc(sizeof(char) * bsq->real);

	if (bsq->tab_new == NULL) {
		return (84);
	}
	while (x != bsq->real) {
		bsq->tab_new[x] = bsq->tab[index];
		x++,
		index++;
	}
	double_tab(bsq);
	return (0);
}

int double_tab(struct list *bsq)
{
	int count = 0;
	int size = 0;
	int x = 0;
	int y = 0;
	(*bsq).double_tab = NULL;
	while(count != 100) {
		bsq->double_tab[count] = malloc(sizeof((*bsq).double_tab) * bsq->nb_line);
		count++;
	}

	while (size != bsq->real) {
		bsq->double_tab[x][y] = bsq->tab_new[x];
		if (bsq->double_tab == '\n') {
			y = y + 1;
			x = 0;
		}
		size++;
		x++;
	}
	write(1, bsq->double_tab, bsq->real);
	printf("%s\n" ,bsq->double_tab);
	return (0);
}
