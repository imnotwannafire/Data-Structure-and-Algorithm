#include<iostream>
using namespace std;

int main()
{
    // Creating 2 dimensional arrray
    // Method 1: Create array in stack
    int A[3][4]={{1,2,3},{5,4,2},{0,7,9}};
    
    // Method 2: Create array in heap
    int *B[3];
    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];

    // Method 3: Double pointer
    int **C;
    C = new int*[3];
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];

    // accessing array
    for(int i = 0;i<3;i++)
    {
        for(int j = 0; j<4;j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}