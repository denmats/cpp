#include <iostream>
#include <cstdlib>

int input, sum1, sum2, inputPrevious;

using namespace std;

int main()
{
    for(;;)
        {
            cout << "Give a number: " << endl;
            cin >> input;

            if(!cin >> input)
                {
                    cout<<"It is not a number!";
                    exit(0);
                }

                if(inputPrevious==input)
                    {
                        cout << "The two numbers that you gave are the same!";
                        break;
                    }

                if(input > 0)
                    {
                      sum1=sum1+input;
                      if(sum1 > 100)
                        {
                            cout << "The sum has became more than 100!";
                            break;
                        }
                    }

                else if (input < 0)
                    {
                        sum2=sum2+input;
                        if(sum2< -10)
                        {
                            cout << "The sum of negative numbers has became more than 10!";
                            break;
                        }
                    }

            inputPrevious=input;
        }

    return 0;
}
