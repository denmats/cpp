#include <iostream>

using namespace std;

int main()
{
    for(int k=1; k<=3; k++)//rownolegle
        {
            for(int i=1; i<=10; i++)//rownolegle
                {
                for(int j=1; j>=10000; j++) //szeregowa petlia
                j++;
                cout<< i<< endl;
                if (i==10)
                    {for(int i=9; i>=1; i--)//rownolegle
                        {
                        for(int j=1; j>=10000; j++) //szeregowa petlia
                            j++;
                            cout<< i<< endl;
                        }
                    }
                }
            cout<<endl;
        }
    return 0;
}
