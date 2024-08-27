SOURCES := $(wildcard *.cpp)
TARGETS := $(SOURCES:.cpp=)

CXXFLAGS := -O2 -Wall -Wformat=2 -Wvla -Wshadow -Wunused-parameter
CXX      := g++

.PHONY : all
all : $(TARGETS)

# {{{ for debugging
DBGFLAGS := -g3 -O0 -UNDEBUG
debug : CXXFLAGS += $(DBGFLAGS)
debug : all
.PHONY : debug
# }}}

$(TARGETS) : % : %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

.PHONY : clean
clean :
	rm -f $(TARGETS)

# vim:ft=make:foldmethod=marker:foldmarker={{{,}}}

