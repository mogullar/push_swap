/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogullar <finarfin40@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 08:22:45 by mogullar          #+#    #+#             */
/*   Updated: 2023/08/30 10:48:10 by mogullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*get_next_min(t_list **lst)
{
	t_list	*temp;
	t_list	*temp1;
	int		flag;

	temp1 = 0;
	flag = 1;
	temp = *lst;
	if (temp)
	{
		while (temp)
		{
			if ((temp->index == -31) && (flag
					|| temp->content < temp1->content))
			{
				temp1 = temp;
				flag = 0;
			}
			temp = temp->next;
		}
	}
	return (temp1);
}

void	ft_index(t_list **list)
{
	t_list	*temp;
	int		index;

	index = 0;
	temp = get_next_min(list);
	while (temp)
	{
		temp->index = index++;
		temp = get_next_min(list);
	}
}

static int	max_bit(t_list **stack)
{
	t_list	*temp;
	int		max_num;
	int		max_bit;

	temp = *stack;
	max_num = temp->index;
	max_bit = 0;
	while (temp)
	{
		if (temp->index > max_num)
			max_num = temp->index;
		temp = temp->next;
	}
	while ((max_num >> max_bit))
		max_bit++;
	return (max_bit);
}

void	ft_radix(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	j;
	int	size;
	int	max_bits;

	i = 0;
	ft_index(stack_a);
	size = ft_lstsize(*stack_a);
	max_bits = max_bit(stack_a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			if ((((*stack_a)->index >> i) & 1) == 1)
				ft_ra(stack_a);
			else
				ft_pb(stack_a, stack_b);
		}
		while (ft_lstsize(*stack_b))
			ft_pa(stack_a, stack_b);
		i++;
	}
}

void	ft_start(t_list **a_lst, t_list **b_lst, int ac)
{
	if (!ft_sort_check(*a_lst, *b_lst))
		exit(0);
	if (ac == 2)
		ft_sort_2(a_lst);
	else if (ac == 3)
		ft_sort_3(a_lst, b_lst);
	else if (ac == 5)
		ft_sort_5(a_lst, b_lst);
	else
		ft_radix(a_lst, b_lst);
}
