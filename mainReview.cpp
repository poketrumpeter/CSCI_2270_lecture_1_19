#include <iostream>
#include <fstream>
using namespace std;


void dispArray(int arr[], int size);

int main()
{
    int sidArraySize = 10;
    int sidArray[sidArraySize];
    ifstream rFile;
    rFile.open("numbers1_19.txt");
    cout << "opening textFile" << endl;
    if(rFile.fail())
    {
        cout << "File Open Fail";
    }
    for(int i = 0; i < sidArraySize; i++)
    {
        rFile >> sidArray[i];
    }

    dispArray(sidArray, sidArraySize);
    return 0;
}

void dispArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}