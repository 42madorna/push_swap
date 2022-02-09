/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 03:15:47 by agaliste          #+#    #+#             */
/*   Updated: 2022/02/09 11:06:04 by agaliste         ###   ########.fr       */
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
