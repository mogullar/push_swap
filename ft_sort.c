/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogullar <finarfin40@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:00:46 by mogullar          #+#    #+#             */
/*   Updated: 2023/08/30 10:54:47 by mogullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_2(t_list **a_lst)
{
	if ((*a_lst)->next->content < (*a_lst)->content)
		ft_sa(a_lst);
	return ;
}

void	ft_sort_3(t_list **a_lst, t_list **b_lst)
{
	if ((*a_lst)->next->content < (*a_lst)->content)
	{
		while (ft_sort_check(*a_lst, *b_lst))
		{
			if ((*a_lst)->content > (*a_lst)->next->next->content)
				ft_ra(a_lst);
			else if ((*a_lst)->next->next->content > (*a_lst)->next->content)
				ft_sa(a_lst);
			else
				ft_rra(a_lst);
		}
	}
	else if ((*a_lst)->next->next->content > (*a_lst)->content
		&& ft_sort_check(*a_lst, *b_lst))
	{
		ft_sa(a_lst);
		ft_ra(a_lst);
	}
	else if (ft_sort_check(*a_lst, *b_lst))
		ft_rra(a_lst);
}

int	ft_find_min(int array[], int size)
{
	int	min;
	int	i;
	int	j;

	i = 0;
	j = i;
	min = array[i];
	while (i < size)
	{
		if (array[i] < min)
		{
			min = array[i];
			j = i;
		}
		i++;
	}
	return (j);
}

static void	ft_ops_of_sorter(t_list **a_lst, t_list **b_lst, int j)
{
	static int	i;
	int			nothing;

	i = 0;
	if (j == 0)
		(void)nothing;
	else if (j == 2)
	{
		ft_ra(a_lst);
		ft_ra(a_lst);
	}
	else if (j == 1)
		ft_ra(a_lst);
	else if ((j == 4 && i != 0) || (j == 3 && i == 0))
	{
		ft_rra(a_lst);
		ft_rra(a_lst);
	}
	else
		ft_rra(a_lst);
	ft_pb(a_lst, b_lst);
	i++;
}

void	ft_sort_5(t_list **a_lst, t_list **b_lst)
{
	t_list	*buff;
	int		arr[4];
	int		i;
	int		j;

	while (ft_lstsize(*a_lst) > 3)
	{
		i = 0;
		buff = (*a_lst);
		while (buff)
		{
			arr[i] = buff->content;
			buff = buff->next;
			i++;
		}
		j = ft_find_min(arr, i);
		ft_ops_of_sorter(a_lst, b_lst, j);
	}
	buff = NULL;
	ft_sort_3(a_lst, &buff);
	ft_pa(a_lst, b_lst);
	ft_pa(a_lst, b_lst);
}
