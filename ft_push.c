/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogullar <finarfin40@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 08:23:32 by mogullar          #+#    #+#             */
/*   Updated: 2023/08/30 08:40:24 by mogullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_list **lst, t_list **lst2, t_list **buff1)
{
	(*buff1) = (*lst2);
	(*lst2) = (*lst2)->next;
	if (!(*lst))
	{
		(*lst) = (*buff1);
		(*lst)->next = NULL;
	}
	else
	{
		(*buff1)->next = (*lst);
		(*lst) = (*buff1);
	}
}

void	ft_pa(t_list **a_lst, t_list **b_lst)
{
	t_list	*buff1;

	if ((*b_lst) == NULL)
		return ;
	ft_push(a_lst, b_lst, &buff1);
	ft_putstr("pa\n");
}

void	ft_pb(t_list **a_lst, t_list **b_lst)
{
	t_list	*buff1;

	if ((*a_lst) == NULL)
		return ;
	ft_push(b_lst, a_lst, &buff1);
	ft_putstr("pb\n");
}
