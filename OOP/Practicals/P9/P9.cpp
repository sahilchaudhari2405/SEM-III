#include <iostream>
using namespace std;

int main()
{
    int row = 3, col = 3;
    int mat1[row][col] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int mat2[row][col] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    cout << "The elements of matrix 1 are: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "The elements of matrix 2 are: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }
    int sum[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    cout << "The sum of matrix 1 and 2 is : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}