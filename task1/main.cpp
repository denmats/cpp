#include <iostream>
#include <windows.h>
using namespace std;

string und("-");
int length;

int main()
{
    cout << "Give the length of the line: ";
    cin >> length;

   for (int i=1; i<=length; i++){
    cout << und ;
    Sleep(300);
    }
    return 0;
}
