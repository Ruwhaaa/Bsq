/*
** EPITECH PROJECT, 2017
** struct.h
** File description:
** struct + my
*/

#ifndef LIST_H_
#define LIST_H_

struct list {
	int buffer_size;
	int size;
	int fd;
	int temp;
	int number;
	int real;
	int x;
	int y;
	int nb_line;
	int left;
	int up;
	int up_left;
	char *buff_cpy;
	char *buffer;
	char *tab;
	char *tab_new;
	char *line_nb;
	char **double_tab;
};

int my_getnbr(char const *str);
int my_putstr(char const *str);
void my_putchar(char c);
void fs_understand_return_of_read(struct list *bsq);
int fs_open_file(char const *filepath, struct list *bsq);
int reading(struct list *bsq);
int tab(struct list *bsq);
int init(char *filepath);
int line_number(struct list *bsq);
int column(struct list *bsq);
int freeing(struct list *bsq);
int init_algo(struct list *bsq);
int replace(struct list *bsq);
int double_tab(struct list *bsq);

#endif /* !LIST_H_ */
