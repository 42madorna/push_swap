/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:14:57 by agaliste          #+#    #+#             */
/*   Updated: 2022/02/08 18:26:56 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswp.h"

// void
// 	leaks(void)
// {
// 	system("leaks push_swap");
// }

static inline void
	freestacks(int **stack_a, int **stack_b)
{
	free(*stack_a);
	free(*stack_b);
}

int
	main(int argc, char **argv)
{
	int	*stack_a;
	int *stack_b;
	int	len;

	// atexit(leaks);
	len = 0;
	stack_a = init(argv, argc, &len);
	stack_b = malloc(sizeof(int) * len);

				// TEST //
	
	// if(issorted(stack_a, len) == 0)
	// {
	// 	freestacks(&stack_a, &stack_b);
	// 	return (0);
	// } 
	// else
	// 	write(1, "NOT SORTED!", 12);
	
	op_s(&stack_b, "sb");
	write(1, "\nSTACK A:\n", 11);
	for(int	i = 0; i < len; i++) 
		printf("%d\n", stack_b[i]);
	freestacks(&stack_a, &stack_b);
	return (0);
}
