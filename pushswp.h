/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswp.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:54:52 by agaliste          #+#    #+#             */
/*   Updated: 2022/02/03 10:58:41 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWP_H
# define PUSHSWP_H

# include "libft/libft.h"
# include <stdlib.h>

/*
** Operator Functions
*/

void	rotate(t_list	**lst, int size);
void	swap(t_list	**lst);
void	push(t_list	**src, t_list	**dst);

/*
** Helper Functions
*/

void	init(char **argv, int argc);
int		ifsimbols(char c, char a);
void	reterror(char *error);
int		*savenumbers(int argc, char **argv);

/*
** Checker Functions
*/


/*
** Solver Functions
*/

#endif