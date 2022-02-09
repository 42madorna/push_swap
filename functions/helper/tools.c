/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:28:04 by agaliste          #+#    #+#             */
/*   Updated: 2022/02/09 12:37:30 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswp.h"

void
	reterror(char *error)
{
	write(STDERR_FILENO, "Error\n", 7);
	write(STDERR_FILENO, error, ft_strlen(error));
	write(STDERR_FILENO, "\n", 1);
	exit (0);
}

void
	findorder(int *stack_a, int len)
{
	int	i;
	int	j;
	int	*copy;

	copy = ft_calloc(len, sizeof(int) * len);
	i = -1;
	while (i++ < len)
		copy[i] = stack_a[i];
	copy = insertion_sort(copy, len);
	i = -1;
	while (++i <= len)
	{
		j = -1;
		while (++j < len)
		{
			if (stack_a[i] == copy[j])
				stack_a[i] = j + 1;
		}
	}
	free(copy);
}
