/* URI Online Judge | Gasto de Combustivel - 1017 */ 
#include <stdio.h>

int main(void)
{
    int horas, km; 
    float quantidadeLitros;
    
    scanf("%d", &horas);
    scanf("%d", &km);

    quantidadeLitros = horas*km; 
    
    printf("%.3f\n", quantidadeLitros/12); // 12km/l definido na questao

    return 0;
}
