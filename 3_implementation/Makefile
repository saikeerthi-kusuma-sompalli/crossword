# Name of the project
PROJECT_NAME = crossword

# Output directory
BUILD = build

# All source code files
SRC = main_code.c\
src/output_printing.c

# All test source files
TEST_SRC = src/output_printing.c\
#test/test.c\
#unity/unity.c\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME)

# All include folders with header files
INC	= -Iinc\
#-Iunity\

INC_H = inc
#INC_T = unity
#Library Inlcudes

INCLUDE_LIBS = -lcunit

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME)

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

ifdef OS
   RM = rm -rf
   FixPath = $1
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).$(EXEC)

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).$(EXEC)

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)

coverage1: $(BUILD)
	gcc -fprofile-arcs -ftest-coverage  src/function1.c  -o build/a.$(EXEC)
	build/a.$(EXEC)
#	gcov -a test.gcno
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov

# Remove all the built files, invoke by `make clean`
clean:
	$(RM) $(BUILD) $(DOCUMENTATION_OUTPUT)
	

# Create new build folder if not present
$(BUILD):
	mkdir build

clean1: 
	rm -rf *.$(EXEC)
	rm -rf *.gcda
	rm -rf *.gcno
	rm -rf *.c.gcov
	rm -rf *.DAT
#	rm -rf test.c