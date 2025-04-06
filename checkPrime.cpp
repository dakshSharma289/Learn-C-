#include<iostream>
using namespace std;

bool checkPrime(int num){
    bool result;
    for(int factor = 2; factor < num; factor++){
        if(num % factor){
            continue;
        }else{
            result = false;
        }
    }
    return result;
}

int main (){
    int number;
    cin >> number;

    if (checkPrime(number)){
        cout<< endl << "Is Prime" << endl;
    }else{
        cout << endl << "Is'nt Prime" << endl;
    }
    
    return 0;
}