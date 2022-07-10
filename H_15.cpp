
#include <iostream>

using namespace std;

int main()
{
    int choise = 0;
    int num_0 = 0;
    int num_1 = 0;
    cout << "choose task:\n1 - triangle\n2 - is palindrom?\n3 - rectangle in 3d\n4 - simple numbers\n5 - Armstrong numbers\n0 - exit\n";
    cin >> choise;
    if (choise == 1)
    {
        cout << "Enter height of triangle\n";
        cin >> num_0;
        for (int h = 0; h < num_0; h++)
        {
            for (int w = 0; w < num_0 * 2; w++)
            {
                if (w == num_0 - h || w == num_0 + h || h == num_0 - 1 && w >= num_0 - h && w <= num_0 + h)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << "\n";
        }
        cout << "\n\n";
        for (int h = 0; h < num_0; h++)
        {
            for (int w = 0; w < num_0 * 2; w++)
            {
                if (w >= num_0 - h && w <= num_0 + h)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << "\n";
        }
    }
    else if (choise == 2)
    {
        cout << "Enter number:\n";
        cin >> num_0;
        int count = 0;
        int num_2 = 0;
        num_1 = 1;
        for (count; num_0 / num_1 != 0; count++)
        {
            num_1 *= 10;
        }
        num_1 = 1;
        int mull = pow(10, count);
        for (int i = 0; num_0 != num_2 && i <= count; i++, num_1 *= 10)
        {
            num_2 += num_0 / num_1 % 10 * (mull / num_1 / 10);
        }
        if (num_0 == num_2)
        {
            cout << "Is palindrom\n";
        }
        else
        {
            cout << "is not palendrom\n";
        }
    }
    else if (choise == 3)
    {
        int num_2;
        cout << "Enter height/width/lenght\n";
        cin >> num_0 >> num_1 >> num_2;
        for (int h = 0; h < num_0 + num_2 - 1; h++)
        {
            for (int w = 0; w < num_1 + num_2 - 1; w++)
            {
                if (w <= num_1 + num_2 - 1 && h == 0 && w >= num_2 || w == num_2 - 1 - h || h - num_2 == 0 && w >= 0 && w <= num_1 - 2 ||
                    h - num_2 <= 0 && w == num_1 + num_2 - 1 - h || h - num_2 > 0 && w == 0 || h - num_2 > 0 && w == num_1 - 1 ||
                    h < num_0 && w == num_1 + num_2 - 2 || h >= num_0 && w == num_1 + num_2 - h % (num_0 + num_2 - 4) - 3
                    || h == num_0 + num_2 - 2 && w >= 0 && w <= num_1 - 1)
                {
                    cout << "**";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << '\n';
        }
    }
    else if (choise == 4)
    {
        bool prime = true;
        for (int i = 2; i < 10000000; i++)
        {
            prime = true;
            for (int mull = 2; mull <= 19 && i != mull; mull++)
            {
                if (i % mull == 0)
                {
                    prime = false;
                }
            }
            if (prime)
            {
                cout << i << '\n';
            }
        }
    }
    else if (choise == 5)
    {
        const int size = 9;
        for (int i = 0; i < 10000000; i++)
        {
            num_0 = 1;
            int count = 0;
            num_1 = 0;
            int num[size] = { 0 };
            for (count; i / num_0 > 0; count++)
            {
                num[count] = i / num_0 % 10;
                num_0 *= 10;
            }
            for (int p = 0; p <= count; p++)
            {
                num_1 += pow(num[p], count);
            }
            if (i == num_1)
            {
                cout << i << '\n';
            }
        }
    }
    else if (choise == 0)
    {
        exit(1);
    }
    cin >> choise;
    main();
}