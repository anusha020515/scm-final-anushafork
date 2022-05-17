#include <iostream>
using namespace std;
int main() {
    int i=1,n,sum=0;
    cout<<"Enter A Number = ";
    cin>>n;
    do {
        sum+=i;
        cout<<i<<endl;
        i++;
    } while (i<n);
    cout<<"sum = "<<sum<<endl;
    return 0;
}
