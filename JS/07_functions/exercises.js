//LEVEL 1
//1
// function fullName() {
//   fullName = "Keziah Magtibay";
//   return fullName;
// }
// console.log(fullName());
//2
// const fullName = (firstName, lastName) => `${firstName} ${lastName}`;
// console.log(fullName("Keziah", "Magtibay"));
//3
// const addNumbers = (num1, num2) => num1 + num2;
// console.log(addNumbers(3, 2));
//4
// const areaRec = (length, width) => length * width;
// console.log(areaRec(3, 5));
//5
// const perimeterRec = (length, width) => 2 * (length + width);
// console.log(perimeterRec(4, 5));
//6
// const volumeRec = (length, width, height) => length * width * height;
// console.log(volumeRec(1, 2, 5));

// 13
// const bmi = (height, weight) => {
//   result = weight / (height * height);
//   if (result < 18.5) {
//     console.log("You're underweight!!");
//   } else if (result >= 18.5 && result < 24.9) {
//     console.log("Normal Weight");
//   }
// };

// EXERCISE 2
//1
// const solveLinEquation = (a, b) => {
//   if (a == 0) {
//     if (b != 0) {
//       return "No sulution (division by zero)";
//     } else {
//       return "Infinite solutions";
//     }
//   } else {
//     return -b / a;
//   }
// };
// let a = 2,
//   b = 4;
// solution = solveLinEquation(a, b);
// console.log(`The solution for ${a}x + ${b} = 0 is x ${solution}`);

//13
// function evensandOdd(num = 100) {
//   let countEven = 0;
//   let countOdd = 0;

//   for (let i = 0; i <= num; i++) {
//     if (i % 2 == 0) {
//       countEven += 1;
//     } else {
//       countOdd += 1;
//     }
//   }
//   console.log(`The number of odds are ${countOdd}`);
//   console.log(`The number of evens are ${countEven}`);
// }
// evensandOdd();

//14
// const sum = (...args) => {
//   let sum = 0;
//   for (const element of args) {
//     sum += element;
//   }
//   return sum;
// };
// console.log(sum(1, 2, 3, 4));

//15
// const findMax = (...args) => {
//   max = args[0];
//   for (const element of args) {
//     if (max < element) {
//       max = element;
//     }
//   }
//   return max;
// };

// console.log(findMax(0, 10, 5));
// console.log(findMax(0, -10, -5));

// EXERCISE 3
//1
let char = Number(prompt("How long should the ID be? : "));
let numId = Number(prompt("How many IDs do you want? : "));

function userIdGenerator() {
  let chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
  let randomChar = "";
  for (let i = 0; i < numId; i++) {
    for (let j = 0; i < char; j++) {
      let randomIndex = Math.floor(Math.random() * chars.length);
      randomChar += chars[randomIndex];
    }
    console.log(`ID ${i + 1}: ` + randomChar);
  }
}
userIdGenerator();
