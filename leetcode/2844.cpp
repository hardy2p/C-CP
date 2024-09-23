#include <iostream>
using namespace std;

int minimumOperation(string num)
{
    // 25
    int n = num.size();
    int flag = 0;
    int count1 = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (num[i] == '5' && flag == 0)
        {
            flag = 1;
            continue;
        }
        else if (num[i] = '2' && flag == 1)
        {
            flag = 2;
            break;
        }
        else
        {
            count1++;
        }
    }

    if (flag != 2)
    {
        count1 = n;
    }

    // 50
    flag = 0;
    int count2 = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (num[i] == '0' && flag == 0)
        {
            flag = 1;
            continue;
        }
        else if (num[i] == '5' && flag == 1)
        {
            flag = 2;
            break;
        }
        else
        {
            count2++;
        }
    }

    if (flag != 2)
        count2 = n;

    // 00
    flag = 0;
    int count3 = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (num[i] == '0' && flag == 0)
        {
            flag = 1;
            continue;
        }
        else if (num[i] == '0' && flag == 1)
        {
            flag = 2;
            break;
        }
        else
        {
            count3++;
        }
    }
    //we do not equate this time because it will eliminate the staring no to have a zero in it..
    

    // 75
    flag = 0;
    int count4 = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (num[i] == '5' && flag == 0)
        {
            flag = 1;
            continue;
        }
        else if (num[i] == '7' && flag == 1)
        {
            flag = 2;
            break;
        }
        else
        {
            count4++;
        }
    }
    if (flag != 2)
    {
        count4 = n;
    }

    return min(min(count1, count2), min(count3, count4));
}
int main()
{

    return 0;
}