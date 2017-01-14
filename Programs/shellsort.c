/* shellsort */
void shellsort(int c[], int n)
{
    int gap, i, j , temp;

    for (gap = n/2; gap > 2; gap /= 2)
        for(i = gap; i < n; i++)
            for(j = i-gap; j)
}