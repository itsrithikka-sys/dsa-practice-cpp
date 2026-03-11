#include <iostream>
#include <fstream>
#include<stdlib.h>
using namespace std;

int partition(int A[], int p, int r, int &count){
    int x=A[r];
    int i=p-1;
    for(int j=p;j<=r-1;j++){
        count++;
        if(A[j]<=x){
            i++;
            swap(A[j],A[i]);
        }
    }   
    swap(A[i+1],A[r]);
    return i+1;       
}

int rand_partition(int a[],int p,int r,int &count){
	int i=p+rand()%(r-p+1);
	swap(a[r],a[i]);
	return partition(a,p,r,count);
}

void QuickSort(int A[], int p, int r, int &count){
    if(p<r){
        int q=rand_partition(A,p,r,count);
        QuickSort(A,p,q-1,count);
        QuickSort(A,q+1,r,count);
    }
}

int main(){
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    int* arr=new int[n];
    
    /*ifstream fin("equalfile.txt");
    for(int i=0;i<n;i++)
        fin>>arr[i];
    fin.close();*/
    
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
        
    int p,r,count;
    p=0;r=n-1;count=0;
    QuickSort(arr,p,r,count);
    
    /*ofstream fout("output.txt");
    fout<<"After Sorting: ";
    for(int i=0;i<n;i++)
        fout<<arr[i]<<" ";
    fout<<"\nBasic Operation Count: "<<count<<endl;
    fout.close();*/
    
    cout<<"Sorted Array:";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    
    //cout<<"Basic Operation Count: "<<count<<endl;
    
    delete[] arr;
    return 0;   
}
