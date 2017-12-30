#include <iostream>
#include <cstdlib>


int n, number;

using namespace std;

int main()
{
    cout << "Give the 'n' for calculate next integer numbers"<< endl;
    cout << "that are divided by 'n' without the remain: ";
    cin >> n;
    cout << endl;

    if (!cin >> n)
        {
            cout << "It is not an integer number!";
            exit(0);
        }

    for (int i=n; i<1000000; i++)
        {
            number=i%n;
            if(number==0) cout<<" "<<i;
        }

    return 0;
}
