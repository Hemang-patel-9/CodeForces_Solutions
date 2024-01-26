#include<stdio.h>
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//Partition Function
int partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = (low - 1);
    int j;
	for (j = low; j <= high - 1; j++) {
		if (arr[j] <= pivot) {
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

// Quick Sort function
void quicksort(int Arr[], int low, int high)
{
	if (low < high) {
		// pi = Partition index
		int pi = partition(Arr, low, high);
		quicksort(Arr, low, pi - 1);
		quicksort(Arr, pi + 1, high);
	}
}
int main()
{
    int x;
    scanf("%d", &x);
    for(int v=0;v<x;v++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int a=0;a<n;a++)
        {
            scanf("%d", &arr[a]);
        }
        quicksort(arr,0,n-1);
        int ans=0;
        for(int a=1;a<n;a++)
        {
            ans+=arr[a]-arr[0];
        }
        printf("%d\n", ans);
    }

    return 0;
}
