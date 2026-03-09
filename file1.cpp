//Library atau repository
#include <iostream>
using namespace std;

//int main nya
int main(){
    int x;

    srand(time(0));
    x = rand() % 10;
//if nya
    if (x==5){
        x = x+1;
        cout << "nilai x sudah dikoreksi menjadi" <<x<<endl;
    }

    cout << "Bilangan yang diberikan = "<<x;
}