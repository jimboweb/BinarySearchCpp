#include <iostream>
using namespace std;

int bin_search(int A[], int left, int right, int k){
    int mid = (left + right)/2;
    cout << "left = " << left << " right = " << right << endl;
    cout << "A[mid] = " << A[mid] << endl;
    cout<<"mid = " << mid << endl;
    if(A[mid]==k)
        return mid;
    if(left==right)
        return -1;
    else if(A[mid]<k)
        return bin_search(A,mid+1,right,k);
    else
        return bin_search(A,left,mid-1,k);
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        int key;
        cin>>key;
        int found = bin_search(a,0,N-1,key);
        cout<<found;
    }
    return 0;
}