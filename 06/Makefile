# Very simple makefile which assumes one program per cpp source file.
SOURCES := $(wildcard *.cpp) # get list of cpp files
TARGETS := $(SOURCES:.cpp=)  # strip .cpp extension for list of programs

# CXXFLAGS := -O2 -Wall -Wvla -Wshadow -Wformat=2 -Wunused-parameter -march=native -DNDEBUG
CXXFLAGS := -O2 -Wall -Wvla -Wshadow -Wformat=2 -Wunused-parameter -DNDEBUG
CXX      := g++

.PHONY : all
all : $(TARGETS)

# {{{ for debugging
DBGFLAGS := -g3 -O0 -UNDEBUG
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
