/// Karl person assumed mean method r=NΣdxdy−(Σdx)(Σdy)√NΣdx2−(Σdx)2 ×√NΣdy2−(Σdy)2
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    int n, i, j, x, y, sumx, sumy, sumx2, sumy2, sumxy;
    float r;
    printf("Enter the number of data points: ");
    scanf("%d", &n);
    int xy[n][2];
    for(i=0; i<n; i++){
        printf("Enter x and y: ");
        scanf("%d %d", &x, &y);
        xy[i][0] = x;
        xy[i][1] = y;
    }
    sumx = 0;
    sumy = 0;
    sumx2 = 0;
    sumy2 = 0;
    sumxy = 0;
    for(i=0; i<n; i++){
        sumx += xy[i][0];
        sumy += xy[i][1];
        sumx2 += xy[i][0]*xy[i][0];
        sumy2 += xy[i][1]*xy[i][1];
        sumxy += xy[i][0]*xy[i][1];
    }
    r = (n*sumxy-sumx*sumy)/(sqrt(n*sumx2-sumx*sumx)*sqrt(n*sumy2-sumy*sumy));
    printf("r = %f", r);
}