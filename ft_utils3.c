/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogullar <finarfin40@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 08:22:58 by mogullar          #+#    #+#             */
/*   Updated: 2023/08/30 16:36:50 by mogullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	return (c <= '9' && c >= '0');
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

static void	ft_check(char *str, char **str1)
{
	int	i;

	i = 0;
	if (!ft_isdigit(str[i]) && str[i] != '+' && str[i] != '-')
		ft_free(str1);
	if ((str[i] == '+' || str[i] == '-') && !ft_isdigit(str[i + 1]))
		ft_free(str1);
	i = 1;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			ft_free(str1);
		i++;
	}
}

int	ft_atoi(char *str, char **str1)
{
	long	i;
	long	sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	ft_check(str, str1);
	while (str[i] == 32 || (str[i] <= 13 && str[i] >= 9))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		result = result * 10 + (str[i++] - '0');
		if (result > 2147483648)
			ft_free(str1);
	}
	if ((result * sign) == 2147483648)
		ft_free(str1);
	return ((int)result * sign);
}

t_list	*ft_lstnew(int content)
{
	t_list	*l;

	l = (t_list *)malloc(sizeof(t_list));
	if (l == NULL)
		return (NULL);
	l->content = content;
	l->next = NULL;
	return (l);
}
