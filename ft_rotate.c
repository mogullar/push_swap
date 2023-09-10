/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogullar <finarfin40@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 08:23:25 by mogullar          #+#    #+#             */
/*   Updated: 2023/08/30 08:23:27 by mogullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_list **lst)
{
	t_list	*buff1;
	t_list	*buff;

	buff1 = (*lst);
	ft_lstadd_back(lst, ft_lstnew((*lst)->content));
	buff = (*lst);
	while (buff->next)
		buff = buff->next;
	buff->index = (*lst)->index;
	(*lst) = buff1;
	(*lst) = (*lst)->next;
	free(buff1);
}

void	ft_ra(t_list **lst)
{
	if ((*lst) == NULL)
		return ;
	ft_rotate(lst);
	ft_putstr("ra\n");
}

void	ft_rb(t_list **lst)
{
	if ((*lst) == NULL)
		return ;
	ft_rotate(lst);
	ft_putstr("rb\n");
}

void	ft_rr(t_list **lst1, t_list **lst2)
{
	ft_ra(lst1);
	ft_rb(lst2);
	ft_putstr("rr\n");
}
