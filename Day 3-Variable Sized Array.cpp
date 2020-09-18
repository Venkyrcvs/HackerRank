//Variable Sized Array

#include <iostream>
using namespace std;


int main() {
    //n=number of arrays
    //s=number of searches
    //**a=double pointer to use two dim arrays
    //temp = to know each row of array
    int n;
    int s;
    cin>>n>>s;
    int **a=new int*[n];
    int i;
    int temp;

    for(i=0;i<n;i++)
    {
        cin>>temp;
    a[i]=new int[temp];
    for(int j=0;j<temp;j++){
        cin>>a[i][j];
    }
    }

    int search_array;//to search which array
    int get_index;//to search and get index

    for(i=0;i<s;i++){
        cin>>search_array>>get_index;
        cout<<a[search_array][get_index]<<endl;
    }

    return 0;
}
