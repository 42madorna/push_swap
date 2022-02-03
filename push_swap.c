/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:14:57 by agaliste          #+#    #+#             */
/*   Updated: 2022/02/03 11:01:48 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswp.h"

int
	main(int argc, char **argv)
{
	int	*nums;

	init(argv, argc);
	nums = savenumbers(argc, argv);
	write(1, "\nSTACK A:\n", 11);
	for(int i = 0; nums[i]; i++) // test
		printf("%d\n", nums[i]);
	free(nums);
	return (0);
}
