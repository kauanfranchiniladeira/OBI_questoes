# Solução Hotel OBI 2022

conhecimentos prévios: condicionais

observando atentamente o enunciado

se chegamos no n-ésimo dia, vamos pagar 32-n diárias, observando padrões nas diárias, podemos provar por indução que se chegamos no n-ésimo dia (com n <= 15), a diaria custará (d + (n-1)*a)

agora, se n > 15, a diaria não aumenta mais, portanto pagaremos d + 14*a por diaria, que é o máximo possível, em 32-n diarias

portanto, se n <= 15, printamos (32-n)*(d+(n-1)*a), e caso contrario, printamos (32-n)*(d+14*a)
