#include<iostream>
//#include<string.h>
using namespace std;

// int maximo(int x, int y){
//     return (x >= y) ? x : y;
// }
// char maximo(char a, char b){
//     return (a >= b) ? a : b;
// }
// double maximo (double x, double y){
//     return (x >= y) ? x : y;
// }

template<class T>

T maximo (T a, T b){
    return (a >= b) ? a : b;
}

//sin usar esto no me tiro problemas
// char* maximo(char* a, char* b){
//     if (strcmp(a, b) > 0)
//         return a;
//     else
//         return b;
// }
int main(){

    cout << "con int ( 5 - 10):" << maximo (5, 10) << endl;
    cout << "con string: " << maximo ("hola", "chauchau") << endl;

    return 0;
}