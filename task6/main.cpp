#include <iostream>
#include <cstdlib>

int evenNumber;
int i=1;


using namespace std;

int main()
{
    cout << "The program shows next 100 even numbers" << endl;
    cout << "After that the program shows next 100 even numbers: ";
    cout << endl;

    cin >> evenNumber;
    cout<< endl;

    if(!cin >> evenNumber)
        {
        cout << "It is not a number!"<<endl;
        exit(0);
        }

    if(evenNumber%2!=0)
        {
        cout << "You did not give an even number!";
        exit(0);
        }

       while( i <= 101)
        {
           evenNumber+=2;
           cout << "these are next even number after "<<evenNumber<<" even number; "<< endl;
           i++;

        }
        cout << "The counter next 100 even numbers 'i' ="<<i<<endl;

    return 0;
}
