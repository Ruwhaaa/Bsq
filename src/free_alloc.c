/*
** EPITECH PROJECT, 2017
** free_alloc.c
** File description:
** free_alloc
*/

#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

int freeing(struct list *bsq)
{
	free(bsq->buffer);
	free(bsq->tab);
	free(bsq->tab_new);
	free(bsq->line_nb);
	free(bsq);
	return (0);
}
