#include<iostream>

using namespace std;

int main()
{
    int horse[5][5];
    int copyHorse[5][5];
    int select[5] = {0};
    int second[5] = {0};
    
    for (int i = 0; i < 5; i++)
    {
        cout << "Scores of the No." << i + 1 << " group horses race: ";
        for (int j = 0; j < 5; j++)
        {
            cin >> horse[i][j];
        }
        for (int k = 0; k < 5; k++)
        {
            copyHorse[i][k] = horse[i][k];
        }
        for (int l = 1; l < 5; l++)
        {
            int temp = copyHorse[i][l];
            int ptr = l - 1;
            while (temp < copyHorse[i][ptr] && ptr >= 0)
            {
                copyHorse[i][ptr + 1] = copyHorse[i][ptr];
                ptr--;
            }
            copyHorse[i][ptr + 1] = temp;
        }
    }

    for (int i = 0; i <5; i++)
    {
        select[i] = copyHorse[i][4];
    }

    for (int i = 1; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (select[j] > select[j + 1])
            {
                int temp = select[j];
                select[j] = select[j + 1];
                select[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Horses:" << endl;
    for (int i = 0; i < 5; i++)
    {
            cout << select[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (select[4] == horse[i][j])
            {
                cout << "Fastest horse group No. " << i + 1 << " and horse No. " << j + 1 << endl;
                second[0] = horse[i][j - 1];
                second[1] = horse[i][j - 2];
            }
            if (select[3] == horse[i][j])
            {
                second[2] = horse[i][j];
                second[3] = horse[i][j - 1];
            }
            if (select[2] == horse[i][j])
            {
                second[4] = horse[i][j];
            }
        }
    }

    for (int i = 1; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (second[j] > second[j + 1])
            {
                int temp = second[j];
                second[j] = second[j + 1];
                second[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (second[4] == horse[i][j])
            {
                cout << "Second fastest horse group No. " << i + 1 << " and horse No. " << j + 1 << endl;
            }
            if (second[3] == horse[i][j])
            {
                cout << "Third fastest horse group No. " << i + 1 << " and horse No. " << j + 1 << endl;
            }
        }
    }
    return 0;
}