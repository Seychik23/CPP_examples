#include <iostream>
using namespace std;
int main(){
//������� ������������:
int N;
//��������� ����������:
int n;
//���������� ��� ������ ������������:
double s=1;
//���� ������� ������������:
cout<<"Enter N = ";
cin>>N;
//���������� ������������:
for(n=2;n<=N;n++)
   s*=(1-(double)2/(n*(n+1)));
//���������:
cout<<"Product is "<<s<<endl;
return 0;
}