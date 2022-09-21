/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *runningSum(int *nums, int numsSize, int *returnSize)
{

    // Validate the given input.
    if (nums == NULL || numsSize == 0)
    {
        printf("Invalid input.\n");
        return NULL;
    }

    *returnSize = numsSize;

    int *answer = (int *)malloc(numsSize * sizeof(int));

    // Validate if malloc succeded.
    if (answer == NULL)
    {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    int sum = 0;

    for (int i = 0; i < numsSize; i++)
    {
        sum += nums[i];
        answer[i] = sum;
    }

    return answer;
}