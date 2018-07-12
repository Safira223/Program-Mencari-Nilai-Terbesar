#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int a,b,max;
	cout<<"Program Nilai Terbesar\n";
	cout<<"\nInput bilangan 1 : ";
	cin>>a;
	cout<<"Input bilangan 2 : ";
	cin>>b;
	
	if(a>b){
	  max = a;
    }else{
      max = b;
	}
	cout<<"\nBilangan Terbesar = "<<max;
	
	getch();
	
}
