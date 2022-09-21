function runningSum(nums: number[]): number[] {
  let runningSum: number[] = [];
  let sum: number = 0;

  for (let i = 0; i < nums.length; i++) {
    sum += nums[i];
    runningSum.push(sum);
  }

  return runningSum;
}

function runningSum2(nums: number[]): number[] {
  const result: number[] = [];

  nums.reduce((prev, next) => {
    result.push(prev + next);
    return prev + next;
  }, 0);

  return result;
}
