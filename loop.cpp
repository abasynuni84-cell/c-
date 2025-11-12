#include <iostream>
using namespace std;

int main(){

    for (int i=0; i<10; i++){
        cout << "Loop number: " << i << endl;
    }
    int count = 5;

    do{
        cout << "While loop: " << count << endl;
        count--;
    } while (count > 0);
    return 0;

}