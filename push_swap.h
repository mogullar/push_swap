/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogullar <finarfin40@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 08:22:51 by mogullar          #+#    #+#             */
/*   Updated: 2023/08/30 16:27:41 by mogullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(int content);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_putstr(char *str);
char				**ft_split(char const *s, char c);
char				*ft_strjoin(char *s1, char *s2);
size_t				ft_strlen(const char *s);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strdup(const char *s1);
int					ft_atoi(char *str, char **str1);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_sa(t_list **lst);
void				ft_sb(t_list **lst);
void				ft_ss(t_list **lst, t_list **lst2);
void				ft_push(t_list **lst, t_list **lst2, t_list **buff1);
void				ft_pb(t_list **a_lst, t_list **b_lst);
void				ft_pa(t_list **a_lst, t_list **b_lst);
void				ft_ra(t_list **lst);
void				ft_rb(t_list **lst);
void				ft_rr(t_list **lst1, t_list **lst2);
void				ft_rra(t_list **lst);
void				ft_rrb(t_list **lst);
void				ft_free(char **str);
int					ft_dup_control(t_list *str);
int					ft_only_num(char *str);
void				ft_sort_2(t_list **a_lst);
int					ft_sort_check(t_list *a_lst, t_list *b_lst);
void				ft_sort_3(t_list **a_lst, t_list **b_lst);
void				ft_sort_5(t_list **a_list, t_list **b_list);
int					ft_find_min(int array[], int size);
int					ft_sort_check(t_list *a_lst, t_list *b_lst);
int					ft_free_lst(t_list *lst);
void				ft_free_double(char **str);
int					ft_index_maker(t_list *lst);
void				ft_radix(t_list **stack_a, t_list **stack_b);
void				ft_start(t_list **a_list, t_list **b_list, int ac);

#endif