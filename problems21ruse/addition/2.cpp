#include <bits/stdc++.h>
using namespace std;
int a,b;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin>>a>>b;
  for (int i = 0; i < 29; i++) {
    if (a&(1<<i)&&b&(1<<i)) {
      a=a&~(1<<i);
      a+=1<<(i+1);
    }
    else if (a&(1<<i)||b&(1<<i)) {
      a=a|(1<<i);
    }
  }
  cout<<a<<endl;
  return 0;
}