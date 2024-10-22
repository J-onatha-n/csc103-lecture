# Very simple makefile which assumes one program per cpp source file.
SOURCES := $(wildcard *.cpp) # get list of cpp files
TARGETS := $(SOURCES:.cpp=)  # strip .cpp extension for list of programs

# CXXFLAGS := -O2 -Wall -Wvla -Wshadow -Wformat=2 -Wunused-parameter -march=native -DNDEBUG
CXXFLAGS := -O2 -Wall -Wvla -Wshadow -Wformat=2 -Wunused-parameter -DNDEBUG
CXX      := g++

.PHONY : all
all : $(TARGETS)

# {{{ for debugging
# NOTE: the _GLIBCXX_DEBUG macro will add bounds checks to your vectors, halting
# your program if you ever make an out of bounds access.
DBGFLAGS := -g3 -O0 -UNDEBUG -D_GLIBCXX_DEBUG
debug : CXXFLAGS += $(DBGFLAGS)
debug : all
.PHONY : debug
# }}}

# for each source file "foo.cpp", compile into program named "foo"
$(TARGETS) : % : %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

.PHONY : clean
clean :
	rm -f $(TARGETS)

# vim:ft=make:foldmethod=marker:foldmarker={{{,}}}
