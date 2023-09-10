/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_n_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogullar <finarfin40@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 08:23:40 by mogullar          #+#    #+#             */
/*   Updated: 2023/08/30 16:37:33 by mogullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(char **str)
{
	ft_putstr("Error\n");
	ft_free_double(str);
	exit(1);
}

int	ft_only_num(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 48 && str[i] <= 57) || str[i] == ' ' || str[i] == '-'))
			return (1);
		i++;
	}
	return (0);
}

int	ft_dup_control(t_list *lst)
{
	t_list	*current;
	t_list	*next_one;

	current = lst;
	while (current != NULL)
	{
		next_one = current->next;
		while (next_one != NULL)
		{
			if (current->content == next_one->content)
				return (1);
			next_one = next_one->next;
		}
		current = current->next;
	}
	return (0);
}
