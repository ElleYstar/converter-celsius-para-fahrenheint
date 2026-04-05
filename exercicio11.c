#include <stdio.h>
void converte(float celsius) {
    float resultado;
    resultado = (celsius * 9 /  5) + 32;
    printf("%.1f", resultado);

}

int main() {
    float celsius;
    scanf("%f", &celsius);
    converte(celsius);
    return 0;
    
}