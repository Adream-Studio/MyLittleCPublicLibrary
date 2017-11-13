# My Little C Public Liabraray
A C public library consists of common-used little functions and data-structures.

## New Addition
**sort algorithm**

- bubble
- insertion
- selection

**binary-tree**

- bt_elem_type.h
- bt.h
- bt.c

*threaded-binary-tree Still Not Complete !*

- tbt_elem_type.h
- tbt.h
- tbt.c

**sequence-list** *Still Not Complete !*

- sqlist_elem_type.h
- sqlist.h
- sqlist.c

 **stack**
- stack_elem_type.h
- stack_storage.h
- stack.h
- stack.c

 **single-link-list**
- sllist_elem_type.h
- sllist.h
- sllist.c

## All Stuff
**data-structure:**
- binary-tree
- sequence-list
- single-link-list
- stack

**algorithm:**
- bubble-sort
- insertion-sort
- selection-sort

## Usage
**binary-tree:**
1. include *bt.h* (for threaded-binary-tree, include *stack.h* as well)
2. define a binary-tree by `BT xx`
3. use `bt_init(BT *rootpp)` to init a binary-tree
4. use `bt_create(BT *rootpp)` to create a binary-tree
5. use <br>
`bt_preOrderTraverse(BT rootp, void (*visit)(BTNode *nodep))`<br>
 `bt_inOrderTraverse(BT rootp, void (*visit)(BTNode *nodep))`<br>
  `bt_postOrderTraverse(BT rootp, void (*visit)(BTNode *nodep))`<br>
  to traverse a binary-tree
6. use `bt_destroy(BT tree)` to destroy a binary-tree

*threaded-tree is all the same as the above, but :*

7. use `tbt_inOrderThreading(TBT rootp, Stack *nodes)` to thread a binary-tree

Check *bt_elem_type.h* , *bt.h* and *bt.c* (*tbt_elem_type.h* , *tbt.h* , *tbt.c*) for more details

**sequence-list:**
1. include *sqlist.h*
2. define a sequence-list by `SqList xx`
3. use `sql_init(SqList *sql, int size)` to init a sequence-list
4. use `sql_insert(SqList *sql, int index, elem_type value)` to insert data
5. use `sql_get(SqList *sql, int index)` to get data
6. use `sql_getLen(SqList *sql)` to get the length of the sequence-list
7. use `sql_grow(SqList *sql, int size)` to make it bigger
8. use `sql_destroy(SqList *sql)` to destroy it

Check *sqlist.h* and *sqlist.c* for more details

*Still Not Complete !*

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