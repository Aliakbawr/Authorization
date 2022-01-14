//*******************************************************************************
//HEADERS
//*******************************************************************************
#include <iostream>
using namespace std;

struct account
{
    int number;
    int password;
    string data;
};
//*******************************************************************************
//AUTHORAZATION FUNCTION
//*******************************************************************************
int authorize(int a,int b,int c,int d)
{
    int z=0;
    if(a!=b && c!=d)
    {
        system("cls");
        cout<<"\nWrong Username & Password! Try Again..."<<endl;
        return z;
    }
    else if(a==b && c!=d)
    {
        system("cls");
        cout<<"\nWrong Password! Try Again..."<<endl;
        return z;
    }
    else
    {
        system("cls");
        z=1;
        return z;
    }
}
//*******************************************************************************
//MAIN FUNCTION
//*******************************************************************************
int main()
{
    int i,userNum;
    int userPass;
    acnt.number = 1000;
    acnt.password= 1111;
    acnt.data="Jessi,Let's cook!";
    while(i!=1)
    {
        cout<<"\nEnter UserNo."<<endl;
        cin>>userNum;
        cout<<"\nEnter User Password"<<endl;
        cin>>userPass;
        i = authorize(acnt.number,userNum,acnt.password,userPass);
    }
    cout<<"\nSECRET DATA IS :"<<acnt.data;
    return 0;
}
//*******************************************************************************
//END OF PROGRAM
//*******************************************************************************
