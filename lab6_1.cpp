#include<iostream>
using namespace std;

int main(){
    int evenNumbers = 0 , oddNumbers = 0 ;
    int i ;
    while(true){
        cout << "Enter an integer: ";
        cin >> i ;
        
        if (i == 0 || i < 0)
        {
            break;
        }
        
        if (i%2 == 0){
            evenNumbers+1 ;
        } 
        else {
            oddNumbers+1 ;
        }
        
    }
    cout << "#Even numbers = " << evenNumbers << endl;
    cout << "#Odd numbers = " << oddNumbers << endl;
    return 0;
}