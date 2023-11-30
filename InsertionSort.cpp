#include <iostream>
#include <vector>
using namespace std;


void getArray(vector<int>& array){

    int noOfElements;
    cout<< "Enter the number of Elements: ";
    cin>> noOfElements;

    int temp;
    for(int i = 0; i < noOfElements; i++){
        cout<< "Enter the elements : ";
        cin >> temp;
        array.push_back(temp);
    }

}


void displayArray(vector<int>& array){
    for(int& i: array){
        cout<< i << " ";
    }
    cout<< "\n";
}


void InsertionSort(vector<int>& array){

    int key, j;
    for(int i = 1; i < array.size(); i++){
         key = array[i];
         j = i - 1;

        while(array[j] > key and j >= 0) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1 ] = key;

    }

}

int main(){
    vector<int> array ;
    getArray(array);

    cout<<"\nBEFORE Sorting: ";
    displayArray(array);

    InsertionSort(array);

    cout<<"\nAFTER Sorting: ";
    displayArray(array);

    return 0;
}

