#include "monty.h"

/**
 * __add - Add the top two elements of the stack.
 * @__head: A pointer to the stack.
 * @__counter: Line counter.
 */
void __add(stack_t **__head, unsigned int __counter)
{
	stack_t *h;
	int length = 0, sum;

	h = *__head;
	while (h)
		h = h->next, ++length;
	if (length < 2)
		p_error(3, ERR_ADD, __counter, __head);
	h = *__head;
	sum = h->n + h->next->n;
	h->next->n = sum;
	*__head = h->next;
	free(h);
}

/**
 * __sub - Subtract the top two elements of the stack.
 * @__head: A pointer to the stack.
 * @__counter: Line counter.
 */
void __sub(stack_t **__head, unsigned int __counter)
{
	stack_t *h;
	int length = 0, sub;

	h = *__head;
	for (; h; ++length)
		h = h->next;
	if (length < 2)
		p_error(3, ERR_SUB, __counter, __head);
	h = *__head;
	sub = h->next->n - h->n;
	h->next->n = sub;
	*__head = h->next;
	free(h);
}

/**
 * __div - Divide the top two elements of the stack.
 * @__head: A pointer to the stack.
 * @__counter: Line counter.
 */
void __div(stack_t **__head, unsigned int __counter)
{
	stack_t *h;
	int length = 0, res;

	h = *__head;
	while (h)
		h = h->next, ++length;
	if (length < 2)
		p_error(3, ERR_DIV, __counter, __head);
	h = *__head;
	if (h->n == 0)
		p_error(3, DIV_ZERO, __counter, __head);
	res = h->next->n / h->n;
	h->next->n = res;
	*__head = h->next;
	free(h);
}

/**
 * __mul - Multiply the top two elements of the stack.
 * @__head: A pointer to the stack.
 * @__counter: Line counter.
 */
void __mul(stack_t **__head, unsigned int __counter)
{
	stack_t *h;
	int length = 0, mul;

	h = *__head;
	for (; h; ++length)
		h = h->next;
	if (length < 2)
		p_error(3, ERR_MUL, __counter, __head);
	h = *__head;
	mul = h->next->n * h->n;
	h->next->n = mul;
	*__head = h->next;
	free(h);
}

/**
 * __mod - Calculate the modulus of the top two elements of the stack.
 * @__head: A pointer to the stack.
 * @__counter: Line counter.
 */
void __mod(stack_t **__head, unsigned int __counter)
{
	stack_t *h;
	int length = 0, res;

	h = *__head;
	while (h)
		h = h->next, ++length;
	if (length < 2)
		p_error(3, ERR_MOD, __counter, __head);
	h = *__head;
	if (h->n == 0)
		p_error(3, DIV_ZERO, __counter, __head);
	res = h->next->n % h->n;
	h->next->n = res;
	*__head = h->next;
	free(h);
}
