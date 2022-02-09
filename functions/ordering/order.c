/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:40:24 by agaliste          #+#    #+#             */
/*   Updated: 2022/02/09 18:30:01 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswp.h"

int
	*insertion_sort(int *array, int len)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < len)
	{
		j = i;
		while (j > 0 && array[j] < array[j - 1])
		{
			temp = array[j];
			array[j] = array[j - 1];
			array[j - 1] = temp;
			j--;
		}
		i++;
	}
	return (array);
}

// void
// 	small_sort(int *stack_a, int *stack_b, int len)
// {
// 	return ;
// }

// void
// 	big_sort(int *stack_a, int *stack_b, int len)
// {
// 	return ;
// }
