# Solução Álbum da Copa OBI 2018

conhecimentos prévios: conhecimento de set da STL (standard template library), mas acho que talvez de pra fazer sem

a forma com que resolvi esse exercício foi a seguinte, façamos um set de inteiros chamado album, e para cada número de figurinha que iteramos, adicionemos elas no set, como a estrutura do set não suporta elementos repetidos, teremos apenas figurinhas distintas no set,
então agora, basta subtrairmos do número total de figurinhas distintas existentes (n), o número total de figurinhas distintas que compramos, que é justamente o tamanho do álbum , portanto, basta printarmos n - album.size()
