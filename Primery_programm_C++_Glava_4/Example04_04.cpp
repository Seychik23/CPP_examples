#include <iostream>
using namespace std;
//�������� ������� InvFunc():
void InvFunc(double z);
//������� InvFunc() ������������ � ���������:
int main(){
double s;
cout<<" Enter number: ";
cin>>s;
InvFunc(s);
return 0;
}
//���������� ������� InvFunc():
void InvFunc(double z){
if(z==0){
   cout<<"Division by zero!"<<endl;
   return;}
double x;
x=1/z;
cout<<"1/z ="<<x<<endl;
}