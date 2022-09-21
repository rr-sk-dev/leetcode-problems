function twoSum(nums: number[], target: number): number[] {
  const answer: number[] = [null, null];

  for (let i = 0; i < nums.length; i++) {
    answer[0] = i;

    for (let j = i + 1; j < nums.length; j++) {
      if (nums[i] + nums[j] === target) {
        answer[1] = j;
        return answer;
      }
    }
  }

  return answer;
}
