/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogullar <finarfin40@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 08:23:13 by mogullar          #+#    #+#             */
/*   Updated: 2023/08/30 08:44:53 by mogullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list **lst, t_list *buff)
{
	buff = (*lst);
	(*lst) = (*lst)->next;
	buff->next = (*lst)->next;
	(*lst)->next = buff;
}

void	ft_sa(t_list **lst)
{
	t_list	*buff;

	if ((*lst) == NULL)
		return ;
	ft_swap(lst, buff);
	ft_putstr("sa\n");
}

void	ft_sb(t_list **lst)
{
	t_list	*buff;

	if ((*lst) == NULL)
		return ;
	ft_swap(lst, buff);
	ft_putstr("sb\n");
}

void	ft_ss(t_list **lst, t_list **lst2)
{
	t_list	*buff;

	if ((*lst) == NULL)
		return ;
	ft_swap(lst, buff);
	ft_swap(lst2, buff);
	ft_putstr("ss\n");
}
