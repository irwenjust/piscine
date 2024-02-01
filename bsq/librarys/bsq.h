/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:57:58 by likong            #+#    #+#             */
/*   Updated: 2024/01/31 19:58:01 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define MAXBUF 8192
// newmap matrix.c
typedef struct s_map
{
	unsigned int	columns;
	unsigned int	rows;
	char			obstacle;
	char			empty;
	char			full;
	char			**buffer;
}	t_map;

//array_function.c
char	**ft_create_str_array(unsigned int n1, unsigned int n2);
void	ft_print_str_array(char **matrix, unsigned int n1, unsigned int n2);
int		*ft_create_array(int n);
char	*ft_remalloc(char *str, int size);
int		ft_natoi(char *number, int n);

//bsq_solution.c
void	ft_detect_obstacle(t_map *map, int **mat);
void	ft_update_result(t_map *map, int **mat, int *max, int coordinate[]);
void	ft_mid_obstacle(t_map *map, int *coord, unsigned int y, unsigned int f);
int		ft_solution(t_map *map, int **mat, int coordinate[]);
void	ft_bsq(t_map *map);

//general.c
void	ft_putchar(char c);
void	ft_print_error(char *errorinfo);
void	ft_assert(int condition, char *errorinfo);
int		ft_is_digit(char c);
int		ft_is_printable(unsigned char c);

//matrix_function.c
int		**ft_initialization(t_map *map);
t_map	*ft_create_map(char *file);
int		**ft_create_matrix(int n1, int n2);
void	ft_delete_matrix(int **matrix, unsigned int n1);

//parse_file_map.c
int		check_first_line(char *str);
int		check_map_size(char *str);
int		check_maps_exist(char *file);
int		check_linebreak(char *file);
int		check_valid_chars(char *file);

//parse_file_overall.c
ssize_t	count_contents_bytes(char *filename);
char	*read_file(char *filename);
char	*terminal_input(void);
void	execute(char *file);
char	*parse_map_file(char *filename, char *str);

// solution_tool.c
int		ft_minimum_2(int n1, int n2);
int		ft_minimum_3(int n1, int n2, int n3);
void	ft_mark_full(t_map *map, int coordinate[], int max_length);

// string_function.c
int		ft_strlen(char *str);
int		ft_strlen_delimiter(char *str, char delimiter);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strcat(char *dest, char *src);
char	*ft_new_str(int n);

#endif
