#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int insertionsort(int *a,int n)
    {
    int i,val,space;
    int shift=0;
    for(i=1;i<n;i++)
        {
        val=a[i];
        space=i;
        while(space>0 && a[space-1]>val)
            {
            a[space]=a[space-1];
            space=space-1;
            shift++;
        }
        a[space]=val;
    }
    return shift;
}
int main() {

    int n,i;
    int *a;
    scanf("%d",&n);
    a=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",(a+i));
    printf("%d",insertionsort(a,n));
    return 0;
}
