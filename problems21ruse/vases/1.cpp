#import<iostream>
int main(int n){std::cin>>n;std::cout<<(n-3)*(n>5)<<' '<<(n>5)<<' '<<2*(n>5)+(n%11==3)*(n%7==6)<<std::endl;}