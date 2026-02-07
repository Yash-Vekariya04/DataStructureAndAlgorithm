#include<iostream>
using namespace std;

int main(){
    // To find the target from adding the two elements of a 1-indexed sorted array
    int numbers[] = {1, 2, 3, 4, 5, 6};
    int target = 5;
    int answer[2];
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int i =0;
    int j = size - 1;

    while (i < j)
    {
        if (numbers[i] + numbers[j] == target)
        {
            answer[0] = i + 1;
            answer[1] = j + 1;
            break;
        }

        else if (numbers[i] + numbers[j] > target)
        {
            j--;
        }
        else{
            i++;
        }
        
        
    }
    cout << "[ "<< answer[0] <<", "<< answer[1]<<"]";    
    return 0;
}