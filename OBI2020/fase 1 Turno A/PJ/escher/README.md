# Solução Escher OBI 2020 Turno A

conhecimentos prévios: vetores

para podermos fazer este problema, primeiro façamos o vetor alturas que terá um pouco mais que o maior valor de n possível, para apenas deixar o código mais bonito utilizei o const int maxn = 1e5 + 10;

enfim, neste problema, temos que verificar se a soma de alturas[i] + alturas[n-i+1] é a mesma para todo 1 <= i <= n, pois é isso que define a sequencia ser escher ou não

particularmente, eu defini a variável booleana escher que começa como true (supomos que a sequeência é escher) e marco uma constante pra soma (alturas[1] + alturas[n]), e aí itero no vetor, se eu encontrar uma soma que é diferente de constante, eu breako e printo 'N'

para dar o break, eu apenas faço escher = false e if(!escher){break;}
