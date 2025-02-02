#include<iostream>
using namespace std;

int main() {
    // Fibonacci Sequence 小於等於 輸入值且不超過 100 個的費氏數列
    int fs[40] = {1, 1};
    int max;

    cin >> max;
    cout << "1: 1" << endl;
    cout << "2: 1" << endl;

    for (int i = 2; i < 40; i++)
    {
        if (i >= max)
        {
            break;
        }
        fs[i] = fs[i - 1] + fs[i - 2];
        cout << (i + 1) << ": " << fs[i] << endl;
    }
    
    // 印出範圍內的費氏數列值
    int start, end;
    cin >> start >> end;
    cout << "start: ";

    for (int i = (start - 1); i < end; i++)
    {
        cout << fs[i] << " ";
    }

    cout << "end";
    
    return 0;
}