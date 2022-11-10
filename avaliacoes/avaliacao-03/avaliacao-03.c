// Criar funções usando a Linguagem para executar as seguintes funcionalidades:
//
//a) Dados de entrada (a, b, c inteiros que correspondem na função quadrática F(x) = ax**2 + bx + c).
// Pede-se as raizes da função quando Delta = 0 e Delta > 0. Quando o Delta for < 0 printar a mensagem "Raízes Imaginárias".

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, delta;
    double raiz_delta, x1, x2;
    printf("insira os valores de a, b, e c:\n");
    scanf("%d %d %d", &a, &b, &c);
    delta = b*b - 4*a*c;
    printf("Delta eh igual a: %d.\n", delta);
    if(delta >= 0)
    {
        raiz_delta = sqrt(delta);
        x1 = (-b - raiz_delta)/(2*a);
        x2 = (-b + raiz_delta)/ (2*a);
        printf("x1= %.2lf e x2= %.2lf ", x1, x2);
    }
    else
        printf( "raizes imaginarias.\n");
    return 0;
}
