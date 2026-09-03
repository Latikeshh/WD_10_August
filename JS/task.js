// Array

let arr = [10, 20, 30, 40, 50];

// push()// Adds element at the end
arr.push(60);
console.log(arr);

// pop()// Removes element from the end
arr.pop();
console.log(arr);

// unshift()// Adds element at the beginning
arr.unshift(5);
console.log(arr);

// shift()// Removes element from the beginning
arr.shift();
console.log(arr);

// slice()// Returns a portion of an array
let result = arr.slice(1, 4);
console.log(result);

// splice()// Adds or removes elements
arr.splice(2, 1);
console.log(arr);

// indexOf()// Returns the index of an element
console.log(arr.indexOf(30));

// includes()// Checks whether an element exists
console.log(arr.includes(30));

// forEach()// Executes a function for every element
arr.forEach(function (value) {
    console.log(value);
});

// map()// Creates a new array by modifying each element
let double = arr.map(function (value) {
    return value * 2;
});
console.log(double);

// filter()// Creates a new array with matching elements
let greater = arr.filter(function (value) {
    return value > 20;
});
console.log(greater);

// reduce()// Reduces array to a single value
let sum = arr.reduce(function (total, value) {
    return total + value;
}, 0);
console.log(sum);

// find()// Returns the first matching element
let found = arr.find(function (value) {
    return value > 25;
});
console.log(found);

// findIndex()// Returns the index of the first matching element
let position = arr.findIndex(function (value) {
    return value > 25;
});
console.log(position);

// sort()// Sorts the array
arr.sort(function (a, b) {
    return a - b;
});
console.log(arr);

// reverse()// Reverses the array
arr.reverse();
console.log(arr);

// join()// Converts array into a string
console.log(arr.join("-"));

// Array.isArray()// Checks whether the value is an array
console.log(Array.isArray(arr));