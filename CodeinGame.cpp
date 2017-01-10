#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 Input :

 
 **/
int main()
{
    int L;
    cin >> L;
    cin.ignore();
    int H;
    cin >> H;
    cin.ignore();

    string T;
    
    getline(cin,T);

    string ROW[30];

    for (int i = 0; i < H; i++)
    {
        getline(cin, ROW[i]);
        cerr << ROW[i] << endl;
    }

    for (int i = 0; i < H; i++)
    {

        for (int k = 0; k < T.length(); k++)
        {

            int j;

            if (T[k] >= 65 && T[k] <= 90)
            {

                j = T[k] - 64;

                j *= L;
            }

            else if (T[k] >= 97 && T[k] <= 122)
            {

                j = T[k] - 96;

                j *= L;
            }

            else

                j = 27 * L;

            for (int z = j - L; z < j; z++)
            {

                cout << ROW[i][z];
            }
        }

        cout << endl;
    }
}