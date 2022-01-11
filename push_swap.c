/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:14:57 by agaliste          #+#    #+#             */
/*   Updated: 2022/01/11 19:27:55 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswp.h"

int	main(int argc, char **argv)
{
	int	*nums;

	*nums = NULL;
	init(argv, argc);
	nums = savenumbers(argc, argv);
	if (checkdupp(nums))
		reterror("There are duplicates");
	printf("%d", nums[0]);
	free(nums);
	return (0);
}
