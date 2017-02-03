#include <stdio.h>

long n;
long long int inversions = 0;
void merge(long l1, long r1, long l2, long r2, long arr[])
{
    long sortArr[n];
    long i = l1, j = l2;
    long k = l1;
    while (i <= r1 && j <= r2) {
        if (arr[i] <= arr[j]) {
            if (i > j)
                inversions += (l1 - j);
            sortArr[k++] = arr[i++];
        }
        else {
            if (i < j)
                inversions += (l2 - i);
            sortArr[k++] = arr[j++];
        }
    }
    while (i <= r1)
        sortArr[k++] = arr[i++];
    while (j <= r2)
        sortArr[k++] = arr[j++];

    for (i = l1; i <= r2; i++)
        arr[i] = sortArr[i];
}
void mergeSort(long l, long r, long arr[])
{
    long mid;
    if (l < r) {
        mid = l + (r - l) / 2;
        mergeSort(l, mid, arr);
        mergeSort(mid + 1, r, arr);
        merge(l, mid, mid + 1, r, arr);
    }
}
int main()
{
    scanf("%li", &n);
    long arr[n];
    long i;
    for (i = 0; i < n; i++) {
        scanf("%li", &arr[i]);
    }

    mergeSort(0, n - 1, arr);
    printf("%lli", inversions);

    return 0;
}
