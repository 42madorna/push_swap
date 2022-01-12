/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:18:20 by agaliste          #+#    #+#             */
/*   Updated: 2022/01/12 17:23:32 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswp.h"

static inline int
	checkdupp(int *nums, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i <= size)
	{
		j = i + 1;
		while (j <= size)
		{
			if (nums[i] == nums[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static inline void
	parse(char **str)
{
	int	i;
	int	j;
	int	count;

	i = -1;
	while (str[++i])
	{
		j = -1;
		count = 0;
		while (str[i][++j] != '\0')
		{
			if (ft_isalpha(str[i][j]))
				reterror("Some arguments are characters");
			if (str[i][j] == '-' || str[i][j] == '+')
				count += 1;
			if (count > 1 || ifsimbols(str[i][j], str[i][j + 1]))
				reterror("Incorrect use of - or +");
		}
		if (ft_atoli(str[i]) > 2147483647 || ft_atoli(str[i]) < -2147483648)
			reterror("Some arguments are bigger than an integer");
	}
}

static inline void
	add(int **n, int newnum, int *arrsize)
{
	int	*temp;

	++*arrsize;
	temp = ft_realloc(*n, (*arrsize + 1) * sizeof(int));
	if (temp == NULL)
		reterror("Error in realloc!");
	*n = temp;
	(*n)[*arrsize] = newnum;
	printf("Added %d \n", (*n)[*arrsize]);
}

int
	*savenumbers(int argc, char **argv)
{
	char	**str;
	int		i;
	int		j;
	int		*nums;
	int		size;

	size = -1;
	nums = malloc(sizeof(int));
	ft_bzero(nums, 1);
	i = 1;
	while (i < argc)
	{
		str = ft_split((argv[i++]), ' ');
		j = 0;
		while (str[j])
			add(&nums, ft_atoi(str[j++]), &size);
		ft_free_matrix(str);
	}
	if (checkdupp(nums, size))
		reterror("There are duplicates");
	return (nums);
}

void
	init(char **argv, int argc)
{
	char	**str;
	int		i;

	i = 1;
	if (argv[i] && argc > 1)
	{
		while (argv[i])
		{
			str = ft_split((argv[i]), ' ');
			parse(str);
			ft_free_matrix(str);
			i++;
		}
	}
	else
		reterror("No args");
}
