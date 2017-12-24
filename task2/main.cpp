#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;


vector<char>symbol;
int i = 0;
char input;
int upperCaseLetters;

int main()
{
    while((cin >> input)&&(input!='k'))
    {
       symbol.insert(symbol.end(),input);
        i++;
    }
    system("CLS");
    cout << "You had written this befor You pressed the 'k': "<< endl;

    for( int i=0; i<symbol.size(); i++)
    cout << symbol[i];

    cout << endl;
    cout << endl;
    cout << "You had put "<< symbol.size()<<" symbols before You pressed the 'k'"<<endl;

    vector<int>ansi;
    for(int i=0;i<symbol.size();i++){
        ansi.push_back(symbol[i]);
        //cout << ansi[i];/1
        if ((ansi[i]>=65)&&(ansi[i]<=90)){
            upperCaseLetters++;
        }
    }
    cout<< endl;
    cout<< "The quantity of the capital letters is " << upperCaseLetters<< endl;
return 0;
}

