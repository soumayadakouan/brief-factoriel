#include <stdio.h>
#include <stdlib.h>

void fator(int a){
    int i, B=1;
    for(i=1; i<=a; i++){
        B = B*i;
    }
    printf("factorielle par fonction est : %d\n",B);
}


int main()
{
    int A,i, B=1, U;
  printf("saisir un nombre :\n");
  scanf("%d",&A);
  fator(A);
  U = A;
  for(i=1; i<=U; i++){
        B = B*i;
    }
  printf("factorielle simple est : %d",B);

}
