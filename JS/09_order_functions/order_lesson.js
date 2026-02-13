// CALLBACK FUNCTIONS
// const callback = (n) => {
//   return n ** 2;
// };

// // function that takes other function as a callback
// function cube(callback, n) {
//   return callback(n) * n;
// }

// // console.log(cube(callback, 3));

// // ORDER OF FUNCTIONS
// const higherOrder = (n) => {
//   const doSomething = (m) => {
//     const doWhatEver = (t) => {
//       return 2 * n + 3 * m + t;
//     };
//     return doWhatEver;
//   };
//   return doSomething;
// };
// // console.log(higherOrder(2)(3)(10));

// // CALL BACK forEach method
// const numbers = [1, 2, 3, 4, 5];
// const sumArray = (arr) => {
//   return sum;
// };

// Functional Programming

// forEach - iterates an array elements.

// arr.forEach(function(element, index, arr){
//   console.log(index, element, arr)
// })

// above code can be written using arrow function
// arr.forEach((element, index, arr) => {
//   console.log(index, element, arr)
// })

// above code can be written using arrow function and explicit reutrn
// arr.forEach((element, index, arr) => console.log(index, element, arr));

// let sum = 0;
// const numbers = [1, 2, 3, 4, 5];
// numbers.forEach((num) => console.log(num));
// console.log(sum);

// let sum = 0;
// const numbers = [1,2,3,4,5];
// numbers.forEach(num => sum += num);

// console.log(sum)

// const countries = ["Finland", "Denmark", "Sweden", "Norway", "Iceland"];
// countries.forEach((element) => console.log(element.toUpperCase()));

// map - iterate an array element and modify the array elements.

// const modifiedArray = Array.map(function(element, index, arr){
// return element
// })

// Arrow function and explicit return
// const modifiedArray = arr.map((element, index) => element);
// Example
// const numbers = [1, 2, 3, 4, 5];
// const numbersSquare = numbers.map((num) => num * num);
//
// console.log(numbersSquare);
//
// const names = ["Asabeneh", "Mathias", "Elias", "Brook"];
// const namesToUpperCases = names.map((name) => name.toUpperCase());
// console.log(namesToUpperCases);

// Filter - filter out itemss which full fill filtering conditions and reutrn a new array.
// const countries = [
//   'Albania', 'Bolivia', 'Canada', 'Denmark', 'Ethiopia', 'Finland', 'Germany', 'Hungary', 'Ireland', 'Japan', 'Kenya',
// ]
// const countriesContainingLand = countries.filter((country) => country.includes('land'))
// console.log(countriesContainingLand)
// const countriesEndByia = countries.filter((country) => country.endsWith('ia'))
// console.log(countriesEndByia)

// const scores = [
//   {name: 'Asabeneh', score: 95},
//   {name: 'Lidiya', score: 98},
//   {name: 'Mathias', score: 80},
//   {name: 'Elias', score: 50},
//   {name: 'Matha', score: 85},
//   {name: 'John', score: 100}, 
// ];
//
// const scoresGreaterEighty = scores.filter((score) => score.score > 80)
// console.log(scoresGreaterEighty)

// reduce
// arr.reduce((previous, current) => {
// // operations goes here before returninng a value
//   return
// }, initial)
// it is good practice to define an initial valuue for the accumulator/previous value
// const numbers = [1,2,3,4,5]
// const sum = numbers.reduce((acc, cur) => acc + cur, 0)
// console.log(sum)

// every - checks all the element are similar in one aspect. returns a boolean
// const names = ['Asabeneh', 'Mathias', 'Elias', 'Brook']
// const areAllStr = names.every((name) => typeof name === 'string') // Are all strings?
// console.log(areAllStr);

// find - returns the first element that satisfies the condition
// const ages = [24,22,25,32,35,18]
// const age = ages.find((age) => age < 20)
// console.log(age)

// findIndex - return the position of the first element which satisfies the condition
// const names = [
//   'Asabeneh', 
//   'Mathias', 
//   'Elias',
//   'Brook'
// ]
// const ages = [
//   24,
//   22,
//   25,
//   32,
//   35,
//   18
// ]
//
// const result = names.findIndex((name) => name.length > 7)
// console.log(result)
// const age = ages.findIndex((age) => age < 20)
// console.log(age)

// some - checks if some of the elemennts are similar in one aspect. it returns boolean
// const names = [
//   'Asabeneh', 
//   'Mathias', 
//   'Elias',
//   'Brook'
// ]
// const bools = [true, true, true, true]
// const areSomeTrue = bools.some((b) => b === true)
// console.log(areSomeTrue)

// sort - arranges the array elements either ascending or descending order, by default sort() method sorts values as strings
// const products = ['Milk', 'Coffee','Sugar','Honey','Apple','Carrot']
// console.log(products.sort())

// sorting numeric values
// const numbers = [9.81,3.14,100,37]
// // using sort method to sort number items provide a wrong result. see below
// console.log(numbers.sort())
// numbers.sort(function(a,b){
//   return a - b
// })
// console.log(numbers)
// sorting object arrays 
const users = [
  {name: 'Asabeneh', age: 150},
  {name: 'Brook', age: 50},
  {name: 'Eyob', age: 100},
  {name: 'Elias', age: 22},
]
users.sort((a,b) => {
  if(a.age < b.age) return -1
  if(a.age > b. age) return 1
return 0
})
console.log(users)

