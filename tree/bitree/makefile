objects = main.o bitree_init.o bitree_insert_left.o bitree_insert_right.o bitree_remove_left.o bitree_remove_right.o bitree_destory.o bitree_merge.o bitree_traverse_preorder.o bitree_traverse_inorder.o bitree_traverse_postorder.o

build: $(objects)
	gcc -o test.out $(objects)
	make clean
$(objects): bitree.h

run:
	make
	make test

test:
	./test.out

.PHONY : clean
clean :
	-rm $(objects)
