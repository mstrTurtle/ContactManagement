#include <iostream>

using namespace std;

int main(){
    auto hello =
    [](){
        cout << "hello world" << endl;
    };
    hello();
    return 0;
}