# My Little C Public Libraray
A C public library consists of common-used little functions and data-structures.

![](https://img.shields.io/badge/Data%20Structure-6-blue.svg)
![](https://img.shields.io/badge/Algorithm-2-green.svg)
[![](https://img.shields.io/badge/License-GPL%20v3-red.svg)](https://github.com/joenahm/MyLittleCPublicLiabrary/blob/master/LICENSE)
![](https://img.shields.io/badge/C++-No-orange.svg)

## New Addition
**sort algorithm**

- merge

## All Stuff
**data-structure:**
- digraph
- binary-tree
- stack
- queue
- sequence-list
- single-link-list

**algorithm:**
- merge-sort
- quick-sort
- binaryInsertion-sort
- bubble-sort
- insertion-sort
- selection-sort
- kmp

## Usage
**digraph:**
> based on **adjacency list**

1. include *dg.h*
2. define a digraph by `ALGraph xx`
3. use `alg_init(ALGraph *alGraph)` to init a digraph
4. use `alg_create(ALGraph *alGraph)` to create a digraph
5. use `alg_DFSTraverse(ALGraph *alGraph, void (*visit)(ALGraph *alGraph, int index))` to do depth first traversal with the digraph
6. use `alg_BFSTraverse(ALGraph *alGraph, void (*visit)(ALGraph *alGraph, int index))` to do breadth first traversal with the digraph

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

**stack:**
1. include *stack.h*
2. define a stack by `Stack xx`
3. use `stack_init(Stack *stackp)` to init a stack
4. use `stack_push(Stack *stackp, elem_type value)` to push data into the stack
5. use `stack_pop(Stack *stackp)` to pop data out of the stack
6. use `stack_getTop(Stack *stackp)` to get the data in the top of the stack

Check *stack.h*, *stack_storage.h* and *stack.c* for more details

**queue:**
1. include *queue.h*
2. define a queue by `Queue xx` 
3. use `queue_init(Queue *queuep)` to init a queue
4. use `queuep_isEmpty(Queue *queuep)` to judge whether the queue is empty
5. use `queue_in(Queue *queuep, queue_elem_type value)` to add data ino the tail of the queue
6. use `queue_getHead(Queue *queuep)` to get the head element of the queue
7. use `queue_out(Queue *queuep)` to bring the head element of the queue out
8. use `queue_destroy(Queue *queuep)` to destroy the queue 

Check *queue.h* and *queue.c* for more details

**single-link-list:**
1. include *sllist.h*
2. define a single-link-list by `SLList xx`
3. use `sll_init(SLList *sll_headp)` to init a single-link-list
4. use `sll_insert(SLList *sll, elem_type new_value)` to insert data
5. use `sll_destroy(SLList sll_headp)` to destroy a single-link-list

Check *sllist.h* and *sllist.c* for more details.

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
