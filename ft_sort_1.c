/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogullar <finarfin40@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 08:23:21 by mogullar          #+#    #+#             */
/*   Updated: 2023/08/30 08:44:18 by mogullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort_check(t_list *a_lst, t_list *b_lst)
{
	while (a_lst->next && !(b_lst))
	{
		if (a_lst->next->content < a_lst->content)
		{
			return (1);
		}
		a_lst = a_lst->next;
	}
	return (0);
}
