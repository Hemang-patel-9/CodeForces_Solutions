#include <stdio.h>
#include <string.h>
#include <math.h>

void print_string(char *s, int str_size)
{
    int i = 0;
    for (i = 0; i < str_size; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}
void print_arr(int *arr, int arr_size)
{
    int i = 0;
    for (i = 0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverse_string(char *str)
{
    int n = strlen(str);
    int i = 0;
    for (i = 0; i <= (n - 1) / 2; i++)
    {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}
void sort_in_descending(int *arr, int arr_size)
{
    int i = 0;
    for (i = 0; i < arr_size - 1; i++)
    {
        int j = 0;
        for (j = i + 1; j < arr_size; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}
int char_to_int(char c)
{
    return c - 48;
}
char int_to_char_(int a)
{
    return a + 48;
}
int main()
{
    char s[100];
    int arr[100];
    arr[0] = 0;
    int arr_size = 0;
    scanf(" %s", s);
    int str_size = strlen(s);

    // Converting string type "4506" to int type 4604, doing this for whole string s.
    int i = 0;
    for (; i < str_size; i++)
    {
        if (s[i] == '+')
        {
            arr_size++;
            arr[arr_size] = 0;
            continue;
        }
        arr[arr_size] = (arr[arr_size] * 10) + char_to_int(s[i]);
    }
    arr_size++;

    sort_in_descending(arr, arr_size);
    char *s_ptr = s;
    for (i = 0; i < arr_size; i++)
    {
        char temp_str[100];
        int l = 0;
        while (arr[i] != 0)
        {
            temp_str[l] = int_to_char_(arr[i] % 10);
            arr[i] /= 10;
            l++;
        }
        temp_str[l] = '\0';
        reverse_string(temp_str);

        strcpy(s_ptr, temp_str);
        s_ptr[l] = '+';
        s_ptr += l + 1;
    }

    print_string(s, str_size);

    return 0;
}
