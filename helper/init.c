/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:18:20 by agaliste          #+#    #+#             */
/*   Updated: 2022/01/11 19:01:01 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswp.h"

void	parse(char **str)
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

int add(int **n, int newnum, int arrsize)
{
    int *temp;

	++arrsize;
    temp=ft_realloc(*n, (arrsize+1) * sizeof(int));
    if(temp==NULL)
		reterror("Error in realloc!");
    *n=temp;
    (*n)[arrsize]=newnum;
    printf("Added %d \n", (*n)[arrsize]);
	return (arrsize);
}

int	*savenumbers(int argc, char **argv)
{
	char	**str;
	int		i;
	int		j;
	int		*nums;
	int		size;
	
	size = 0;
	nums = malloc(sizeof(int));
	ft_bzero(nums, 1);
	i = 1;
	while (i < argc)
	{
		str = ft_split((argv[i++]), ' ');
		j = 0;
		while (str[j])
			size = add(&nums, ft_atoi(str[j++]), size);
		ft_free_matrix(str);
	}
	return(nums);
}

void	init(char **argv, int argc)
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
