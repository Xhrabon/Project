///(C to F, F to C, C to K, K to C, F to K, K to F).

#include<bits/stdc++.h>
using namespace std;

int main()
{
    double celsius, fahrenheit, kelvin;
    int operation;
    cout << fixed << setprecision(2);

    cout<<"Which operation do you want ?"<<endl<<endl;
    cout<<"Enter 1 : Celsius to Fahrenheit "<<endl;
    cout<<"Enter 2 : Fahrenheit to Celsius "<<endl;
    cout<<"Enter 3 : Celsius to Kelvin "<<endl;
    cout<<"Enter 4 : Kelvin to Celsius "<<endl;
    cout<<"Enter 5 : Fahrenheit to Kelvin "<<endl;
    cout<<"Enter 6 : Kelvin to Fahrenheit "<<endl;
    cout<<"Enter 7 : To Exit "<<endl;
    cin>>operation;


    switch(operation)
    {
    case 1:
        {
            cout<<"Enter Celsius Temperature : "<<endl;
            cin>>celsius;
            fahrenheit = (celsius * (9.0/5) + 32);
            cout<<"Fahrenheit Temperature : "<<fahrenheit;
            break;
        }

    case 2:
        {
            cout<<"Enter Fahrenheit Temperature : "<<endl;
            cin>>fahrenheit;
            celsius = (fahrenheit -32)* (5.0/9);
            cout<<"Celsius Temperature : "<<celsius;
            break;
        }
    case 3:
        {
            cout<<"Enter Celsius Temperature : "<<endl;
            cin>>celsius;
            kelvin = celsius + 273.15;
            cout<<"kelvin Temperature : "<<kelvin;
            break;
        }
    case 4:
        {
            cout<<"Enter Kelvin Temperature : "<<endl;
            cin>>kelvin;

            if(kelvin <0)
            {
                cout<<"Invalid Kelvin Temperature. Kelvin can not be negative. "<<endl;
                break;
            }
            celsius = kelvin - 273.15;
            cout<<"Celsius Temperature : "<<celsius;
            break;
        }
    case 5:
        {
            cout<<"Enter Fahrenheit Temperature : "<<endl;
            cin>>fahrenheit;
            kelvin = ((fahrenheit - 32 )*(5.0/9)) + 273.15;
            cout<<"kelvin Temperature : "<<kelvin;
            break;
        }
    case 6:
        {
            cout<<"Enter Kelvin Temperature : "<<endl;
            cin>>kelvin;

            if(kelvin < 0)
            {
                cout<<"Invalid Kelvin Temperature. Kelvin can not be negative."<<endl;
                break;
            }
            fahrenheit = ((kelvin - 273.15) *(9.0/5)) + 32;
            cout<<"Fahrenheit Temperature : "<<fahrenheit;
            break;
        }
    case 7 :
        {
            cout<<"Exiting the program. "<<endl;
            return 0;
        }
    default:
        {
            cout<<"Wrong Input."<<endl;
        }
    }
    cout<<endl;
}
