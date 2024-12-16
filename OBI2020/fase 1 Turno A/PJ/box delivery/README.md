# Solução Entrega de Caixas OBI 2020 Turno A

conhecimentos prévios: condicionais

pensa comigo, se todas as caixas tem tamanhos iguais, não dá para colocar nenhuma dentro da outra, então printamos 3, sempre que printarmos já damos um return 0 para encerrar o código

agora, caso exista uma relação de desigualdade entre elas, temos que analisar cuidadosamente, caso a caixa A < caixa B, podemos guardar a caixa A dentro da B, e se a caixa B < caixa C, podemos guardar a caixa B na C, e printamos 1

agora, caso a caixa A não possa ser guardado na B (A==B), mas a soma das duas seja menor que a C, então a caixa A e a B poderão ser guardadas, lado a lado, na caixa C, e assim printamos 1

quaisquer outras configurações existentes vão ter como output 2, então poderíamos colocar um else para printar 2, mas no código que fiz não foi necessário
