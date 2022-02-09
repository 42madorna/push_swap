/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswp.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:54:52 by agaliste          #+#    #+#             */
/*   Updated: 2022/02/09 12:37:08 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWP_H
# define PUSHSWP_H

# include "../libft/libft.h"
# include <stdlib.h>

/*
** Operator Functions
*/
void	sx(int *stack, char *stackname);
void	ss(int *stack_a, int *stack_b);


/*
** Helper Functions
*/

int		*init(char **argv, int argc, int *len);
int		ifsimbols(char c, char a);
void	reterror(char *error);
void	findorder(int *stack_a, int len);

/*
** Checker Functions
*/

int		issorted(int *stack, int len);

/*
** Solver Functions
*/

int		*insertion_sort(int *array, int len);

#endif