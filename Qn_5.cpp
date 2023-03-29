#include<iostream>

using namespace std;

int main()
{
    cout << "Maximum limit of Short Integer is: " << __SHRT_MAX__ << endl;
    cout << "Maximum limit of Integer is: " << INT64_MAX << endl;
    cout << "Minimum limit of Integer is: " << INT64_MIN << endl;
    cout << "Maximum limit of Long Integer is: " << __LONG_MAX__ << endl;
    cout << "Maximum limit of Long Long Integer is: " << __LONG_LONG_MAX__ << endl;
    cout << "Maximum limit of Float is: " << __FLT_MAX__ << endl;
    cout << "Minimum limit of Float is: " << __FLT_MIN__ << endl;
    cout << "Maximum limit of Double is: " << __DBL_MAX__ << endl;
    cout << "Minimum limit of Double is: " << __DBL_MIN__ << endl;
    cout << "Maximum limit of Long Double is: " << __LDBL_MAX__ << endl;
    cout << "Minimum limit of Long Double is: " << __LDBL_MIN__ << endl;
    
    return 0;
}