#include<iostream>
using namespace std;

int main() {
    // 動態宣告
    int **ptr, row, column;

    cout << "enter row limit" << endl;
    cin >> row;

    cout << "enter column limit" << endl;
    cin >> column;

    ptr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        ptr[i] = new int [column];
    }

    for (int i = 0; i < row; i++)
    {
        cout << i << " => " << endl;
        for (int j = 0; j < column; j++)
        {
            ptr[i][j] = (i * 10) + j;
            cout << j << " => " << ptr[i][j] << "," << endl;
        }
        
    }

    // 釋放記憶體
    for (int i = 0; i < row; i++)
    {
        delete [] ptr[i];
    }

    delete [] ptr;
    
    return 0;
}