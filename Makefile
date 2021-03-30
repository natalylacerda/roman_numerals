IDIR =./
CC=g++
CFLAGS=-I$(IDIR)

ODIR=obj

_DEPS = romano.hpp
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = romano.o testa_romano.o  
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -g -o $@ $< $(CFLAGS)

romano: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

verify: romano
		@echo "----------- VALGRIND -----------"
		valgrind --leak-check=full ./romano
		@echo "----------- CPPCHECK -----------"
		cppcheck --enable=warning .

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~