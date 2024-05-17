#include <iostream>
#include <time.h>
using namespace std;
#include <algorithm>
#include <fstream>

int const NMAX = 500000;
void RandomArray(int arr[], int N)
{
    for (size_t i = 0; i < N; i++)
    {
        arr[i] = rand() %10;
    }
}
void PrintArray(int arr[], int N)
{
    cout << endl;
    for (size_t i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void SwapElem(int* a, int* b)
{
    int k;
    k = *a;
    *a = *b;
    *b = k;
}
    void sortN2(int arr[], int N)
    {
        int k;
        for (size_t i = 0; i < N; i++)
        {
            for (size_t j = 0; j < N-1; j++)
            {
                if (arr[j] >= arr[j+1])
                {
                    SwapElem(&arr[j], &arr[j+1]);
                }
            }  
        }
    }
void CopyArray(int arr[], int arrcopy[], int N)
{
    for (size_t i = 0; i < N; i++)
    {
        arrcopy[i] = arr[i];
    }
}
void Merg(int arr[], int begin, int end)
{
    int i = begin;
    int mid = begin + (end - begin) / 2;
    int j = mid + 1;
    int k = 0;
    int *d = new int[NMAX];
    while (i <= mid && j <= end)
    {
        if(arr[i] <= arr[j])
        {
            d[k] = arr[i]; i++;
        }
        else
        {
            d[k] = arr[j]; j++;
        }
        k++;
    }
    while (i<= mid)
    {
        d[k] = arr[i];
        i++; k++;
    }
    for(i = 0; i < k; i++)
    {
        arr[begin+i] = d[i];
    }
    delete[] d;
}
void mergeSort(int arr[], int left, int right)
{
    int temp = 0;
    if (left < right)
    {
        if (right - left == 1)
        {
            if (arr[left] > arr[right])
            {
                temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
            }
        }
        else
        {
            mergeSort(arr, left, left + (right - left)/2);
            mergeSort(arr, left + (right - left)/2 + 1, right);
            Merg(arr, left, right);
        }  
    }
}
void sortlog(int arr[], int N)
{
    mergeSort(arr, 0, N-1);
}


double MIN(double arr[], int N)
{
    double min = arr[0];
    for (size_t i = 0; i < N; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
double MAX(double arr[], int N)
{
    double max;
    for (size_t i = 0; i < N; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
double HALF(double arr[], int N)
{
    double half;
    int sum = 0;
    for (size_t i = 0; i < N; i++)
    {
        sum = sum + arr[i];
    }
    half = sum/N;
    return half;
}
void SecundomerSortN2(int arr[],int N, int repead)
{
    double *miliseconds = new double[repead];
    for (size_t i = 0; i < repead; i++)
    {
        int *arr2 = new int[N];
        CopyArray(arr, arr2, N);
        clock_t start = clock();
            sortN2(arr2, N);
        clock_t end = clock();
        miliseconds[i] = ((double)(end - start)); 
        delete[] arr2;
    }
    double *meaning = new double[3];
    meaning[0] = MIN(miliseconds, repead);
    meaning[1] = MAX(miliseconds, repead);   
    meaning[2] = HALF(miliseconds, repead);
    cout << "\t\t|\tMin\t|\t\t|\tMax\t|\t\t|\tHalf\t|" << endl;
    cout << "N = "  << N <<"\t\t";
    for (size_t i = 0; i < 3; i++)
    {
        cout << "|\t"<<  meaning[i] << "\t|\t\t"; 
    }            
}
void SecundomerSortlog(int arr[],int N, int repead)
{
    double *miliseconds = new double[repead];
    for (size_t i = 0; i < repead; i++)
    {
        int *arr2 = new int[N];
        CopyArray(arr, arr2, N);
        clock_t start = clock();
            sortlog(arr2, N);
        clock_t end = clock();
        miliseconds[i] = ((double)(end - start));
        delete arr2;
    }
    double *meaning = new double[3];
    meaning[0] = MIN(miliseconds, repead);
    meaning[1] = MAX(miliseconds, repead);   
    meaning[2] = HALF(miliseconds, repead);
    cout << "\t\t|\tMin\t|\t\t|\tMax\t|\t\t|\tHalf\t|" << endl;
    cout << "N = "  << N <<"\t\t";
    for (size_t i = 0; i < 3; i++)
    {
        cout << "|\t"<<  meaning[i] << "\t|\t\t"; 
    }         
}
void Secundomerstdsort(int arr[],int N, int repead)
{
    double *miliseconds = new double[repead];
    for (size_t i = 0; i < repead; i++)
    {
        int *arr2 = new int[N];
        CopyArray(arr, arr2, N);
        clock_t start = clock();
            std::sort(arr,arr + N);
        clock_t end = clock();
        miliseconds[i] = ((double)(end - start));
        delete[] arr2;
    }
    double *meaning = new double[3];
    meaning[0] = MIN(miliseconds, repead);
    meaning[1] = MAX(miliseconds, repead);   
    meaning[2] = HALF(miliseconds, repead);
    cout << "\t\t|\tMin\t|\t\t|\tMax\t|\t\t|\tHalf\t|" << endl;
    cout << "N = "  << N <<"\t\t";
    for (size_t i = 0; i < 3; i++)
    {
        cout << "|\t"<<  meaning[i] << "\t|\t\t"; 
    }      
}
void Collectmean1(int arr[], int N)
{
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    //double mean[3];
    cout << "For sortN2 :";
    SecundomerSortN2(arr,N, 10);
    cout << "\n------------------------------------------------------------------------------------------------------------" << endl;
}
void Collectmean2(int arr[], int N)
{
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    //double mean[3];
    cout << "For sortlog :";
    SecundomerSortlog(arr,N, 10);
    cout << "\n------------------------------------------------------------------------------------------------------------" << endl;
}
void Collectmean3(int arr[], int N)
{
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    cout << "For std::sort :";    
    Secundomerstdsort(arr, N, 10);
    cout << "\n------------------------------------------------------------------------------------------------------------" << endl;
}
void CollectMeanForTable()
{
/*
    std::ofstream out;			// поток для записи
	out.open("hello.txt"); 		// открываем файл для записи
	if (out.is_open())
	{
		out << "Hello World!" << std::endl;
	}
	out.close(); 
*/
    for (size_t N = 100; N < NMAX; N = N + 100)
    {
        cout << "N = " << N << " :" << endl;
        int *arr = new int[N];
        RandomArray(arr, N);
        Collectmean1(arr, N);
        Collectmean2(arr, N);
        Collectmean3(arr, N);
        delete[] arr;
    }
}




void SecundomerSortN2TXT(int arr[],int N, int repead)
{
    std::ofstream minSortN2;			// поток для записи
    minSortN2.open("minSortN2.txt", std::ios_base::app); 
    std::ofstream maxSortN2;			// поток для записи
    maxSortN2.open("maxSortN2.txt", std::ios_base::app); 
    std::ofstream halfSortN2;			// поток для записи
    halfSortN2.open("halfSortN2.txt", std::ios_base::app); 
    double *miliseconds = new double[repead];
    for (size_t i = 0; i < repead; i++)
    {
        int *arr2 = new int[N];
        CopyArray(arr, arr2, N);
        clock_t start = clock();
            sortN2(arr2, N);
        clock_t end = clock();
        miliseconds[i] = ((double)(end - start)); 
        delete[] arr2;
    }
    double *meaning = new double[3];
    meaning[0] = MIN(miliseconds, repead);
    meaning[1] = MAX(miliseconds, repead);   
    meaning[2] = HALF(miliseconds, repead);
        minSortN2 << meaning[0] << endl;
        maxSortN2 << meaning[1] << endl;
        halfSortN2 << meaning[2] << endl;
           
}
void SecundomerSortlogTXT(int arr[],int N, int repead)
{
    std::ofstream minSortlog;			// поток для записи
    minSortlog.open("minSortlog.txt", std::ios_base::app); 
    std::ofstream maxSortlog;			// поток для записи
    maxSortlog.open("maxSortlog.txt", std::ios_base::app); 
    std::ofstream halfSortlog;			// поток для записи
    halfSortlog.open("halfSortlog.txt", std::ios_base::app); 
    double *miliseconds = new double[repead];
    for (size_t i = 0; i < repead; i++)
    {
        int *arr2 = new int[N];
        CopyArray(arr, arr2, N);
        clock_t start = clock();
            sortlog(arr2, N);
        clock_t end = clock();
        miliseconds[i] = ((double)(end - start));
        delete[] arr2;
    }
    double *meaning = new double[3];
    meaning[0] = MIN(miliseconds, repead);
    meaning[1] = MAX(miliseconds, repead);   
    meaning[2] = HALF(miliseconds, repead);
        minSortlog << meaning[0] << endl;
        maxSortlog << meaning[1] << endl;
        halfSortlog << meaning[2] << endl;    
}
void SecundomerstdsortTXT(int arr[],int N, int repead)
{
    std::ofstream minstdsort;			// поток для записи
    minstdsort.open("minstdsort.txt", std::ios_base::app); 
    std::ofstream maxstdsort;			// поток для записи
    maxstdsort.open("maxstdsort.txt", std::ios_base::app); 
    std::ofstream halfstdsort;			// поток для записи
    halfstdsort.open("halfstdsort.txt", std::ios_base::app); 
    double *miliseconds = new double[repead];
    for (size_t i = 0; i < repead; i++)
    {
        int *arr2 = new int[N];
        CopyArray(arr, arr2, N);
        clock_t start = clock();
            std::sort(arr,arr + N);
        clock_t end = clock();
        miliseconds[i] = ((double)(end - start));
        delete[] arr2;
    }
    double *meaning = new double[3];
    meaning[0] = MIN(miliseconds, repead);
    meaning[1] = MAX(miliseconds, repead);   
    meaning[2] = HALF(miliseconds, repead);
        minstdsort << meaning[0] << endl;
        maxstdsort << meaning[1] << endl;
        halfstdsort << meaning[2] << endl;
   
}
void CollectMeanForTableTXT()
{
    std::ofstream Ntxt;			// поток для записи
    Ntxt.open("Ntxt.txt", std::ios_base::app); 
    for (size_t N = 450000; N < NMAX; N = N + 50000)
    {
        cout << "N = " << N << " :" << endl;
        int *arr = new int[N];
        RandomArray(arr, N);
        SecundomerSortN2TXT(arr, N, 10);
        SecundomerSortlogTXT(arr, N, 10);
        SecundomerstdsortTXT(arr, N, 10);
        Ntxt << N << endl;
        delete[] arr;
    }
}
int main()
{
    CollectMeanForTable();

    return 0;
}