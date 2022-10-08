#include <bits/stdc++.h>
using namespace std;

int main()
{
    int SIZE,counter;
    printf("input array size\n");
    scanf("%d",&SIZE);
    int* Array = new int[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        printf("input number in array\n");
        scanf("%d",&counter);
        Array[i]=counter;
    }

    for (int j = 0; j < SIZE; j++)
    {
        cout<<" values at index " << j <<" is " << Array[j] <<endl;
    }

    delete [] Array;

    return 0;
}

























