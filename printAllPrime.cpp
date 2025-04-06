#include<iostream>
using namespace std;

bool checkPrime(int num){
    bool result = true;
    for(int factor = 2; factor < num; factor++){
        if(num % factor){
            continue;
        }else{
            result = false;
        }

    }
    return result;
}

void printAllPrime(int range){
    for (int i = 1; i != range; i++){
        if (checkPrime(i)){
            cout << i << endl;
        }
    }
}

int main(){
    int number;
    cout << "enter the number: ";
    cin >> number;

    printAllPrime(number);

    return 0;
}