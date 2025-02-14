# Nome do executável
EXEC = lista_seq

# Compilador e flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

# Arquivos fonte
SRCS = lista_seq.cpp
OBJS = $(SRCS:.cpp=.o)

# Regra padrão: compilar o programa
all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJS)

# Regra para rodar os testes
test: $(EXEC)
	chmod +x testes.sh
	./testes.sh

# Limpa arquivos gerados
clean:
	rm -f $(EXEC) $(OBJS)
