#include <iostream>
using namespace std;

//Traversing the array,

void traverse(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
}

//Insertion

void insert(int arr[], int n, int k,int item)
{
    for(int i=n-1;i>=k;i--)
    {
        arr[i]=arr[i+1];
    }
    arr[k]=item;
    n++;
}

//deletion
void deletion(int arr[],int n, int k)
{
    for(int i=k;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
}

//linear search
void linear_Search(int arr[], int n, int item)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==item)
        count++;

    }
    if(count)
    {
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
}
//Note for me: Diff between int a[] and int[] a;
//THey are semantically the same but,
//int[] a, b;  // Both a and b are arrays of type int
//int c[], d;  // WARNING: c is an array, but d is just a regular int
//Binary Search
int binarySearch(int a[], int n, int item)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==item) 
        return mid;

        else if(a[mid]<item)
        low=mid+1;
        
        else
        high=mid-1;
    }
    return -1;
}


//Bubble sort

void bubble(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j], arr[j+1]);
        }
    }
}

//QuickSort
//Revise this regularly as its a bit confusing 
int partition(int arr[], int start, int end)
{
    int pivotValue=arr[start];
    int pivotPosition=start;
    for(int i=start+1;i<=end;i++)
    {
        if(pivotValue>arr[i])
        {
            swap(arr[pivotPosition+1], arr[i]);
            swap(arr[pivotPosition], arr[pivotPosition+1]);
            pivotPosition++;
        }
    }
    return pivotPosition;
}
void quicksort(int arr[], int low, int high)
{
    if(low<high)
    {
        int pi=partition(arr,low,high);
        quicksort(arr, low, pi-1);
        quicksort(arr, pi+1, high);
    }
}
int main() {
    int  n, arr[100];
   cin >> n;
   for(int i=0; i<n; i++) 
   {
     cin>>arr[i];
   }

   traverse(arr,n);
   deletion(arr,n, 3);
   linear_Search(arr, n, 20);
   bubble(arr,n);
   binarySearch(arr,n,30);

   for (int i=0; i<n; i++) 
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;

   return 0;
    
}
