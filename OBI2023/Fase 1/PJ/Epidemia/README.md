# Solução Epidemia OBI 2023

conhecimentos prévios: loops

este é um problema clássico de loop while, basta que simulemos uma PG (progressão geométrica) de primeiro termo n e razao r, enquanto o número de infectados for menor que o número de pessoas alvo, somamos com o próximmo termo da PG e aumentamos o número de dias

assim que infectados >= p, paramos, e printamos o número de dias que demorou para isso ocorrer, para podermos fazer a simulação da PG, precisamos usar a função pow da biblioteca cmath, que calcula exponenciação, a base será a razão que é o fator de reprodução e o expoente o número do dia atual indexado apartir de 1, ou seja, sera dias + 1
