#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n<=1) 
    return n;

 return fibo(n-1) + fibo(n-2);


}
using namespace std;
int main(){
     int n=10;
    printf("%d ",fibo(n));
}