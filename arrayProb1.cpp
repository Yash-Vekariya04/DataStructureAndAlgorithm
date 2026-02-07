#include <iostream>
using namespace std;

int main(){
    // To find the target from adding the two elements of an array
    int a[] = {1, 2, 3, 4, 5};
    int size = 5;
    int target = 6;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] + a[j] == target)
            {
                cout << "[ " <<a[i]<< ", "<<a[j]<<"]";
            }
            
        }
        
    }
    
}