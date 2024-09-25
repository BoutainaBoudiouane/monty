#include "monty.h"

/**
 * queue - Change the stack mode to queue (FIFO).
 * @__head: A pointer to the stack (unused).
 * @__counter: Line counter (unused).
 */
void queue(stack_t **__head, unsigned int __counter)
{
	info_t *info;

	(void)__head;
	(void)__counter;

	info = get_info();
	info->stack_mode = 1;
}

/**
 * add_queue - Add an element to the queue.
 * @__head: A pointer to the queue.
 * @__nbr: The value to be added.
 */
void add_queue(stack_t **__head, int __nbr)
{
	stack_t *new_node, *curr;

	curr = *__head;
	new_node = malloc(sizeof(stack_t));
	if (!new_node)
		p_error(2);
	new_node->n = __nbr;
	new_node->next = NULL;
	if (curr)
		while (curr->next)
			curr = curr->next;
	if (!curr)
	{
		*__head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		curr->next = new_node;
		new_node->prev = curr;
	}
}
