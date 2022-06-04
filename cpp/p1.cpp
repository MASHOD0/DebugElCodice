#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int algo(int m, int n){
    if (m > n)
        small = n;
    else  
        small = m;
    while(!(m%small==0 && n%small==0))
        small--;
    return small;
}
int main(){
    int m, n;
    cout << "Enter the two numbers: ";
    cin >> m >> n;
    cout << "the number of fans of allu arjun and prabhas  " << algo(m, n);
    return 0;
}