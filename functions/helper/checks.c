/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:34:48 by agaliste          #+#    #+#             */
/*   Updated: 2022/02/09 11:05:48 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswp.h"

int
	ifsimbols(char c, char a)
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

int
	issorted(int *stack, int len)
{
	int	i;

	i = 0;
	while (i < len - 1)
	{
		if (stack[i] < stack[i + 1])
			i++;
		else
			return (1);
	}
	return (0);
}

