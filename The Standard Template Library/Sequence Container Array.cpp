/**********************************************************************************
 * <include<array>    -- c++11 c++14
 * 1.while initilizing in c++11 needs double curly bracket and c++14 need single.
 * 
 * Methods:
 * array_name.size();                   //3
 * array_name.front();                  //1
 * array_name,back()                   //3
 * array_name.empty();                  //0 (that means false)
 * array_name.max_size();               //3
 * array1.swap(array2)                  //Sswap the array elements
 * 
*/
#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int, 3> arr1 { 1,2,3};
    cout<<arr1.size()<<endl;
    
    for(int i=0;i<3;i++)
    {
        cout<<arr1[i]<<" ";
    }
    
    cout<<endl<<arr1.front()<<endl;
    cout<<arr1.back()<<endl;
    
    cout<<arr1.empty()<<endl;
    cout<<arr1.max_size()<<endl;
    
    int *data = arr1.data();
    return 0;
}
