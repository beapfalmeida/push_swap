#include "push_swap.h"

void swap(t_stack **stack, int is_a)
{
	t_stack	*first;

	first = *stack;
	*stack = (*stack)->next;
	first->prev = first->next;
	first->next = first->next->next;
	(*stack)->prev = NULL;
	(*stack)->next = first;
	first->next->prev = first;
	if (is_a == 1)
		printf("sa\n");
	else
		printf("sb\n");
}
void	ss(t_stack **a, t_stack **b)
{
	swap(a, 2);
	swap(b, 2);
	ft_printf("ss\n");
}

void	push(t_stack **src, t_stack **dest, int is_a)
{
	t_stack *start;
	t_stack *node;

	start = *src;
	*src = (*src)->next;
	// se a lista src so tivesse 1 elmento
	if (src && *src)
		(*src)->prev = NULL;
	if (dest && *dest)
	{
		start->next = *dest;
		start->next->prev = start;
		*dest = start;
	}
	else
	{
		start->next = NULL;
		node = start;
		add_back_list(dest, node);
	}
	if (is_a == 1)
		ft_printf("pa\n");
	else
		ft_printf("pb\n");
}

void	rotate(t_stack **a, int is_a)
{
	t_stack	*last;

	last = find_last(*a);
	(*a)->prev = last;
	last->next = *a;
	*a = (*a)->next;
	last->next->next = NULL;
	(*a)->prev = NULL;
	if (is_a == 1)
		ft_printf("ra\n");
	else
		ft_printf("rb\n");
}

void	rr(t_stack	**a,  t_stack **b)
{
	rotate(a, 2);
	rotate(b, 2);
	ft_printf("rr\n");
}