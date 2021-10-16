#include <iostream.h> 
#include <conio.h> 
void main(){
 clrscr();
 int n , f1 , f2 , t;
 cout << "Enter Number For Fobonachi :";
 cin>>n;
 f1 = 1; f2 = 2;
 for (int i=1 ; i<=n ; i++){
   t = f1;
   f1 = f2 ;
   f2 = f2 + t ;
   cout <<f2<<"\t";
 } 
 getch();
}
}
