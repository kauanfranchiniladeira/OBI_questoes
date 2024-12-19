# Solução Magic Square OBI 2022

conhecimentos prévios: matrizes

pra falar a verdade, uma das questões mais dificeis da historia da OBI PJ fase 1, está questão não tem uma lógica díficil, só é trabalhosa, como quase toda questão envolvendo maatriz, vale ressaltar que a complexidade da solve é O(n^2), o que passa no tempo

comecemos declarando a matriz[n][n], e depois a preenchendo, vamos indexar a matriz de 0 a n-1, diferente de como esta no enunciado (de 1 a n), após isso, declaremos as variaveis int linha e int coluna,
quando encontrarmos o ponto (i,j) tal que matriz[i][j] == 0, façamos linha = i + 1 e coluna = j + 1, pois este é o ponto que queremos

agora basta calcular o valor do número ilegível, para isso, lembremos que, como é um quadrado mágico, a soma de todas suas linhas, colunas e diagonais é igual, então, declaremos a variavel int somaconstante = 0, se a linha em que o 0 está presente não é a última,
calculemos a soma dela, para poder saber a soma normal de todas as linhas, colunas e diagonais do quadrado mágico, agora se for a última, calculemos a soma da linha anterior a ela

agora que já sabemos a soma normal do quadrado mágico, declaremos a variavel int somaestranha = 0, que representa a soma da linha que contém o 0, iteremos nessa linha e somemos cada elemento a somaestranha,
no final, o número que queremos encontrar = somaconstante - somaestranha
