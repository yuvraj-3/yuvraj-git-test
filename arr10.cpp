#include <iostream>
using namespace std; 

int main() 
{
    int nums[] = {2, 7, 11, 15};
    int target = 18;
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int index1 = -1;
    int index2 = -1;

    for(int i=0;i<numsSize;i++) 
    {
        for(int j=i+ 1;j<numsSize;j++) 
        {
            if(nums[i]+nums[j]==target) 
            {
                index1 =i;
                index2 =j;
            }
        }
        if(index1!=-1 && index2!=-1) 
        {
            break;
        }
    }

    if(index1 !=-1 && index2!=-1) 
    {
        cout<<"Indices of the two numbers that add up to "<<target<<": "<<index1<<" and "<<index2<<endl;
    } 
    else 
    {
        cout << "No solution found." << endl;
    }

    return 0;
}