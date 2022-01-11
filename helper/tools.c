/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:28:04 by agaliste          #+#    #+#             */
/*   Updated: 2022/01/11 19:00:33 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswp.h"

void	reterror(char *error)
{
	write(1, "Error\n", 7);
	write(1, error, ft_strlen(error));
	write(1, "\n", 1);
	exit (0);
}

int	ifsimbols(char c, char a)
{
	if (c == '-' || c == '+')
	{
		if (a == '-' || a == '+' || !ft_isdigit(a))
			return (1);
	}
	if ((c >= '!' && c <= '*') || c == ',' || (c >= '.' && c <= '/'))
		return (1);
	return (0);
}
