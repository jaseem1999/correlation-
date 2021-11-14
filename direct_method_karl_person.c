///karl person direct method r=NΣxy−(Σx)(Σy)√NΣx2−(Σx)2 ×√NΣy2−(Σy)2 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main () {
    int i, j, n, x, y, sumx, sumy, sumxy, sumx2, sumy2;
    float r;
    printf("Enter the number of data points: ");
    scanf("%d", &n);
    sumx = 0;
    sumy = 0;
    sumxy = 0;
    sumx2 = 0;
    sumy2 = 0;
    for (i = 0; i < n; i++) {
        printf("Enter x%d: ", i+1);
        scanf("%d", &x);
        printf("Enter y%d: ", i+1);
        scanf("%d", &y);
        sumx += x;
        sumy += y;
        sumxy += x*y;
        sumx2 += x*x;
        sumy2 += y*y;
    }
    r = (n*sumxy - sumx*sumy)/(sqrt(n*sumx2 - sumx*sumx)*sqrt(n*sumy2 - sumy*sumy));
    printf("r = %f\n", r);

}