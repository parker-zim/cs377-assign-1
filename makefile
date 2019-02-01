all: first second third

first: assign-1-a-indexing.c
		gcc assign-1-a-indexing.c -o find-max-array-indexing
second: assign-1-p-arithmetic.c
		gcc assign-1-p-arithmetic.c -o find-max-pointer-arithmetic
third: assign-1-alloc.c
		gcc assign-1-alloc.c -o find-max-mem-allocation