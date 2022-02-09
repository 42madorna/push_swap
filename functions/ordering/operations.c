/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 03:15:47 by agaliste          #+#    #+#             */
/*   Updated: 2022/02/09 19:26:29 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswp.h"

void
	sx(int *stack, char *stackname)
{
	int	temp;

	temp = stack[0];
	stack[0] = stack[1];
	stack[1] = temp;
	write(1, stackname, 3);
}

void
	ss(int *stack_a, int *stack_b)
{
	int	temp;

	temp = stack_a[0];
	stack_a[0] = stack_a[1];
	stack_a[1] = temp;
	temp = stack_b[0];
	stack_b[0] = stack_b[1];
	stack_b[1] = temp;
	write(1, "ss", 3);
}

void
	px(int *stack_src, int *stack_dst, char *stackname)
{
	int i;

	i = 0;
	if (!stack_src[0])
		return ;
	while(stack_dst[i])
		i++;
	while(i > 0)
	{
		stack_dst[i] = stack_dst[i - 1];
		i--;
	}
	i = 0;
	while(i < intmatrixlen(stack_src) - 1)
	{
		stack_src[i] = stack_src[i + 1];
		i++;
	}
	stack_src[i - 1] = 0;
	write(1, stackname, 3);
}
