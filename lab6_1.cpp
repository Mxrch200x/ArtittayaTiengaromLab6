#include<iostream>
using namespace std;

int main(){
    int N=999, Even = 0, Odd = 0;
    int integer[N];

    for(int i = 0; i<N; i++){
        cout << "Enter an integer: ";
        cin >> integer[i];
        if(integer[i]==0){
            cout << "#Even numbers = " << Even << endl; 
            cout << "#Odd numbers = " << Odd << endl;
            break;
        }else if(integer[i]%2 == 0){
            Even += 1;
        }else{
            Odd += 1;
        }

        }
        
    return 0;
}
