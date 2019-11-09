#include<iostream>
#include<conio.h>
using namespace std;
void sum(int a, int b)
{
    int c;
    c = a + b;
    cout<<"SUM = ";
    cout<<c;
}
int main()
{
    int a, b;
    cout<<"Enter First No: ";
    cin>>a;
    cout<<"Enter Second No: ";
    cin>>b;
    sum(a,b);
    getch();

}
