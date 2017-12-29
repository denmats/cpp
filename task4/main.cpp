#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int x, n;
float sum=0;

int main()
{
    cout << "Enter a number (only more 0): ";
    cin >> x;
    cout << "Enter degree (only more 0): ";
    cin >> n;

    if (x == 0) {cout << "Do not divide by zero!"; exit(0);}

    else
        {
            for(int i=n; i>0; i--)
            sum=sum+(1/pow(x,i));
        }
        cout << "Total sum of "<<n<<" element equal is: "<<sum<<endl;
    return 0;
}
