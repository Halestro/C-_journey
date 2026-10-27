#include<iostream>
using namespace std;
// 	(32°F − 32) × 5/9 = 0°C

void fuck(){
    int farenheit;
    cout <<"enter the number";
    cin >> farenheit;
    int celcius;
    celcius = (32*farenheit - 32*5)/9 ;
    cout<<celcius;
}

int main(){
    fuck();
    return 0;
}