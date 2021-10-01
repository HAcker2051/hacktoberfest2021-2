#include <iostream>
using namespace std;

int lastIndex(int input[], int size, int x)
{
    if (size == 0)
    {
        return -1;
    }
    if (input[0] == x)
    {
        return 0;
    }
    int small_number = lastIndex(input + 1, size - 1, x);
    if (small_number == -1)
    {
        return -1;
    }
    else
    {
        return small_number + 1;
    }
}

int main()
{
    int size, x;
    cin >> size;
    int input[10];
    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }
    cin >> x;
    cout << lastIndex(input, size, x);
    return 0;
}
