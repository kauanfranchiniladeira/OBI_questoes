# Solução Drone de entrega, OBI 2017 1° Fase PJ

como ele consegue virar ou rotacionar a caixa, acaba que temos que verificar se, dentre as 6 faces da caixa, a um par de faces com dimensões que passe, para isso, criemos a função resposta que retorna um inteiro, também poderíamos faze-lá retornar um bool, mas prefiro traballhar com 0 e 1

daí, ela recebe dois parâmetros, x e y, e retorna x <= h && y <= l, se ela retornar 1 (true), é porque é possível, se ela retornar 0 (false), é porque não é possível

daí basta verificarmos se dentre os 6 pares possíveis (resposta(x,y) != resposta(y,x)), existem algum que se encaixe, se existir, printamos 'S', se não existir, printamos 'N'
