/*
** EPITECH PROJECT, 2017
** my_getnbr.c
** File description:
** 
*/

int my_getnbr(char const *str)
{
	int i = 0;
	int nbr = 0;
	int isneg = 1;

	while (str[i] == '+' || str[i] == '-') {
		if (str[i] == '-')
			isneg = isneg * -1;
		++i;
	}
	while( str[i] != '\0') {
		if (str[i] >= '0' && str[i] <= '9') {
			nbr = nbr * 10;
			nbr = nbr + str[i] - 48;
			++i;
		}
	}
	return (nbr * isneg);
}
