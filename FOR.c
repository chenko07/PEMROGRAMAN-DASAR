#include <stdio.h>

int main(){

    for(int i=5; i<=100; i++)
    printf("Perluangan ke- %i \n", i);

    return 0;
}

int main(){

    int n = 1000;
    printf("Menampilkan bilangan genap yang nilainya kurang atau sama dengan n\n");

    if(n % 2)
        n--;
    for ( ; n >= 0; n -= 2 )
    printf("%d ",n);

    return 0;

}

int main(){

    for(int counter = 0; 
        counter < 100; 
        counter+=2)
    printf("Perluangan ke- %i \n", counter);

    return 0;

}

int main()
{
    int i, j;

    for(i=1; i<=10; i++)
    {
        for(j=1; j<=10; j++)
        {
            printf("(%d,%d)", i, j);
        }

        printf("\n");
    }
}
