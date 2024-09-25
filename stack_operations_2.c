#include "monty.h"

/**
 * pop - Remove the top element from the stack.
 * @__head: A pointer to the stack.
 * @__counter: Line counter.
 */
void pop(stack_t **__head, unsigned int __counter)
{
	stack_t *h;

	if (!*__head)
		p_error(3, ERR_POP, __counter, __head);
	h = *__head;
	*__head = h->next;
	free(h);
}

/**
 * swap - Swap the top two elements of the stack.
 * @__head: A pointer to the stack.
 * @__counter: Line counter.
 */
void swap(stack_t **__head, unsigned int __counter)
{
	stack_t *h;
	int length = 0, tmp;

	h = *__head;
	while (h)
		h = h->next, ++length;
	if (length < 2)
		p_error(3, ERR_SWAP, __counter, __head);
	h = *__head;
	tmp = h->n;
	h->n = h->next->n;
	h->next->n = tmp;
}

/**
 * nop - nothing.
 * @__head: A pointer to the stack.
 * @__counter: Line counter.
 */
void nop(stack_t **__head, unsigned int __counter)
{
	(void)__counter;
	(void)__head;
}
