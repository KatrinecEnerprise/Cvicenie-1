#include <iostream.h>
#include <conio.h>

<<<<<<< HEAD
void veza(int a,char from,char aux,char to){
=======
void hanoi(int a,char from,char aux,char to){
>>>>>>> b69e77f8a133f4d79454984c21d09d6a65fa9545
    if(a==1){
       cout<<"\t\tPresun disk 1 z "<<from<<" do "<<to<<"\n";
       return;
    }
    else{
<<<<<<< HEAD
       veza(a-1,from,to,aux);
       cout<<"\t\tPresun disk "<<a<<" z "<<from<<" do "<<to<<"\n";
       veza(a-1,aux,from,to);
=======
       hanoi(a-1,from,to,aux);
       cout<<"\t\tPresun disk "<<a<<" z "<<from<<" do "<<to<<"\n";
       hanoi(a-1,aux,from,to);
>>>>>>> b69e77f8a133f4d79454984c21d09d6a65fa9545
    }
}

void main(){
     clrscr();
     int n;
     cout<<"\n\t\t*****Tower of Hanoi*****\n";
     cout<<"\t\tVloz poet diskov : ";
     cin>>n;
     cout<<"\n\n";
     veza(n,'A','B','C');
     getch();
}
