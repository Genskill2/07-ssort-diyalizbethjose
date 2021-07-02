void swap_max( int arr[], int l, int n)
{
int max= arr[n];
int k;
for(int i=0;i<l;i++)
{
while(i>=n)
{
if(arr[i]>max)
{
max=arr[i];
k=i;
}
}
}
arr[k]=arr[n];
arr[n]=max;
}
