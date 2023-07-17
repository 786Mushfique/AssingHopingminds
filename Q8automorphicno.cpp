 #include<iostream>
 using namespace std;
 int main(){

     int number;
     cout<<"enter the number:";
     cin>>number;

     int square = number * number;
 while(number>0){

     if(number % 10==square % 10){
    
         cout<<number<<"is  automorphic number"<<endl;
     }
     else{
         cout<<number<<"is not automorphic numbr"<<endl;
     }
 }

     return 0;
 }