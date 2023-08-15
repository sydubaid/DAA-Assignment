#include <iostream>
using namespace std;

void Freq(int arr[], int size)
{
    int frequency = 1;
    int currentIndex = 1;
    int currentElement = arr[0];

    while (currentIndex < size) {
        if (arr[currentIndex - 1] == arr[currentIndex]) {
            frequency++;
            currentIndex++;
        }
        else {
            cout << currentElement << " comes " << frequency << " times" << endl;
            currentElement = arr[currentIndex];
            currentIndex++;
            frequency = 1;
        }
    }

    cout << currentElement << " comes " << frequency << " times" << endl;
}

int main()
{
    cout << "---Element Frequencies in a Sorted Array---" << endl;
    int elements[] = { 1, 1, 2, 6, 6, 7 };
    int arraySize = sizeof(elements) / sizeof(elements[0]);

    Freq(elements, arraySize);
    cout<<"Syed-21BCS9809 \nhttps://github.com/sydubaid/DAA-Assignment";

    return 0;
}
