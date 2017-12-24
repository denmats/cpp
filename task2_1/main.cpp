#include <iostream>

using namespace std;
char input;
int ansi;
int i=0;
int j=0;


int main()
{
    while(input!='k'){
        cin >> input;
        i++;

        ansi=input;
        if((ansi>=65)&&(ansi<=90))
        j++;
    }
    cout << "You have written "<<i<<" symbols before You pressed 'k'"<<endl;
    cout << "You have written "<<j<<" capital letters before You pressed 'k'"<<endl;
    return 0;
}
