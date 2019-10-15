/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my.h
*/

#include <sys/stat.h>

#define EXIT_SUCCES	0
#define EXIT_USAGE	1
#define EXIT_ERROR	84
#define EXIT_ARG	84

#ifndef MY_LS_H

#define MY_LS_H
	typedef struct file_s
	{
		char key;
		char *name;
		struct file_s *next;
	} file_t;
	int my_getnbr(char const *str);
	int my_putstr(char *str);
	int my_put_nbr(int nb);
	void my_putchar(char c);
	int my_strcmp(char const *s1, char  const *s2);
	int my_strlen(char const *str);
	char *get_flag_ls(int argc, char **argv, int *is_filepath);

	file_t *fill_all_arg(int argc, char **argv, int *list_size);
	file_t *file_list_init(char *name);
	void get_argumentpath(int argc, char **argv,
		file_t **dir_list, file_t **file_list);

	void file_display(file_t *file, char c);
	void display_file(file_t *file, char *flag);
	int display_l(char *file_name, char *filepath, int end);
	void get_type(struct stat info);
	void display_dir(file_t *file, char *flag, char *filepath);
	void get_dir_file(char *flag, char *filepath);
	char *my_strcat(char *dest, char *src);
	void display_date(struct stat info);
	void display_right(struct stat info);
	void display_hours(char *date);
	void display_years(char *date);
	void put_invalid(char *name);

	void sorter(file_t **file, int list_size, char *flag);
	void swap(file_t *file_a);
	int rotate_end(file_t **file_a);
	void rotate_begin(file_t *file_a);
	int list_size(file_t *list);
	void non_filepath_recursivity(char *flag, char *dir_path);
	void filepath_recursivity(int argc, char **argv, char *flag);
	void display_dir_file(file_t *file, char *flag, char *filepath);

	void add_node_begin(file_t **file, char *name);
#endif /*MY_LS_H*/
