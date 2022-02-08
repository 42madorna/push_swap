/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:41:49 by agaliste          #+#    #+#             */
/*   Updated: 2022/02/08 18:46:22 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswp.h"

void
	ss(int **stack_a, int **stack_b)
{
	int temp;
	temp = (*stack_a)[0];
	(*stack_a)[0] = (*stack_a)[1];
	(*stack_a)[1] = temp;

	temp = (*stack_b)[0];
	(*stack_b)[0] = (*stack_b)[1];
	(*stack_b)[1] = temp;
	write(1, 'ss', 3);
}
