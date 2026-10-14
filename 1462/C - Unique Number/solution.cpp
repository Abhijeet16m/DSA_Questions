#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin>>t;
    while (t--)
    {
        int x; cin>>x;
        int num = 0;
        int i = 9;
        if(x > 45){ 
            cout<<-1;
        }
        else{
            while (x>i)
            {
                x-=i;
                num = num*10 + i;
                i--;
            }
            while (x != i)
            {
                i--;
            }
            num = num*10 + i;
            int rev = 0;
            while (num != 0)
            {
                rev = rev*10 + (num%10);
                num/=10;
            }    
            cout<<rev;
        }
        cout<<endl;
    }
    return 0;
}