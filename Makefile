objects = test.o stack.o sllist.o sqlist.o bt.o
test : $(objects)
	gcc -o test $(objects)

test.o : test.c ./stack/stack.h ./link-list/sllist.h
	gcc -c -g test.c

bt.o : ./binary-tree/bt.c ./binary-tree/bt.h ./binary-tree/bt_elem_type.h
	gcc -c -g ./binary-tree/bt.c

sqlist.o : ./sequence-list/sqlist.c ./sequence-list/sqlist.h ./sequence-list/sqlist_elem_type.h
	gcc -c -g ./sequence-list/sqlist.c

stack.o : ./stack/stack.c ./stack/stack.h ./stack/stack_elem_type.h ./stack/stack_storage.h
	gcc -c -g ./stack/stack.c

sllist.o : ./link-list/sllist.c ./link-list/sllist.h ./link-list/sllist_elem_type.h
	gcc -c -g ./link-list/sllist.c

clean-all : 
	rm test $(objects)

clean-o :
	rm $(objects)