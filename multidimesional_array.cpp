#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[2][2];
    for (int i = 0; i < 2; i++)
    {   
        for (int j = 0; j < 2; j++)
        {
            printf("enter no for column then row\n");
            scanf("%d",&array[i][j]);
        }
    }
    //DISPLAY   
    for (int c = 0; c < 2; c++)
    {   
        for (int r = 0; r < 2; r++)
        {
            printf("values are  %d\n" , array[c][r]);
        }
    }
    return 0;
}

