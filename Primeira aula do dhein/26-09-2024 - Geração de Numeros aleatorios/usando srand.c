#include <stdlib.h>
#include <stdio.h>

int main(){
int r;
unsigned s;

printf("Insira uma valor para a seed: ");
scanf("%d", &s);
srand(s);
for(int i = 0; i <20; i++){
    r=rand();
    printf("%d\n", r);
}


}
