# Solução Camisetas da Olimpíada OBI 2020 Turno B

conhecimentos prévios: vetores

guardemos todos os tamanhos solicitados em um vetor de inteiros (tamanhos[1010]), declaremos duas variaveis (pequeno = 0, medio = 0) inteiras que vão representar a quantidade de camisas tamanho pequeno e tamnho medio,
e iteremos por todos os elementos deste vetor, quando algum elemento == 1, temos mais uma camisa pequena, portanto pequeno++, analogamente, se != 1, medio++, no final, se p >= pequeno e m >= medio, é possível atender a todos, caso contrário, não é
