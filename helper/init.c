/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:18:20 by agaliste          #+#    #+#             */
/*   Updated: 2022/02/08 17:35:37 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswp.h"

static inline int
	checkdupp(int *nums, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
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

static inline int
	*savenumbers(char ***str, int len)
{
	int		i;
	int		*nums;

	nums = malloc(sizeof(int) * len);
	i = 0;
	while (i < len)
	{
		nums[i] = ft_atoi((*str)[i]);
		i++;
	}
	ft_free_matrix((*str));
	if (checkdupp(nums, len))
		reterror("There are duplicates");
	return (nums);
}

static inline void
	penetratethematrix(char ***str, char **spl, int **indx)
{
	int	x;

	if (!*spl)
		return ;
	x = 0;
	while (spl[x])
	{
		(*str)[**indx] = ft_strdup(spl[x]);
		(*str) = (char **) ft_realloc(*str, sizeof(char *) * ft_strlen(spl[x]) + 1);
		(**indx)++;
		x++;
	}
}

int
	*init(char **argv, int argc, int *len)
{
	char	**spl;
	char	**str;
	int		i;

	i = 1;
	str = ft_calloc(1, sizeof(char *) * 13212231);
	if (argv[i] && argc > 1)
	{
		while (argv[i])
		{
			spl = ft_split((argv[i]), ' ');
			parse(spl);
			penetratethematrix(&str, spl, &len);
			ft_free_matrix(spl);
			i++;
		}
	}
	else
		reterror("No args");
	return (savenumbers(&str, *len));
}
