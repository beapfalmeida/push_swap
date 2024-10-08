/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <bpaiva-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:33:25 by bpaiva-f          #+#    #+#             */
/*   Updated: 2024/09/11 15:36:00 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "libft/ft_printf/ft_printf.h"
# include <limits.h>

typedef struct stack
{
	int				n;
	int				index;
	struct stack	*next;
	struct stack	*prev;
}	t_stack;

int		handle_args(t_stack **stack, int i, char **list, int is_av);
int		parse_handle_args(t_stack *stack, char **av);
void	put_index(t_stack **stack);
void	insert_index(t_stack **stack, t_stack **new);

//list utils
void	add_back_list(t_stack **lst, t_stack *new);
t_stack	*find_last(t_stack *lst);
t_stack	*new_node(int num);
void	lstclear(t_stack **lst);
void	zero_index(t_stack **stack);

//checker
int		has_duplicates(t_stack *a);
int		is_sorted(t_stack *a);
int		is_num(const char *str);
int		bigger_max_min(long n);

//utils
long	ft_atol(const char *str);
t_stack	*copy_struct(t_stack *stack);
void	free_arr(char **arr);
int		goodbye(t_stack **stack, char **list, int is_av);

//sort
int		count_stack(t_stack *a);
void	sort(t_stack **a);
void	sort_3(t_stack **a);
void	sort_4(t_stack **a, int i);
void	sort_5(t_stack **a);
void	sort_big(t_stack **a);

//operations 1
void	swap(t_stack **stack, int is_a);
void	ss(t_stack **a, t_stack **b);
void	push(t_stack **src, t_stack **dest, int is_a);
void	rotate(t_stack **stack, int is_a);
void	rr(t_stack	**a, t_stack **b);

//operations 2
void	reverse_rotate(t_stack **stack, int is_a);
void	rrr(t_stack **a, t_stack **b);
void	check_and_sort(t_stack **stack);
void	radix(t_stack **a, t_stack *b, int j, int n);

//test
void	print_list(t_stack **begin_list);
void	print_index(t_stack **begin_list);
void	print_bits(unsigned int octet);

#endif