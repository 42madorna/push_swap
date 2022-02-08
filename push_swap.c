/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:14:57 by agaliste          #+#    #+#             */
/*   Updated: 2022/02/08 17:30:36 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswp.h"

void
	leaks(void)
{
	system("leaks push_swap");
}

int
	main(int argc, char **argv)
{
	int	*stack_a;
	int *stack_b;
	int	len;

	atexit(leaks);
	len = 0;
	stack_a = init(argv, argc, &len);
	stack_b = malloc(sizeof(int) * len);
	write(1, "\nSTACK A:\n", 11);
	for(int	i = 0; i < len; i++) // test
		printf("%d\n", stack_a[i]);
	free(stack_a);
	free(stack_b);
	return (0);
}
