# My Little C Public Liabraray
A C public library consists of common-used little functions and data-structures.

## New Addition
#### files:
- sllist_elem_type.h
- sllist.h
- sllist.c
#### usage:
1. include *sllist_elem_type.h*, *sllist.h*
2. define a single-link-list by `SLList xx`
3. use `sll_init(SLList *sll_headp)` to init a single-link-list
4. use `sll_insert(SLList *sll, elem_type new_value)` to insert data
5. use `sll_destroy(SLList sll_headp)` to destroy a single-link-list

Check *sllist.h* and *sllist.c* for more details.

## All Stuff
**data-structure:**
- single-link-list