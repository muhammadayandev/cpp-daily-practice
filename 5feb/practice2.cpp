#include <iostream>
using namespace std;


int maximizeSumWithKDistinct(int *arr,int n,int k){

    //sorting
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }


    //sum of distinct
    int sum[1000], cnt = 0;
    for(int i = 0;i<n;){
        int s = 0;
        int x = arr[i];
        while(arr[i]==x && i<n){
            s+=arr[i];
            i++;
        }
        sum[cnt++] = s;
    }


    //sorting sum
    for(int i =0;i<cnt-1;i++){
        for(int j = 0;j<cnt-i-1;j++){
            if(sum[j]>sum[j+1]){
                swap(sum[j], sum[j+1]);
            }
        }
    }


    int ans = 0;
    for(int i=cnt-1; i>=0 && k>0; i--){
        if(sum[i] > 0){
            ans += sum[i];
            k--;
        }
    }

    return ans;


}

int main(){
    int n;
    cout << "Enter Size Of Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter Elements Of Array: " << endl;
    for(int i =0;i<n;i++){
        cout << "Enter Element " << i+1 << " :";
        cin >> arr[i];
    }
    int k;
    cout << "Enter K: ";
    cin >> k;
    int sum = maximizeSumWithKDistinct(arr,n,k);

    cout << sum;
    return 0;
}