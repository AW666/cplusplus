#include <iostream>

using namespace std;

int main(){
    int a = 0;
    int b = 0;
    char vote[] = "AAAAAAABBABA";
    int num = sizeof(vote)/sizeof(char);

    // count a;
    for(int i=0; i < num; i ++){
        if(vote[i]=='A'){
            a++;
        }
        else if(vote[i]=='B'){
            b++;
        }
    }


    b = num - a;
    if(a > b){
        cout << "A" << endl;
    }

    else{
        if(a == b){
            cout << "tie!" << endl;
        }
        else{
            cout << "b wins!" << endl;
        }

    }
    }



