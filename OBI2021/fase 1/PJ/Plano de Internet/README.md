# Solução Plano de Internet OBI 2021

conhecimentos prévios: vetores

comecemos declarando o vetor mes[110], que representa quanto se usou em cada mes do plano, e declare a variavel inteira podeussar, que sera igual a X, o valor mensal da quota de megabytes

iteremos no vetor mes, a cada mes que passa, subtraimos do podeusar a quantidade de megabytes que usamos durante aquele mes (mes[i]) e adicionamos o valor X da quota mensal

no final de tudo, se adicionarmos a quota mensal após retirar o quanto utilizamos, vamos ter no final a quantidade que podemos utilizar no mes N+1 , e portanto, basta printar
