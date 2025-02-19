/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswp.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:19:06 by agaliste          #+#    #+#             */
/*   Updated: 2022/02/20 20:55:02 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWP_H
# define PUSHSWP_H

# include "../libft/libft.h"
# include <stdlib.h>

/*
** Struct Declaration
*/

typedef struct s_stack
{
	int	status;
	int	num;
}				t_stack;

/*
** Operator Functions
*/

void	rotate(t_list	**lst, int size, char *opname);
void	swap(t_list	**lst, char *opname);
void	push(t_list	**src, t_list	**dst, char *opname);

/*
** Helper Functions
*/

void	init(char **argv, int argc, t_list **lst, t_list **copy);
void	reterror(char *error);
void	replacebyorder(t_list **unordered_lst, t_list *ordered_lst);

/*
** Parsing Functions
*/

int		checkdupp(t_list *a);
int		ifsimbols(char c, char a);
int		issorted(t_list *stack);

/*
** Ordering Functions
*/

void	selection_sort(t_list **head);
void	three_sort(t_list **stack);
void	five_sort(t_list **stackA, t_list **stackB);
void	big_sort(t_list **stackA, t_list **stackB, int max_nums);

/*
** five_sort Functions
*/

void	first_check(t_list **stackA, t_list **stackB);
void	second_check(t_list **stackA, t_list **stackB);

#endif
