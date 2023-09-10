/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogullar <finarfin40@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 08:23:29 by mogullar          #+#    #+#             */
/*   Updated: 2023/08/30 08:40:38 by mogullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rev_rotate(t_list **lst)
{
	t_list	*buff;

	buff = (*lst);
	while (buff->next->next)
		buff = buff->next;
	ft_lstadd_front(lst, ft_lstnew(buff->next->content));
	free(buff->next);
	buff->next = NULL;
}

void	ft_rra(t_list **lst)
{
	if ((*lst) == NULL)
		return ;
	ft_rev_rotate(lst);
	ft_putstr("rra\n");
}

void	ft_rrb(t_list **lst)
{
	if ((*lst) == NULL)
		return ;
	ft_rev_rotate(lst);
	ft_putstr("rrb\n");
}
