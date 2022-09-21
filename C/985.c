

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *sumEvenAfterQueries(int *nums, int numsSize, int **queries, int queriesSize, int *queriesColSize, int *returnSize)
{
    int sumEven = 0;

    int *answer = (int *)malloc(numsSize * sizeof(int));

    *returnSize = numsSize;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] % 2 == 0)
        {
            sumEven += nums[i];
        }
    }

    for (int i = 0; i < queriesSize; i++)
    {
        int value = queries[i][0];
        int index = queries[i][1];

        if (nums[index] % 2 == 0)
        {
            sumEven -= nums[index];
        }

        nums[index] = nums[index] + value;

        if (nums[index] % 2 == 0)
        {
            sumEven += nums[index];
        }

        answer[i] = sumEven;
    }

    return answer;
}