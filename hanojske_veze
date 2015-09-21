#include <iostream.h>
#include <conio.h>

void tower(int a,char from,char aux,char to){
    if(a==1){
       cout<<"\t\tPresun disk 1 z "<<from<<" do "<<to<<"\n";
       return;
    }
    else{
       tower(a-1,from,to,aux);
       cout<<"\t\tPresun disk "<<a<<" z "<<from<<" do "<<to<<"\n";
       tower(a-1,aux,from,to);
    }
}

void main(){
     clrscr();
     int n;
     cout<<"\n\t\t*****Tower of Hanoi*****\n";
     cout<<"\t\tVloz poet diskov : ";
     cin>>n;
     cout<<"\n\n";
     tower(n,'A','B','C');
     getch();
}
