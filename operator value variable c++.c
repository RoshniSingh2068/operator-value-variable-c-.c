#include <iostream>

using namespace std;

int main(){
    int sum1 = 150+50;  // 250(150+50)
    int sum2 = 50 + sum1; // 300(250 +50)
    int sum3 = sum2 + sum2; // 600( 300+ 300)
    cout <<  sum1 << "\n";
     cout <<  sum2 << "\n";
    cout <<  sum3 << "\n";
    return 0;

}
