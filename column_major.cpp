#include <bits/stdc++.h>
using namespace std;

int main()
{
    // To access address of a index: &array[x]->BA + index * sizeof(int)
    int Y, X;
    printf("insert value for X\n");
    scanf("%d", &X);

    printf("insert value for Y\n");
    scanf("%d", &Y);
    
    int array[X*Y];
    printf("insert values for row \n");

    for (int x = 0; x < X; x++)
    {   
        for (int y = 0; y < Y; y++)                                                
        {
            printf("enter no \n");
            // array[x][y] = array + (x*Y+y) * sizeof(int);
            scanf("%d", array[x*Y+y]);
        }
    }

    for (int r = 0; r < X*Y; r++)
    {
        printf("values are  %d\n", array[r]);
    }
    return 0;
}