#include <iostream>
using namespace std;

void generateBinary(int n)
{
    for (int num = 1; num <= n; num++)
    {
        int temp = num;
        char binary[32];
        int index = 0;
        while (temp > 0)
        {
            binary[index++] = (temp % 2) ? '1' : '0';
            temp /= 2;
        }
        for (int i = index - 1; i >= 0; i--)
        {
            cout << binary[i];
        }
        cout << " ";
    }
    cout << endl;
}

int main()
{
    int n = 6;
    generateBinary(n);
    return 0;
}
