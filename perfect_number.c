#include <stdio.h>
main ()
{
    int n=-1, soma=0, cont;
    while (n<=1)
    {
        printf("Digite um número para ver se ele é perfeito ou não:");
        scanf("%d",&n);
        system("clear");
    }
    for (cont=1;cont<n;cont++)
    {
        if (n%cont==0) soma=soma+cont;
    }
    if (soma==n) printf("O número %d é perfeito.",n);
        else printf("O número %d não é perfeito.",n);
}
