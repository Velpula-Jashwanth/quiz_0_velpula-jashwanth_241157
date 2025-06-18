long long getTrappedWater(long long* arr, int n) {
    // Write your code here.
    int l=0,r=n-1;
    long long left=0,right=0;
    long long vol=0;

    while(l<=r){
        if(arr[l]<=arr[r]) {
            if(arr[l]>=left)
                left=arr[l];
            else
                vol+=left-arr[l];
            l++;
        } else {
            if(arr[r]>=right)
                right=arr[r];
            else
                vol+= right-arr[r];
            r--;
        }
    }
    return vol;
}
