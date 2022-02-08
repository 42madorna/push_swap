/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:34:48 by agaliste          #+#    #+#             */
/*   Updated: 2022/02/08 18:08:30 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswp.h"

int
	issorted(int *stack, int len)
{
	int	i;

	i = 0;
	while (i < len - 1 )
	{
		if (stack[i] < stack[i + 1])
			i++;
		else
			return 1;
	}
	return (0);
}