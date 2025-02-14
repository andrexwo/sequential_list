#!/bin/bash

# Compila e executa os testes automaticamente

# Teste 1: Inserção simples
echo "Teste 1: Inserção de elementos"
./lista_seq << EOF
1 10
1 20
1 30
3
EOF

echo "------------------------------"

# Teste 2: Remoção de elemento
echo "Teste 2: Remoção de um elemento"
./lista_seq << EOF
1 10
1 20
1 30
2 1
3
EOF

echo "------------------------------"

# Teste 3: Modificação de elemento
echo "Teste 3: Modificação de um elemento"
./lista_seq << EOF
1 10
1 20
1 30
4 25 2
3
EOF
