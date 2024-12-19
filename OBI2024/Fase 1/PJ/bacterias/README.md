# Solução Bacterias OBI 2024

conhecimentos prévios: loop

este é um problema clássico de loop while, e bem parecido com o epidemia da obi 2023 fase 1 PJ, só que é mais fácil

sabendo a quantidade de bactérias do dia anterior e o fator p, a quantidade de bacterias do próximo dia pode ser calculada, então basta criarmos um contador de dias (dias), e declara uma variavel bacterias que é inicializada como p, então enquanto bacterias <= n, bacterias*=p e dias++
