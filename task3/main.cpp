#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

float input, sum=0, maxNum=0, minNum=0;
char choice;
int i=0;

int main()
{
    while(true)
        {
            cout << "Please enter a number: ";
            if(!(cin >> input))
                {
                cerr<< "it is not a number!";
                exit(0);
                }

                i++;
                sum=sum+input;
                if (input>maxNum)     maxNum=input;
                else maxNum=maxNum;

                if( input<minNum)     minNum=input;
                else minNum=minNum;

            cout << "Is it the end of the enter? (Y/N) ";
            choice=getch();

            switch(choice)
            {
                case ('y'):
                    cout<<endl;
                    //cout<<endl<<i; //i am using it for testing
                    //cout<<endl<< "the sum: "<< sum<<endl; //i am using it for testing
                    cout<< "the max number: "<< maxNum<<endl;
                    cout<< "the min number: "<< minNum<<endl;
                    cout<< "the average number: "<< sum/i<<endl;
                    exit(0);
                    break;
                case 'n':
                    cout <<endl<<"Ok, ";
                    break;
                default: cout <<endl<<"Do the right choice! Yes (y) or no (n)"<<endl;
            }
        }
  return 0;
}
