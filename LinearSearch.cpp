//Program for Linear Search
//Written by Saurav Yadav
#include <iostream>
#include<vector>
using namespace std;


void getInputArray(vector<int> & array){
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
void printArray(vector<int>& array){
    for(int& i: array){
        cout<< i << " ";
    }
    cout<< "\n";
}
int LinearSearch(vector<int>& array, int targetElement){

    for(int i = 0; i < array.size(); i++){
        if(array[i] == targetElement){
            return i;
        }
        else {
            continue;
        }
    }
    return -1;

}


int main(){

    vector<int> array = {};



    getInputArray(array);
    printArray(array);

    int targetElement;
    cout<< "Looking for which Element? : ";
    cin>>targetElement;

    int result = LinearSearch(array,targetElement);

    if(result != -1) {
        cout << "Target Element at index : " << result;
    }
    else {
        cout << "Target Element is NOT in Array";
    }

    return 0;
}
