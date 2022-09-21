// TODO: I think this should be done with some hash map or something like that.

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{

    // Validate the given input.
    if (nums == NULL)
    {
        printf("Invalid input.\n");
        return NULL;
    }

    /**
     * Size is fixed because:
     *   - return indices of the two numbers such that they add up to target
     *   - each input would have exactly one solution
     **/

    *returnSize = 2;

    int *answer = (int *)malloc(*returnSize * sizeof(int));

    // Validate if malloc succeded.
    if (answer == NULL)
    {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    int i = 0;

    for (int i = 0; i < numsSize; i++)
    {
        answer[0] = i;

        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                answer[1] = j;
                return answer;
            }
        }
    }

    return NULL; // Only one valid answer exists so this should never be reached.
}