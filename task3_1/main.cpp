#include <iostream>
#include <cstdlib>

using namespace std;

char choice;
float input, sum=0, numMax=0, numMin=0;
int i=1;

float check_up_number()
{   cout << "Please enter a number: ";
    if(!(cin >> input))
    {
        cout<< "it is not a number!";
        exit(0);
    }
}


int main()
{
        check_up_number();
        numMax=input;
        numMin=input;
        sum=input;

    while(true)
        {
            check_up_number();

            i++;
            sum+=input;

            if(numMax>input)
            {numMax=numMax;}
            else numMax=input;

            if(numMin<input)
            {numMin=numMin;}
            else numMin=input;

        cout<<  "Do you want to finish? Enter 'y' for exit"<<endl;
        cout<< "For continue press any letters"<<endl;
        cin>>choice;

        if((choice=='y')||(choice=='Y'))
            {
                cout<< "the max number is "<<numMax<<endl;
                cout<< "the average number is "<<sum/i<<endl;
                cout<< "the min number is "<<numMin<<endl;
                exit(0);
            }
        }

    return 0;
}
