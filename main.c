#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Prototipo
void Vertice(float a, float b, float c, float *Xv, float *Yv, float *X1, float *X2);
int main()
{
    float a, b, c, Xv, Yv, X1, X2, i = 0;
    while(i < 100)
    {
        printf("Digite o valor de a: ");
        scanf("%f",&a);
        if(a == 0)
        {
            printf("ERRO");
        }
        else
        {
            printf("Digite o valor de b: ");
            scanf("%f",&b);
            printf("Digite o valor de c: ");
            scanf("%f",&c);

            Vertice(a, b, c, &Xv, &Yv, &X1, &X2);
            printf("O X1 e: %f\n",X1);
            printf("O X2 e: %f\n",X2);
            printf("O X do vertice e: %f\n",Xv);
            printf("O Y do vertice e: %f\n",Yv);
            i++;
        }

    }
    return 0;
}

void Vertice(float a, float b, float c, float *Xv, float *Yv, float *X1, float *X2)
{
    float delta;

    delta = pow(b,2.0) - 4.0 * a * c;
    if(delta < 0)
    {
        *X1 = 0;
        *X2 = 0;
    }
    else
    {
        *X1 = (-b + sqrt(delta)) / (2 * a);

        *X2 = (-b - sqrt(delta)) / (2 * a);

        *Xv = -b / (2 * a);

        *Yv = -delta / 4 * a;
    }

}
