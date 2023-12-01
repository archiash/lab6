#include<iostream>
using namespace std;

int main(){
    int odd = 0;
    int even = 0;
    int current = -1;
    while(current != 0){
        cout << "Enter an integer: ";
        cin >> current;
        if(current != 0){
        if(current % 2 == 0)  even++;
        else odd++;}
    }
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd;
    return 0;
}