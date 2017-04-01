#include <stdio.h>
#include <cstdlib>
#include <time.h>

void sort1(int *A, int n);
void sort2(int *A,int n);
void sort3(int *A, int n);
void sort4(int *A, int a, int b);
void sort5(int*A, int a, int b);
void genAscendArr(int*A, int n);
void genDescendArr(int*A, int n);
void genAscendFArr(int*A, int n);
void genAscendEArr(int*A, int n);
void genDescendFArr(int*A, int n);
void genDescendEArr(int*A, int n);
void genRandArr(int*A, int n);
int ascendSort(const int N);
int descendSort(const int N);
int ascendFArr(const int N);
int ascendEArr(const int N);
int descendFArr(const int N);
int descendEArr(const int N);
int randSort(const int N);
FILE *bubble, *shaker, *selection, *recursion, *fast;

int main()
{
    bubble = fopen("../bubble.txt", "a+");fprintf(bubble,"100\t\t");fclose(bubble);
    shaker = fopen("../shaker.txt", "a+");fprintf(shaker,"100\t\t");fclose(shaker);
    selection = fopen("../selection.txt", "a+");fprintf(selection,"100\t\t");fclose(selection);
    recursion = fopen("../recursion.txt", "a+");fprintf(recursion,"100\t\t");fclose(recursion);
    fast = fopen("../fast.txt", "a+");fprintf(fast,"100\t\t");fclose(fast);
    ascendSort(100000);
    descendSort(100000);
    ascendFArr(100000);
    ascendEArr(100000);
    descendFArr(100000);
    descendEArr(100000);
    randSort(100000);

    bubble = fopen("../bubble.txt", "a+");fprintf(bubble,"\n");fclose(bubble);
    shaker = fopen("../shaker.txt", "a+");fprintf(shaker,"\n");fclose(shaker);
    selection = fopen("../selection.txt", "a+");fprintf(selection,"\n");fclose(selection);
    recursion = fopen("../recursion.txt", "a+");fprintf(recursion,"\n");fclose(recursion);
    fast = fopen("../fast.txt", "a+");fprintf(fast,"\n");fclose(fast);

    bubble = fopen("../bubble.txt", "a+");fprintf(bubble,"200\t\t");fclose(bubble);
    shaker = fopen("../shaker.txt", "a+");fprintf(shaker,"200\t\t");fclose(shaker);
    selection = fopen("../selection.txt", "a+");fprintf(selection,"200\t\t");fclose(selection);
    recursion = fopen("../recursion.txt", "a+");fprintf(recursion,"200\t\t");fclose(recursion);
    fast = fopen("../fast.txt", "a+");fprintf(fast,"200\t\t");fclose(fast);
    ascendSort(200000);
    descendSort(200000);
    ascendFArr(200000);
    ascendEArr(200000);
    descendFArr(200000);
    descendEArr(200000);
    randSort(200000);

    bubble = fopen("../bubble.txt", "a+");fprintf(bubble,"\n");fclose(bubble);
    shaker = fopen("../shaker.txt", "a+");fprintf(shaker,"\n");fclose(shaker);
    selection = fopen("../selection.txt", "a+");fprintf(selection,"\n");fclose(selection);
    recursion = fopen("../recursion.txt", "a+");fprintf(recursion,"\n");fclose(recursion);
    fast = fopen("../fast.txt", "a+");fprintf(fast,"\n");fclose(fast);

    bubble = fopen("../bubble.txt", "a+");fprintf(bubble,"300\t\t");fclose(bubble);
    shaker = fopen("../shaker.txt", "a+");fprintf(shaker,"300\t\t");fclose(shaker);
    selection = fopen("../selection.txt", "a+");fprintf(selection,"300\t\t");fclose(selection);
    recursion = fopen("../recursion.txt", "a+");fprintf(recursion,"300\t\t");fclose(recursion);
    fast = fopen("../fast.txt", "a+");fprintf(fast,"300\t\t");fclose(fast);
    ascendSort(300000);
    descendSort(300000);
    ascendFArr(300000);
    ascendEArr(300000);
    descendFArr(300000);
    descendEArr(300000);
    randSort(300000);

    bubble = fopen("../bubble.txt", "a+");fprintf(bubble,"\n");fclose(bubble);
    shaker = fopen("../shaker.txt", "a+");fprintf(shaker,"\n");fclose(shaker);
    selection = fopen("../selection.txt", "a+");fprintf(selection,"\n");fclose(selection);
    recursion = fopen("../recursion.txt", "a+");fprintf(recursion,"\n");fclose(recursion);
    fast = fopen("../fast.txt", "a+");fprintf(fast,"\n");fclose(fast);

    bubble = fopen("../bubble.txt", "a+");fprintf(bubble,"400\t\t");fclose(bubble);
    shaker = fopen("../shaker.txt", "a+");fprintf(shaker,"400\t\t");fclose(shaker);
    selection = fopen("../selection.txt", "a+");fprintf(selection,"400\t\t");fclose(selection);
    recursion = fopen("../recursion.txt", "a+");fprintf(recursion,"400\t\t");fclose(recursion);
    fast = fopen("../fast.txt", "a+");fprintf(fast,"400\t\t");fclose(fast);
    ascendSort(400000);
    descendSort(400000);
    ascendFArr(400000);
    ascendEArr(400000);
    descendFArr(400000);
    descendEArr(400000);
    randSort(400000);

    bubble = fopen("../bubble.txt", "a+");fprintf(bubble,"\n");fclose(bubble);
    shaker = fopen("../shaker.txt", "a+");fprintf(shaker,"\n");fclose(shaker);
    selection = fopen("../selection.txt", "a+");fprintf(selection,"\n");fclose(selection);
    recursion = fopen("../recursion.txt", "a+");fprintf(recursion,"\n");fclose(recursion);
    fast = fopen("../fast.txt", "a+");fprintf(fast,"\n");fclose(fast);

    bubble = fopen("../bubble.txt", "a+");fprintf(bubble,"500\t\t");fclose(bubble);
    shaker = fopen("../shaker.txt", "a+");fprintf(shaker,"500\t\t");fclose(shaker);
    selection = fopen("../selection.txt", "a+");fprintf(selection,"500\t\t");fclose(selection);
    recursion = fopen("../recursion.txt", "a+");fprintf(recursion,"500\t\t");fclose(recursion);
    fast = fopen("../fast.txt", "a+");fprintf(fast,"500\t\t");fclose(fast);
    ascendSort(500000);
    descendSort(500000);
    ascendFArr(500000);
    ascendEArr(500000);
    descendFArr(500000);
    descendEArr(500000);
    randSort(500000);

    bubble = fopen("../bubble.txt", "a+");fprintf(bubble,"\n");fclose(bubble);
    shaker = fopen("../shaker.txt", "a+");fprintf(shaker,"\n");fclose(shaker);
    selection = fopen("../selection.txt", "a+");fprintf(selection,"\n");fclose(selection);
    recursion = fopen("../recursion.txt", "a+");fprintf(recursion,"\n");fclose(recursion);
    fast = fopen("../fast.txt", "a+");fprintf(fast,"\n");fclose(fast);

    printf("FINISH");

}

/*******************************  1 сортировка упорядоченного массива по возрастанию  *****************************/
int ascendSort(const int N)
{
    int A[N];
    int a = 0, b = N;

    genAscendArr(A, N);
    int timeSort1 = time(0);
    sort1(A, N);
    timeSort1 = time(0) - timeSort1;

    genAscendArr(A, N);
    int timeSort2 = time(0);
    sort2(A, N);
    timeSort2 = time(0) - timeSort2;

    genAscendArr(A, N);
    int timeSort3 = time(0);
    sort3(A, N);
    timeSort3 = time(0) - timeSort3;

    genAscendArr(A, N);
    int timeSort4 = time(0);
    sort4(A, a, b);
    timeSort4 = time(0) - timeSort4;

    genAscendArr(A, N);
    int timeSort5 = time(0);
    sort5(A, a, b);
    timeSort5 = time(0) - timeSort5;

    bubble = fopen("../bubble.txt", "a+");fprintf(bubble,"%d\t\t", timeSort1);fclose(bubble);
    shaker = fopen("../shaker.txt", "a+");fprintf(shaker,"%d\t\t", timeSort2);fclose(shaker);
    selection = fopen("../selection.txt", "a+");fprintf(selection,"%d\t\t", timeSort3);fclose(selection);
    recursion = fopen("../recursion.txt", "a+");fprintf(recursion,"%d\t\t", timeSort4);fclose(recursion);
    fast = fopen("../fast.txt", "a+");fprintf(fast,"%d\t\t", timeSort5);fclose(fast);

    return 0;
}

/*******************************  2 сортировка упорядоченного массива по убыванию  *****************************/
int descendSort(const int N)
{
    int A[N];
    int a = 0, b = N;

    genDescendArr(A, N);
    int timeSort1 = time(0);
    sort1(A, N);
    timeSort1 = time(0) - timeSort1;

    genDescendArr(A, N);
    int timeSort2 = time(0);
    sort2(A, N);
    timeSort2 = time(0) - timeSort2;

    genDescendArr(A, N);
    int timeSort3 = time(0);
    sort3(A, N);
    timeSort3 = time(0) - timeSort3;

    genDescendArr(A, N);
    int timeSort4 = time(0);
    sort4(A, a, b);
    timeSort4 = time(0) - timeSort4;

    genDescendArr(A, N);
    int timeSort5 = time(0);
    sort5(A, a, b);
    timeSort5 = time(0) - timeSort5;

    bubble = fopen("../bubble.txt", "a+");fprintf(bubble,"%d\t\t", timeSort1);fclose(bubble);
    shaker = fopen("../shaker.txt", "a+");fprintf(shaker,"%d\t\t", timeSort2);fclose(shaker);
    selection = fopen("../selection.txt", "a+");fprintf(selection,"%d\t\t", timeSort3);fclose(selection);
    recursion = fopen("../recursion.txt", "a+");fprintf(recursion,"%d\t\t", timeSort4);fclose(recursion);
    fast = fopen("../fast.txt", "a+");fprintf(fast,"%d\t\t", timeSort5);fclose(fast);

    return 0;
}

/*******************************  3 сортировка упорядоченного массива по возрастанию с 1 элементом не на месте в начале *****************************/
int ascendFArr(const int N)
{
    int A[N];
    int a = 0, b = N;

    genAscendFArr(A, N);
    int timeSort1 = time(0);
    sort1(A, N);
    timeSort1 = time(0) - timeSort1;

    genAscendFArr(A, N);
    int timeSort2 = time(0);
    sort2(A, N);
    timeSort2 = time(0) - timeSort2;

    genAscendFArr(A, N);
    int timeSort3 = time(0);
    sort3(A, N);
    timeSort3 = time(0) - timeSort3;

    genAscendFArr(A, N);
    int timeSort4 = time(0);
    sort4(A, a, b);
    timeSort4 = time(0) - timeSort4;

    genAscendFArr(A, N);
    int timeSort5 = time(0);
    sort5(A, a, b);
    timeSort5 = time(0) - timeSort5;

    bubble = fopen("../bubble.txt", "a+");fprintf(bubble,"%d\t\t", timeSort1);fclose(bubble);
    shaker = fopen("../shaker.txt", "a+");fprintf(shaker,"%d\t\t", timeSort2);fclose(shaker);
    selection = fopen("../selection.txt", "a+");fprintf(selection,"%d\t\t", timeSort3);fclose(selection);
    recursion = fopen("../recursion.txt", "a+");fprintf(recursion,"%d\t\t", timeSort4);fclose(recursion);
    fast = fopen("../fast.txt", "a+");fprintf(fast,"%d\t\t", timeSort5);fclose(fast);

    return 0;
}

/*******************************  4 сортировка упорядоченного массива по возрастанию с 1 элементом не на месте в конце *****************************/
int ascendEArr(const int N)
{
    int A[N];
    int a = 0, b = N;

    genAscendEArr(A, N);
    int timeSort1 = time(0);
    sort1(A, N);
    timeSort1 = time(0) - timeSort1;

    genAscendEArr(A, N);
    int timeSort2 = time(0);
    sort2(A, N);
    timeSort2 = time(0) - timeSort2;

    genAscendEArr(A, N);
    int timeSort3 = time(0);
    sort3(A, N);
    timeSort3 = time(0) - timeSort3;

    genAscendEArr(A, N);
    int timeSort4 = time(0);
    sort4(A, a, b);
    timeSort4 = time(0) - timeSort4;

    genAscendEArr(A, N);
    int timeSort5 = time(0);
    sort5(A, a, b);
    timeSort5 = time(0) - timeSort5;

    bubble = fopen("../bubble.txt", "a+");fprintf(bubble,"%d\t\t", timeSort1);fclose(bubble);
    shaker = fopen("../shaker.txt", "a+");fprintf(shaker,"%d\t\t", timeSort2);fclose(shaker);
    selection = fopen("../selection.txt", "a+");fprintf(selection,"%d\t\t", timeSort3);fclose(selection);
    recursion = fopen("../recursion.txt", "a+");fprintf(recursion,"%d\t\t", timeSort4);fclose(recursion);
    fast = fopen("../fast.txt", "a+");fprintf(fast,"%d\t\t", timeSort5);fclose(fast);

    return 0;
}

/*******************************  5 сортировка упорядоченного массива по убыванию с 1 элементом не на месте в начале *****************************/
int  descendFArr(const int N)
{
    int A[N];
    int a = 0, b = N;

    genDescendFArr(A, N);
    int timeSort1 = time(0);
    sort1(A, N);
    timeSort1 = time(0) - timeSort1;

    genDescendFArr(A, N);
    int timeSort2 = time(0);
    sort2(A, N);
    timeSort2 = time(0) - timeSort2;

    genDescendFArr(A, N);
    int timeSort3 = time(0);
    sort3(A, N);
    timeSort3 = time(0) - timeSort3;

    genDescendFArr(A, N);
    int timeSort4 = time(0);
    sort4(A, a, b);
    timeSort4 = time(0) - timeSort4;

    genDescendFArr(A, N);
    int timeSort5 = time(0);
    sort5(A, a, b);
    timeSort5 = time(0) - timeSort5;

    bubble = fopen("../bubble.txt", "a+");fprintf(bubble,"%d\t\t", timeSort1);fclose(bubble);
    shaker = fopen("../shaker.txt", "a+");fprintf(shaker,"%d\t\t", timeSort2);fclose(shaker);
    selection = fopen("../selection.txt", "a+");fprintf(selection,"%d\t\t", timeSort3);fclose(selection);
    recursion = fopen("../recursion.txt", "a+");fprintf(recursion,"%d\t\t", timeSort4);fclose(recursion);
    fast = fopen("../fast.txt", "a+");fprintf(fast,"%d\t\t", timeSort5);fclose(fast);

    return 0;
}

/*******************************  6 сортировка упорядоченного массива по убыванию с 1 элементом не на месте в начале *****************************/
int  descendEArr(const int N)
{
    int A[N];
    int a = 0, b = N;

    genDescendEArr(A, N);
    int timeSort1 = time(0);
    sort1(A, N);
    timeSort1 = time(0) - timeSort1;

    genDescendEArr(A, N);
    int timeSort2 = time(0);
    sort2(A, N);
    timeSort2 = time(0) - timeSort2;

    genDescendEArr(A, N);
    int timeSort3 = time(0);
    sort3(A, N);
    timeSort3 = time(0) - timeSort3;

    genDescendEArr(A, N);
    int timeSort4 = time(0);
    sort4(A, a, b);
    timeSort4 = time(0) - timeSort4;

    genDescendEArr(A, N);
    int timeSort5 = time(0);
    sort5(A, a, b);
    timeSort5 = time(0) - timeSort5;

    bubble = fopen("../bubble.txt", "a+");fprintf(bubble,"%d\t\t", timeSort1);fclose(bubble);
    shaker = fopen("../shaker.txt", "a+");fprintf(shaker,"%d\t\t", timeSort2);fclose(shaker);
    selection = fopen("../selection.txt", "a+");fprintf(selection,"%d\t\t", timeSort3);fclose(selection);
    recursion = fopen("../recursion.txt", "a+");fprintf(recursion,"%d\t\t", timeSort4);fclose(recursion);
    fast = fopen("../fast.txt", "a+");fprintf(fast,"%d\t\t", timeSort5);fclose(fast);

    return 0;
}

/*******************************  7 сортировка массива случайных чисел *****************************/
int randSort(const int N)
{
    int A[N];
    int a = 0, b = N;

    genRandArr(A, N);
    int timeSort1 = time(0);
    sort1(A, N);
    timeSort1 = time(0) - timeSort1;

    genRandArr(A, N);
    int timeSort2 = time(0);
    sort2(A, N);
    timeSort2 = time(0) - timeSort2;

    genRandArr(A, N);
    int timeSort3 = time(0);
    sort3(A, N);
    timeSort3 = time(0) - timeSort3;

    genRandArr(A, N);
    int timeSort4 = time(0);
    sort4(A, a, b);
    timeSort4 = time(0) - timeSort4;

    genRandArr(A, N);
    int timeSort5 = time(0);
    sort5(A, a, b);
    timeSort5 = time(0) - timeSort5;

    bubble = fopen("../bubble.txt", "a+");fprintf(bubble,"%d\t\t", timeSort1);fclose(bubble);
    shaker = fopen("../shaker.txt", "a+");fprintf(shaker,"%d\t\t", timeSort2);fclose(shaker);
    selection = fopen("../selection.txt", "a+");fprintf(selection,"%d\t\t", timeSort3);fclose(selection);
    recursion = fopen("../recursion.txt", "a+");fprintf(recursion,"%d\t\t", timeSort4);fclose(recursion);
    fast = fopen("../fast.txt", "a+");fprintf(fast,"%d\t\t", timeSort5);fclose(fast);

    return 0;
}


/*******************************  генерация массивов  *****************************/
void genAscendArr(int*A, int n)
{
    for(int i=0; i<n; i++)
        A[i]=i;
}

void genDescendArr(int*A, int n)
{
    for(int i=0; i<n; i++)
        A[i]=n-i;
}

void genAscendFArr(int*A, int n)
{
    genAscendArr(A,n);
    for(int i=0; i<n; i++)
        A[n/4]=n/4*3;
}

void genAscendEArr(int*A, int n)
{
    genAscendArr(A,n);
    for(int i=0; i<n; i++)
        A[n/4*3]=n/4;
}

void genDescendFArr(int*A, int n)
{
    genDescendArr(A,n);
    for(int i=0; i<n; i++)
        A[n/4]=n/4;
}

void genDescendEArr(int*A, int n)
{
    genDescendArr(A,n);
    for(int i=0; i<n; i++)
        A[n/4*3]=n/4*3;
}

void genRandArr(int*A, int n)
{
    srand(0);
    for(int i=0; i<n; i++)
        A[i]=rand();
}


/*******************************  функции сортировок  *****************************/

/*******************************  пузырек  *****************************/
void sort1(int *A, int n)
{
    int i, j;
    for(i = 0 ; i < n - 1; i++)
    {
        for(j = 0 ; j < n - i - 1 ; j++)
        {
            if(A[j] > A[j+1])
            {
                int c = A[j];
                A[j] = A[j+1] ;
                A[j+1] = c;
            }
        }
    }
}
/*******************************  шейкер  *****************************/
void sort2(int *A,int n)
{
    int left = 0, right = n - 1;
    int flag = 1;
    while ((left < right) && flag > 0)
    {
        flag = 0;
        for (int i = left; i<right; i++)
        {
            if (A[i]>A[i + 1])
            {
                int c = A[i];
                A[i] = A[i + 1];
                A[i + 1] = c;
                flag = 1;
            }
        }
        right--;
        for (int i = right; i>left; i--)
        {
            if (A[i - 1]>A[i])
            {
                int c = A[i];
                A[i] = A[i - 1];
                A[i - 1] = c;
                flag = 1;
            }
        }
        left++;
    }
}
/*******************************  выборкой  *****************************/
void sort3(int *A, int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min = i;
        for(int j = i+1; j<n;j++)
        {
            if(A[min]>A[j])
            {
                min=j;
            }
        }
        if(i!=min)
        {
            int c = A[i];
            A[i] = A[min];
            A[min] = c;
        }
    }
}

/*******************************  рекурсивным слиянием  *****************************/

void merge(int *A, int a, int mid, int b)
{
    int *B = new int[b+1-a];
    int h,i,j,k;
    h=a;
    i=0;
    j=mid+1;
    while((h<=mid)&&(j<=b))
    {
        if(A[h]<=A[j])
        {
            B[i]=A[h];
            h++;
        }
        else
        {
            B[i]=A[j];
            j++;
        }
        i++;
    }
    if(h>mid)
    {
        for(k=j;k<=b;k++)
        {
            B[i]=A[k];
            i++;
        }
    }
    else
    {
        for(k=h;k<=mid;k++)
        {
            B[i]=A[k];
            i++;
        }
    }
    for(k=0;k<=b-a;k++)
    {
        A[k+a]=B[k];
    }
    delete[] B;
}
void sort4(int *A, int a, int b)
{
    int mid;
    if(a<b)
    {
        mid=(a+b)/2;
        sort4(A, a,mid);
        sort4(A, mid+1,b);
        merge(A, a,mid,b);
    }
}
/*******************************  быстрая  *****************************/
void sort5(int*A, int a, int b)
{
    if(b-a>1)
    {
        double srA=0;
        for(int i=0; i<b; i++)

            srA=srA+A[i];
            srA=srA/(b-a);
            int i=a;
            int j=b-1;

            while(i<j)
            {
                if(A[i] < srA)
                {
                    i++;
                }
                else if(A[j] >= srA)
                {
                    j--;
                }
                else
                {
                    int c = A[i];
                    A[i] = A[j];
                    A[j] = c;
                }
            }
            sort5 (A, a, i);
            sort5 (A, i, b);
    }
}
