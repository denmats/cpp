#include <iostream>

using namespace std;

int n;
char gap=' ';
char star= '*';


int main()
{
    cout << "the Christmas tree";
    cout << "Enter the number of the Christmas tree row: ";
    cin >> n;
    //with the cycle counts the row (given from user)
    for(int i=1; i<=n; i++)
    {
        cout <<endl;
        for(int j=1; j<=n+1-i; j++)  cout << gap; // inside the row cycle to do indentation from 1 to number of rows(n))

        for(int k=1;k<=i;k++)        cout<<star; //to begin drawing  the first row of the Christmas tree


        if(i!=1)                                 //this condition for the rest rows of the Christmas tree
         {
            for(int m=n;m>=n+2-i;m--)
            cout <<star;
         }
    }

        cout <<endl;
        for(int p=1; p<=n; p++)   //drawing the root of the Christmas tree
        {
           cout << gap;
        }
        cout << '#';
        cout << endl;
    return 0;
}
