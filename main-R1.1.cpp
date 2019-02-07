#include <iostream>

using namespace std;

int midof3(int n, int m, int o){
int middle=n;
    if ((n<=m)&&(n>=o)){
        middle=n;
    }
    if ((n<=o)&&(n>=m)){
        middle=n;
    }
    if ((m<=n)&&(m>=o)){
        middle=m;
    }
    if ((m<=o)&&(m>=n)){
        middle=m;
    }
    if ((o<=n)&&(o>=m)){
        middle=o;
    }
    if ((o<=m)&&(o>=n)){
        middle=o;
    }
return middle;
}

int main()
{
int n=0;
int m=0;
int o=0;

cout<<"Enter value of integer n: ";
cin>>n;
cout<<"Enter value of integer m: ";
cin>>m;
cout<<"Enter value of integer o: ";
cin>>o;

cout<<"Middle value of 3 integers is: "<<midof3(n,m,o)<<endl;

    return 0;
}
