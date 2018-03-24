#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
 
int main()
{
    // Initializing vector with array values
    int arr[] = {11, 21, 33,44, 23 ,42 , 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);
 
    cout << "Vector is: ";
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";
 
    // Sorting the Vector \
    sort(vect.begin(), vect.end());

    for( int k = 0;k<n;k++)
    	cout<< vect[i] << " ";
}