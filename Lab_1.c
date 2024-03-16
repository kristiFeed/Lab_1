#include <stdio.h>

int main(){

    int a;

    printf("Ведіть значення a = ");
    scanf("%d", &a);

    int a1 = a / 1000;
    int a2 = (a / 100) % 10;
    int a3 = (a / 10) % 10;
    int a4 = a % 10;
    int s = a1 + a2 + a3 + a4;
    int d = a1 * a2 * a3 * a4;

    printf("Сума = %d", s);
    printf("\nДобуток = %d", d);
    
    return 0;
}
