/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:34:48 by agaliste          #+#    #+#             */
/*   Updated: 2022/01/11 18:44:43 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswp.h"

int	checkdupp(int *nums)
{
	int i = 0;
	int j;
	while (nums[i])
	{
		j = i + 1;
		while(nums[j])
		{
			if (nums[i] == nums [j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
