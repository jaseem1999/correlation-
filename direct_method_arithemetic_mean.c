
//arithemetic mean method r = Σ(𝑥−𝑥)(𝑦−𝑦)√Σ(𝑥−𝑥)2 Σ(𝑦−𝑦)2
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void main()
{
    int i, n, x, y, sumx = 0, sumy = 0, sumx2 = 0, sumy2 = 0, sumxy = 0;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &x, &y);
        sumx = sumx + x;
        sumy = sumy + y;
        sumx2 = sumx2 + x * x;
        sumy2 = sumy2 + y * y;
        sumxy = sumxy + x * y;
    }
    float r = (n * sumxy - sumx * sumy) / (sqrt(n * sumx2 - sumx * sumx) * sqrt(n * sumy2 - sumy * sumy));
    printf("The value of r is %f\n", r);
}
