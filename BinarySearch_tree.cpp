#include <bits/stdc++.h>
using namespace std;


int index;
// nodes have left,right child and data


int SearchTree(int Node[] , int index )
{
    int first = 0;
    int last = ;
    int mid = ;
    for (int i = 0; i < strlen(Node); i++)
    {

        if (index > )
        {
            printf("Element x is present at index %d\n");
        }
        else
        {
            printf("element does not exist \n");
            return 0;
        }
    }
    
}

int POSTORDER()
{
}

int PREORDER()
{
}

int INORDER()
{
}

int main()
{
    int nodes[] = {1, 2, 3, 4, 5, 6, 7};
    int arr[] = {100, 110, 120, 130, 180, 200};
    int root = nodes[0];
    string preorder, postorder, inorder, traversel;
    printf("traversel or search?");
    if (cin >> traversel)
    {
        printf("which traversel you want? PRE-ORDER , POST ORDER ,IN ORDER? ");
        if (cin >> postorder)
        {
            POSTORDER();
        }
        if (cin >> preorder)
        {
            PREORDER();
        }
        if (cin >> inorder)
        {
            INORDER();
        }
    }
    else
    {   
        printf("which index of number you want to find? ");
        cin>>index;
        SearchTree(arr , index);
    }
    
}
