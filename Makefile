objects = test.o stack.o sllist.o sqlist.o
test : $(objects)
	gcc -o test $(objects)

test.o : test.c ./stack/stack.h ./link-list/sllist.h
	gcc -c test.c

stack.o : ./stack/stack.c ./stack/stack.h ./stack/stack_elem_type.h ./stack/stack_storage.h
	gcc -c ./stack/stack.c

sllist.o : ./link-list/sllist.c ./link-list/sllist.h ./link-list/sllist_elem_type.h
	gcc -c ./link-list/sllist.c

sqlist.o : ./sequence-list/sqlist.c ./sequence-list/sqlist.h ./sequence-list/sqlist_elem_type.h
	gcc -c ./sequence-list/sqlist.c

clean-all : 
	rm test $(objects)

clean-o :
	rm $(objects)