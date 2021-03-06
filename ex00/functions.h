/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vribeiro <vribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 02:37:03 by psergio-          #+#    #+#             */
/*   Updated: 2021/04/12 00:42:03 by vribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

unsigned int	ft_strlen(char *str);
int				is_parameter_valid(char *str);
int				is_board_valid(int board[4][4]);
int				validate_top_to_bottom(int matriz[4][4], int colXup[4]);
int				validate_bottom_to_top(int matriz[4][4], int colXdown[4]);
int				validate_left_to_right(int matriz[4][4], int rowXleft[4]); 
int				validate_right_to_left(int matriz[4][4], int rowXright[4]);

#endif
