// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";

#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int x = rand()%9;
    string i;
    if(x == 0) i = "A";
    else if(x == 1) i = "B+";
    else if(x == 2) i = "B";
    else if(x == 3) i = "C+";
    else if(x == 4) i = "C";
    else if(x == 5) i = "D+";
    else if(x == 6) i = "D";
    else if(x == 7) i = "F";
    else if(x == 8) i = "W";
    cout << "You will get " << i << " in this 261102.";
}