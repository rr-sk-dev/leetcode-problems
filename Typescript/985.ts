function isEven(num: number) {
  return num % 2 === 0;
}

function sumEvenAfterQueries(nums: number[], queries: number[][]): number[] {
  const answer: number[] = [];

  let sumEven = nums.reduce(
    (prev, next) => (isEven(next) ? prev + next : prev),
    0
  );

  for (const [value, index] of queries) {
    if (isEven(nums[index])) {
      sumEven -= nums[index];
    }

    nums[index] = nums[index] + value;

    if (isEven(nums[index])) {
      sumEven += nums[index];
    }

    answer.push(sumEven);
  }

  console.log(answer);

  return answer;
}
