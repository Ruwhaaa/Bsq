/*
** EPITECH PROJECT, 2017
** algo.c
** File description:
** algorythm
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "struct.h"

int init_algo(struct list *bsq)
{
	bsq->y = bsq->y + 2;
	bsq->up = -bsq->y;
	bsq->left = -1;
	replace(bsq);
	return (0);
}

int replace(struct list *bsq)
{
	int x = 0;
	while (x != bsq->real) {
		if (bsq->tab_new[x] == '.') {
			bsq->tab_new[x] = '0';
		}
		if (bsq->tab_new[x] == 'o') {
			bsq->tab_new[x] = 'I';
		}
		x++;
	}
	freeing(bsq);
	return (0);
}
