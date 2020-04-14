#include <stdio.h>


/*
 *   x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8 + x9 + x10 = 52
 *   x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8 + x9 + x10 + x11 = 57
 *   x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8 + x9 + x10 + x11 + x12 = 62
 *   x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8 + x9 + x10 + x11 + x12 + x13 = 67
 *   x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8 + x9 + x10 + x11 + x12 + x13 +x14 = 72
 *
 *   x E {2, 3, 5, 7, 9}
 *   n E { 10, 11, 12 ,13, 14}
 *
 */

int sum(int nbc, int * nbtab){
    int total = 0;
    for(int i=0; i<nbc; i++){
        total = total + nbtab[i];
    }
    return total;
}

int tkt(int n, int valeursc, int * valeurs, int result){

    // On met toutes les variables au minimum
    // On incremente x^(n-1) avec la valeur suivante
    int solutions[n];
    for(int i=0; i<n; i++){
        solutions[i] = valeurs[0];
    }

    if(sum(n, solutions) == result){
        // on a trouve les solutions
        printf("Solution :");
        for(int i=0;i<n;i++){
            printf(" %d", solutions[i]);
        }
        printf("\n");
        return 1;
    }else{
        // ajoute valeurs[n+1] au dernier. si il est au max des valeurs, on fait l'avant dernier etc...

    }



    return 0;
}


int main(int argc, char * argv[]) {
    int valeurs[5];
    valeurs[0] = 2;
    valeurs[1] = 3;
    valeurs[2] = 5;
    valeurs[3] = 7;
    valeurs[4] = 9;

    int n = 10;
    int result = 52;

    int ret;
    ret = tkt(n, 5, valeurs, result);

    printf("%d", ret);

    return 0;
}
