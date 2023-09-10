/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogullar <finarfin40@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:55:51 by mogullar          #+#    #+#             */
/*   Updated: 2023/08/30 17:32:38 by mogullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_double(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
		free(str[i--]);
	free(str);
}

static t_list	*str_to_lst(char *str)
{
	t_list	*lst;
	t_list	*lst1;
	char	**duble;
	int		i;

	i = 0;
	duble = ft_split(str, ' ');
	while (duble[i])
	{
		lst1 = ft_lstnew(ft_atoi(duble[i], duble));
		lst1->index = -31;
		if (i == 0)
			lst = lst1;
		else
			ft_lstadd_back(&lst, lst1);
		i++;
	}
	if (ft_dup_control(lst))
		ft_free(duble);
	ft_free_double(duble);
	free(str);
	return (lst);
}

static t_list	*arg_to_lst(int ac, char *av[])
{
	int		i;
	int		x;
	char	*str;

	i = 1;
	x = 0;
	str = NULL;
	while (i < ac)
	{
		str = ft_strjoin(str, av[i]);
		str = ft_strjoin(str, " ");
		i++;
	}
	if (ft_only_num(str))
	{
		free(str);
		ft_putstr("Error\n");
		exit(1);
	}
	return (str_to_lst(str));
}

static int	ft_av_checker(char **av, int ac)
{
	int	i;
	int	j;
	int	hash;

	j = 1;
	hash = 1;
	while (j < ac)
	{
		i = 0;
		hash = 1;
		while (av[j][i])
		{
			if (av[j][i] != 32 && av[j][i] != '\t')
			{
				hash = 0;
				break ;
			}
			i++;
		}
		if (hash == 1)
			return (1);
		j++;
	}
	return (hash);
}

int	main(int ac, char *av[])
{
	t_list	*a_lst;
	t_list	*b_lst;

	if (ac > 1)
	{
		if (ft_av_checker(av, ac) == 1)
		{
			ft_putstr("Error\n");
			exit(1);
		}
		a_lst = arg_to_lst(ac, av);
		b_lst = NULL;
		ft_start(&a_lst, &b_lst, ft_lstsize(a_lst));
	}
	else
		exit(1);
}
