# include <iostream>
using namespace std;


bool palindrome(char ch[],int size){
    bool result=true;
    int i=0;
    int j=size-1;
   while(i<=j){
        if(ch[i]==ch[j]){
           i++;
           j--;
        }
        else{
            result=false;
            break;
        }
    }
    return result;
}
int main(){
    char ch[5];
    cin>>ch;
   
  cout<<palindrome(ch,5);
    
}
