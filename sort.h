#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


/** PROTOTYPE FUNCTIONS, ITS DECLARATIONS **/

void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);

void print_list(const listint_t *list);
void sorted_insertNode(listint_t **sorted, listint_t *current);
void insertion_sort_list(listint_t **list);
listint_t *create_listint(const int *array, size_t size);

void selection_sort(int *array, size_t size);

void quick_sort(int *array, size_t size);
void quick_sortIndex(int *array, ssize_t first, ssize_t last, size_t size);
int lomuto_partition(int *array, ssize_t first, ssize_t last, size_t size);
void swap(int *first, int *second);

#endif/** SORT_H **/
