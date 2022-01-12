/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:14:57 by agaliste          #+#    #+#             */
/*   Updated: 2022/01/12 17:24:51 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswp.h"

int
	main(int argc, char **argv)
{
	int	*nums;

	init(argv, argc);
	nums = savenumbers(argc, argv);
	printf("%d", nums[1]); // test
	free(nums);
	return (0);
}
