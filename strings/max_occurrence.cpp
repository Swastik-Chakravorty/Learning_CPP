#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str = "dsasdsjsd";
    int freq[26];

    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0; //initializing the array with 0
    }

    for (int i = 0; i < str.size(); i++)
    {
        freq[str[i] - 'a']++;
        //arr[1] = 5; arr[1]++ will increase the value of 5, i.e. 5 will become 6
        // int arr[] = {4, 5, 6};
        // arr[1]++;
        // cout << arr[1] << endl; --> 6
        //So, str[i]/alphabet - 'a' will give the index number and as its initial value is 0, whenever alphabet repeats, in same index number value will be increased by 1 and as it is post increamentor, it will increament the value by 1 even after last counting, so if the letter 'd' is 3 times in the word, it'll show 3 times originally (as after 2, it'll increase in 3)
       
    }

    char ans = 'a';
    int maxCount = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxCount)
        {
            maxCount = freq[i];
            ans = i + 'a'; //as we got 'i' index of freq[i] by 'alphabet' - 'a'
            //so now we'll get the 'alphabet' by index + 'a'
        }
    }

    cout << "Maximum occured alphabet is: " << ans << " and it occured " << maxCount << " times" << endl;
    return 0;
}