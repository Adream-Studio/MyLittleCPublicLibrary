# My Little C Public Liabraray
A C public library consists of common-used little functions and data-structures.

## New Addition
#### files:
+ **stack**
- stack_elem_type.h
- stack_storage.h
- stack.h
- stack.c
+ **single-link-list**
- sllist_elem_type.h
- sllist.h
- sllist.c
#### usage:
**stack:**
1. include *stack.h*
2. define a stack by `Stack xx`
3. use `stack_init(Stack *stackp)` to init a stack
4. use `stack_push(Stack *stackp, elem_type value)` to push data into the stack
5. use `stack_pop(Stack *stackp)` to pop data out of the stack
6. use `stack_getTop(Stack *stackp)` to get the data in the top of the stack

Check *stack.h*, *stack_storage.h* and *stack.c* for more details

**single-link-list:**
1. include *sllist.h*
2. define a single-link-list by `SLList xx`
3. use `sll_init(SLList *sll_headp)` to init a single-link-list
4. use `sll_insert(SLList *sll, elem_type new_value)` to insert data
5. use `sll_destroy(SLList sll_headp)` to destroy a single-link-list

Check *sllist.h* and *sllist.c* for more details.

## All Stuff
**data-structure:**
- single-link-list
- stack