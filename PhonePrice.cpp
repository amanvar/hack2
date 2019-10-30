#include <iostream>

using namespace std;

int main()
{
    int T,N;
    cin>>T;
    while(T--){
    cin>>N;
    int sum=0;
    int a[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    for(int i=0;i<N;i++){
        int c=1,f=0,j=i-1,temp=a[i];

        while(c<=5&&j>=0){
            if(a[j]<=temp){
                f=1;
                break;
            }
            c+=1;
            j-=1;
        }

        if(f==0){
            sum+=1;
        }
    }
    cout<<sum<<"\n";
   }
    return 0;
}
