#include <iostream>
#include <algorithm>
using namespace std;

void generatePerm(char *arr, int startIndex, int lastIndex);

int main()
{
    int number = 0;
    char *array = NULL;
    cout<<"Enter the number of elements to generate its permutations:";
    cin>>number;
    array = new char[number];
    for(int index = 0; index < number; index++)
        array[index] = char(index + 65);
    generatePerm(array, 0, number - 1);
    return 0;
}

void generatePerm(char *arr, int startIndex, int lastIndex)
{
    if(startIndex == lastIndex)
    {
        for(int index = 0; index <= lastIndex; index++)
            cout<<arr[index];
        cout<<endl;
    }
    else
    {
        for(int index = startIndex; index <= lastIndex; index++)
        {
            swap(arr[startIndex], arr[index]);
            generatePerm(arr, startIndex + 1, lastIndex);
            swap(arr[startIndex], arr[index]);
        }
    }
        
}