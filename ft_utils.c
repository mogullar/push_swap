/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogullar <finarfin40@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 08:23:07 by mogullar          #+#    #+#             */
/*   Updated: 2023/08/30 08:45:35 by mogullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		start;

	i = 0;
	start = 0;
	if (!s1)
	{
		s1 = malloc(1);
		s1[0] = '\0';
	}
	str = (char *)malloc((ft_strlen((char *)s1) + ft_strlen((char *)s2)) \
		* sizeof(char) + 1);
	if (!(str))
		return (0);
	while (s1[i])
		str[start++] = s1[i++];
	i = 0;
	while (s2[i])
		str[start++] = s2[i++];
	free(s1);
	str[start] = '\0';
	return (str);
}

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;
	int		c;

	c = ft_strlen(s1);
	str = malloc((c + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = ' ';
	str[i + 1] = '\0';
	return (str);
}
