#pragma once
#include <stdbool.h>
#include "common.h"

/** Declaration of type definitions */

/// The Type declaration of of an itorator over a linked list
typedef struct ioopm_list_iterator ioopm_list_iterator_t;
/// The Type declaration of an entire linked list
typedef struct list ioopm_list_t;
/// The Type declaration of boolian for lists
typedef union intbool intbool_t;



/// @brief Creates an linked list itorator
/// @param list, the list the itorator will itorate over
ioopm_list_iterator_t *ioopm_list_iterator(ioopm_list_t *list);


/// @brief Checks if there are more elements to iterate over
/// @param iter the iterator
/// @return true if
bool ioopm_iterator_has_next(ioopm_list_iterator_t *iter);


/// @brief Step the iterator forward one ste
/// @param iter the iterator
/// @return the next element
elem_t *ioopm_iterator_next(ioopm_list_iterator_t *iter);


/// @brief Remove the current element from the underlying list
/// @param iter the iterator
/// @return the removed element
elem_t ioopm_iterator_remove(ioopm_list_iterator_t *iter);


/// @brief Insert a new element into the underlying list making the current element it's next
/// @param iter the iterator
/// @param element the element to be inserted
void ioopm_iterator_insert(ioopm_list_iterator_t *iter, elem_t element);


/// @brief Reposition the iterator at the start of the underlying list
/// @param iter the iterator
void ioopm_iterator_reset(ioopm_list_iterator_t *iter);


/// @brief Return the current element from the underlying list
/// @param iter the iterator
/// @return the current element
elem_t ioopm_iterator_current(ioopm_list_iterator_t *iter);


/// @brief Destroy the iterator and return its resources
/// @param iter the iterator
void ioopm_iterator_destroy(ioopm_list_iterator_t *iter);
