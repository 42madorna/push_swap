/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:14:57 by agaliste          #+#    #+#             */
/*   Updated: 2022/02/09 11:07:16 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/pushswp.h"

// static inline void
// 	leaks(void)
// {
// 	system("leaks push_swap");
// }

static inline void
	freestacks(int *stack_a, int *stack_b)
{
	free(stack_a);
	free(stack_b);
}

int
	main(int argc, char **argv)
{
	int	*stack_a;
	int	*stack_b;
	int	len;

	// atexit(leaks);
	len = 0;
	stack_a = init(argv, argc, &len);
	stack_b = ft_calloc(len, sizeof(int) * len);

				// TESTS //

	// if(issorted(stack_a, len) == 0)
	// {
	// 	freestacks(&stack_a, &stack_b);
	// 	return (0);
	// } 
	// else
	// 	write(1, "NOT SORTED!", 12);

	// write(1, "\nSTACK A:\n", 11);
	// for(int	i = 0; i < len; i++) 
	// 	printf("%d\n", stack_a[i]);

	freestacks(stack_a, stack_b);
	return (0);
}
