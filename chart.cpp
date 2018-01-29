//Project 1
//Crosby, John
//jcrosby7
#include <iostream>
#include <vector>
using namespace std;
const int MAX = 100;
int largestNumber(int[]);
void print(int[], int, int);

int main()
{
    int nums[MAX], x, y, big, z;
    y = 0;
    x = 0;
    z = 0;
    for(int i = 0; i < MAX; i++)
    {
        nums[i] = 0;
    }
    //Getting  the information and testing for the input.
    do
    {
        cin>>x;
        if(x > 0)
        {
            nums[y] = x;
            y++;
            z++;
        }
        else if (x == 0)
        {
            y = 100;
        }

       
    } while(y < MAX);
    big = largestNumber(nums); 
    print(nums, big, z);
    return 0;
}

int largestNumber(int numbers[])
{
    int largest = 0;
    for(int i = 0; i < MAX; i++)
    {
        if(largest < numbers[i])
        {
            largest = numbers[i]; //Changing the variable largest if numbers at and given point comes up as larger.
        }
    }
    return largest;
}

void print(int values[], int cols, int z)
{
    char display[z][cols];
    int pH; //Place holder display
    pH = cols; 
    //Fills up display with the proper char which is either a ' ' or an *.
    for(int i = 0; i < z; i++)
    {
        for(int x = 0; x < cols; x++) 
        {
            if(values[i] >= pH)
            {
                display[i][x] = '*';
            }
            else
            {
                display[i][x] = ' ';
            } 
            pH = pH - 1;
        }
        pH = cols;
    }
    //Displaying the array
    for(int y = 0; y < cols; y++)
    {
        for(int x = 0; x < z; x++)
        {
            cout<<display[x][y];
        }
        cout<<endl;
    }
}


