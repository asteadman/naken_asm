include ../../../config.mak

INCLUDES=-I../../..
BUILDDIR=../../../build
CFLAGS=-Wall -g -DUNIT_TEST $(INCLUDES)
LD_FLAGS=-L../../../build

default:
	gcc -o unit_test unit_test.c \
          ../../../build/common/eval_expression_ex.o \
          ../../../build/common/macros.o \
          ../../../build/common/memory_pool.o \
          ../../../build/common/print_error.o \
          ../../../build/common/symbols.o \
          ../../../build/common/tokens.o \
          ../../../build/common/var.o \
	  $(CFLAGS)

clean:
	@rm -f unit_test
	@echo "Clean!"

