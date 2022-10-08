#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    const int arraySize = 10;
    int array[arraySize];
    int counter;
    
    for (int i = 0; i < arraySize; i++)
    {
        printf("input number in array\n");
        scanf("%d",&counter);
        array[i]=counter;
    }
    for (int j = 0; j < arraySize; j++)
    {
        cout<<" values at index " << j <<" is " << array[j] <<endl;
    }
    return 0;
}



