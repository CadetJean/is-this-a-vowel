#include <iostream>
#include <string>
using namespace std;

int main() {

  string uI;

  cout<<"enter a letter: ";
  cin>>uI;
  if(uI.length()==1){

  if(uI== "a" || uI== "e" || uI== "i" || uI== "o" || uI== "u"){
    cout<<uI<<" is a vowel";
  }
  else{
    cout<<"this is not a vowel";
  }
}else if(uI.length()>=2)
{
  cout<<"enter only one letter";
}
}