/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 16:59:41 by mqian             #+#    #+#             */
/*   Updated: 2019/04/03 16:19:46 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libft/includes/libft.h"
# include "get_next_line.h"

struct tetrimino
{
	int x; //stores x coordinate of first block
	int y; //stores y coordinate of first block
	int blocks[3];  //stores directions relative to first block
	// right is 1, down is 2, left is 3, up is 4
};


int		parse_and_retrieve(char **pieces, int fd);//, struct tetrimino *peaces);
int		piece_reader(char **pieces, int fd, int *pc);
int		is_valid_input(char **pieces, int *pc);
int		is_valid_piece(char **pieces, int *pc);
void	solver(char **pieces);
void	check_adjacent(char **pieces, int *i, int *j, int *borders);
void	top_left_helper(int *values, char *pieces, int k);
void	top_helper(int **values);
void	left_helper(int **values);
void	top_left_justify(char **pieces);
//void	solver(char **pieces);

#endif