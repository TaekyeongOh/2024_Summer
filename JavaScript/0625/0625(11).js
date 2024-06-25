function fibonacciGenerator(n) {
    var output = [];
    if (n === 1) {
        output = [0];
        return output;
    } else if (n === 2) {
        output = [0, 1];
        return output;
    } else {
        output = [0, 1];
        for (var i = 2; i < n; i++) {
            output.push(output[output.length - 2] + output[output.length - 1]);
        }
        return output; // 함수가 끝나기 전에 output 배열을 반환해야 합니다.
    }
}

// Test cases
console.log(fibonacciGenerator(1)); // [0]
console.log(fibonacciGenerator(2)); // [0, 1]
console.log(fibonacciGenerator(5)); // [0, 1, 1, 2, 3]
console.log(fibonacciGenerator(10)); // [0, 1, 1, 2, 3, 5, 8, 13, 21, 34]
