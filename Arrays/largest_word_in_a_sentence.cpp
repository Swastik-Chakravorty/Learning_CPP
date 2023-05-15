#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of characters in the sentence: ";
    cin >> n;
    cin.ignore(); //we use this to clear the buffer, as we used cin.getline()

    char arr[n + 1];
    cout << "Enter the sentence: ";
    cin.getline(arr, n); //This is used to take input of sentence with spaces
    cin.ignore(); //we use this to clear the buffer, as we used cin.getline()

    int curLen = 0;
    int maxLen = 0;
    int st = 0; //to get the starting position of the array
    int maxst = 0; //to store the starting point for largest word
    
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (curLen > maxLen) //we ahve to keep it aside so that when there is a space in the sentence, if the current length of the word is bigger than previous stored one, only then update maxLen and maxst, i.e. starting point of the larger word and it'll not count the words after '\0' character
            {
                maxLen = curLen;
                maxst = st;
            }
            curLen = 0;
            st = i + 1; //to point the starting poin as just next to the space
        }

        else
        {
            curLen++;
        }
    }

    cout << "The largest word in the sentence is: ";
    for (int i = 0; i < maxLen; i++)
    {
        cout << arr[i + maxst];
    }

    cout << '\n' << "Length of the wors is: " << maxLen << endl;

    return 0;
}