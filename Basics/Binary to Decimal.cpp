#include <iostream>
using namespace std;


int bintodecimal(int BinNum){
        int ans=0,pow=1;
        
        while(BinNum > 0){
            int rem=BinNum%10;
            BinNum/=10;
            
            ans+=(rem * pow);
            pow*=2;
            
        }
        
        return ans;//Decimal format ans 
    }
int main()
{
    cout<<bintodecimal(101)<<endl;
    
    return 0;
}
