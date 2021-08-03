//
//  main.cpp
//  3_Insertion_Sort
//
//  Created by 세광 on 2021/08/03.
//

#include <iostream>

using namespace std;

class InsertionSort {
public:
    InsertionSort();
    ~InsertionSort();
    
    void Ascending();
    void Decending();
    void Print();
    
private:
    int *arr;
    int n;
};

int main() {
    InsertionSort *sort = new InsertionSort;
    sort->Ascending();
    sort->Print();
    sort->Decending();
    sort->Print();
    delete sort;
}

InsertionSort::InsertionSort() {
    cin >> n;
    arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
}

InsertionSort::~InsertionSort() {
    delete [] arr;
    arr = NULL;
}

void InsertionSort::Ascending() {
    for (int i = 0; i < n - 1; i++) {
        int j = i;
        while (j >= 0 && arr[j] > arr[j + 1]) {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            j--;
        }
    }
}

void InsertionSort::Decending() {
    for (int i = 0; i < n - 1; i++) {
        int j = i;
        while (j >= 0 && arr[j] < arr[j + 1]) {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            j--;
        }
    }
}

void InsertionSort::Print() {
    for (int i = 0; i < n; i++) cout << arr[i] << ' ';
    cout << endl;
}
