#include <stdio.h>

int main(void) {
    int n, N, dec  = 0, cent = 0, mil = 0;
    printf("inserisci il numero intero:");
    scanf("%d",&n);
    N = n;
    while (n >= 10) {
        if (n >= 1000) {
            mil++;
            n = n - 1000;
        } else if (n >= 100) {
            cent++;
            n = n - 100;
        } else if (n >= 10) {
            dec++;
            n = n - 10;
        }
    } printf("il numero %d ha:\n %d: migliaia \n %d: centinaia \n %d: decine",N,mil,cent,dec);

}
