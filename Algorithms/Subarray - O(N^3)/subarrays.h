void SubArrays(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                std::cout<<arr[k]<<" ";
            }
            std::cout<<"\n";
        }
    }
}
//NOTE: THE ALGORITHM IS HAVING THE TIME COMPLEXITY OF N^3 BEWARE WITH THE CONSTRAINTS!