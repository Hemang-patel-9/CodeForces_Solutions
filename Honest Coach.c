#include<stdio.h>
#include<string.h>
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
    int c;
    scanf("%d", &c);
    for(int x=0;x<c;x++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int a=0;a<n;a++)
        {
            scanf("%d", &arr[a]);
        }
        quicksort(arr,0,n-1);
        int ansvar;
        for(int a=0;a<n-1;a++)
        {
            if(a==0)
            {
                ansvar=arr[1]-arr[0];
            }
            else if((arr[a+1]-arr[a])<ansvar)
            {
                ansvar=arr[a+1]-arr[a];
            }
        }
        printf("%d\n", ansvar);
    }

    return 0;
}
