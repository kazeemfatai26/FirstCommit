#include <stdio.h>
#include <stdlib.h>
 int arr[10] = { 3,6,1,2,3,8,4,1,7,2};

void bubble(int a[], int N);
int main()
{


int i;
putchar('\n');

for(i=0 ;i<10 ; i++)
{
    printf("%d ", arr[i]);
}
bubble(arr, 10);

putchar('\n');

for(i = 0; i<10; i++)
{
    printf("%d ", arr[i]);
}

    return 0;
}
void bubble(int a[], int N)
{
int i,j,t, flag;
for(i=0; i<N-1 ;i++)
{ flag = 0;
    for(j=0; j< N-1-i; j++)
        {
            if(a[j] > a[j+1]){
        t = a[j];
        a[j] = a[j+1];
        a[j+1] = t;
        flag = 1;
            }
    }

    }}
