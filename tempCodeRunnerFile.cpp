#include <bits/stdc++.h>
using namespace std;

int main()
{
    // To access address of a index: &array[x]->BA + index * sizeof(int)
    int Y, X,BA;
    printf("insert value for X\n");
    scanf("%d", &X);

    printf("insert value for Y\n");
    scanf("%d", &Y);

    int array[X][Y];

    int *ptr = &array[0][0];
    
    printf("base address which you need to give is: %d\n" , ptr);
    printf("give the base address you recieved\n");
    scanf("%d",&BA);
    for (int x = 0; x < X; x++)
    {   
        for (int y = 0; y < Y; y++)                                                
        {
            printf("enter no \n");
            scanf("%d", &array[x][y]);
        }
    }

    for (int x = 0; x < X; x++)
    {
        for (int y = 0; y < Y; y++)
        {
            array[x][y] = BA + (x*Y+y) * sizeof(int);
            printf("addresses are  %d\n", array[x][y]);
        }
    }
    return 0;
}