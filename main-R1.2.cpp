#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
int n=0;
srand(time(NULL));

int num=1+(rand()%20);

cout<<"I have generated an integer between 1 and 20."<<endl;

while (n<6){
int g=0;

cout<<"Please enter a guess: "<<endl;
cin>>g;

if (g<num){
    cout<<"Too low!"<<endl;
}
if (g>num){
    cout<<"Too high!"<<endl;
}
if (g==num){
    cout<<"You win!"<<endl;
    break;
}
n++;
}
if (n>=6){
    cout<<"You lost! The answer was: "<<num<<endl;
}
    return 0;
}
