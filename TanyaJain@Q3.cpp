//Sorting Comparison Program
#include <stdio.h>
#include <iostream>

using namespace std;

//Varibale for Number of Comparisons
int numcount = 0;

//Swap
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Bubble Sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            numcount++;
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }
}

//Selection Sort
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            numcount++;
            if (arr[j] < arr[min_idx])
                min_idx = j;

        swap(&arr[min_idx], &arr[i]);
    }
}

//Insertion Sort
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            numcount++;
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

//Merge Sort
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            numcount++;
            i++;
        }
        else
        {
            arr[k] = R[j];
            numcount++;
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

//Quick Sort
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        numcount++;
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Print Array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Function to display the menu
void menu()
{
    cout << "\n\n--- Sorting Program Menu ---\n\n";
    cout << "Press 1 for Bubble Sort\n";
    cout << "Press 2 for Selection Sort\n";
    cout << "Press 3 for Insertion Sort\n";
    cout << "Press 4 for Merge Sort\n";
    cout << "Press 5 for Quick Sort\n";
    cout << "Press 6 to exit\n";
}

//Main
int main()
{
    int arr[100];
    int n;
    int choice;
    printf("Enter the number of elements: ");
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    menu();
    cout << "Enter your choice: ";
    cin >> choice;
    printf("\nInitial array: ");
    printArray(arr, n);
    switch(choice){
        case 1:
            printf("Algorithm: Bubble Sort\n");
            bubbleSort(arr, n);
            break;
        case 2:
            printf("Algorithm: Selection Sort\n");
            selectionSort(arr,n);
            break;
        case 3:
            printf("Algorithm: Insertion Sort\n");
            insertionSort(arr,n);
            break;
        case 4:
            printf("Algorithm: Merge Sort\n");
            mergeSort(arr, 0, n - 1);
            break;
        case 5:
            printf("Algorithm: Quick Sort\n");
            quickSort(arr, 0, n - 1);
            break;
        default:
            cout<<"Invalid Choice!";
    }
    printf("Sorted array: ");
    printArray(arr, n);
    cout<<"Number of Comparisons: "<<numcount;
    return 0;
}

//End
