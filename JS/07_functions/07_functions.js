// Unlimited num of params in regular functions ex:
// function sumAllNums() {
//   let sum = 0;
//   for (let i = 0; i < arguments.length; i++) {
//     sum += arguments[i];
//   }
//   return sum;
// }
// console.log(sumAllNums(1, 2, 3, 4, 5));

// with arrow function
// const sumAllNums = (...args) => {
//   let sum = 0;
//   for (const element of args) {
//     sum += element;
//   }
//   return sum;
// };
// console.log(sumAllNums(1, 2, 3, 4, 5));

// other examples:
// function squar(n) {
//   return n * n;
// }
// console.log(squar(2));
// const square = (n) => {
//   return n * n;
// };
// console.log(squar(2));
// one line
// const square = n => n * n

// FUNCTIONS WITH DEFAUL PARAM
// function greetings(name = "Peter") {
//   let message = `${name}, welcome to 30 Days of JavaScript!`;
//   return message;
// }
// console.log(greetings("Keziah"));
