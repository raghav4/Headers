void merge(int *arr,int s,int e)
{
    int mid = (s+e)/2;
    int i = s;
    int j = mid+1;
    int k = s;
    int temp[101];
    while(i<=mid && j<=e)
    {
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            i++;
        }
        else{
            temp[k]=arr[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        temp[k]=arr[i];
        k++;
        i++;
    }
    while(j<=e)
    {
        temp[k]=arr[j];
        k++;
        j++;
    }
     for(int i=s;i<=e;i++){
        arr[i] = temp[i];
    }
}
void mergesort(int arr[],int s, int e){
    if(s>=e)
    {
        return;
    }
    int mid = (s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);

    merge(arr,s,e);
}

