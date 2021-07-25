// ES6 Rest parameter 사용
function sum(...args) {
    return args.reduce((pre, cur) => pre + cur, 0)
}

console.log(sum(1,2)) // 출력 : 3
console.log(sum(1,2,3,4,5)) // 출력 : 1