#include <stdio.h>
int div(int n1, int n2){

    if(n1 == 0 || n2 == 0)
        return 0;

    else if (n1 > n2 && n1 % n2 == 0)
            return 1;
    else if(n1 < n2 && n1 % n2 == 0)
            return 1;
}

main(){

int a, b;
printf("Digite dosi valores:");
scanf("%d", &a);
scanf("%d", &b);

if (div(a,b))
    printf("Sim, um dos valores eh divisor do outro");
else
    printf("Nao, nao ha um vlaor que divida o outro");

}
