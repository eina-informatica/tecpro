# Autores: Andrei Gabriel Vlasceanu [839756] & Andrés Yubero Segura [842236]

PROG:=main
SRCS:=main.cc

CXX:= g++ -Wall

OBJS:=$(SRCS:.cc=.o)
DEPS:=$(SRCS:.cc=.d)

all: $(PROG)

$(PROG): $(OBJS)
	$(CXX) -o $@ $(OBJS)

.cc.o:
	$(CXX) -c -MMD $<

edit:
	geany -i -s *.h *.cc &

clean:
	@rm -f $(PROG) $(OBJS) $(DEPS) core *.s *.gch

# Dependencias
-include $(DEPS)
