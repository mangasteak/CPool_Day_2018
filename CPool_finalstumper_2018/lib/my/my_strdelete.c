/*
** EPITECH PROJECT, 2018
** my_strdelete.c
** File description:
** my_strdelete.c
*/

#include <stdlib.h>

char *my_strdelete(char *src, int ch_to_delete)
{
    int len = 0;
    char *new_src;
    int jump = 0;
    int i = 0;

    for (len = 0; src[len] != '\0'; len++);
    new_src = malloc(len * sizeof(char) - sizeof(char));
    if (ch_to_delete != 0)
        len -= 1;
    for (i = 0; i < len; i++) {
        if (i == ch_to_delete)
            jump += 1;
        new_src[i] = src[i + jump];
    }
    new_src[i] = '\0';
    return (new_src);
}
