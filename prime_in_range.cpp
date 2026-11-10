#include <iostream>
using namespace std;
int main()
{
    int start,endNo ;
    cout<<"\n Enter Starting Number";
    cin>> start;

    cout<<"\n Enter Ending Number";
    cin>> endNo;
    for(int j = start; j <= endNo; j++)
    {

        int  flag = 0;

        if(j < 2)
        {
            flag = 1;
        }
        else
        {
            for(int i = 2; i < j ; i++)
            {
                if( (j  % i )== 0 )
                {
                    flag = 1;
                    break;
                }
            }
        }

        if(flag == 0)
        {
            cout<< "\nPrime No  :" <<  j;
        }
    }
    return 0;
}
