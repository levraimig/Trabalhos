#include <stdio.h>
#include <math.h>


int fatorial(int n){
int fat = 1;
if (!n) return 1;

for(; n > 1; n--){
    fat = fat * n;
}
return fat;

}



main(){
    int x;
    printf("\nDigite um valor intepira para o caluclulo do fatorial");
    scanf("%d", &x);


    printf("\nO fatorial de %d eh %d.", x , fatorial(x));


}
