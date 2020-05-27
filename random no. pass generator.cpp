#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{                                                 //random no. password using srand(),rand(),time()
  int n,i;
  srand(time(NULL));
  cout<<"enter no. of digits= ";
  cin>>n;
  cout<<"random no. password= ";
  for(i=0;i<n;i++)
  {
    cout<<rand()%10<<" ";
  }
}
