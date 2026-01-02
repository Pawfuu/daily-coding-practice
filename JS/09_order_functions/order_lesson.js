// CALLBACK FUNCTIONS
const callback = (n) => {
  return n ** 2;
};

// function that takes other function as a callback
function cube(callback, n) {
  return callback(n) * n;
}

// console.log(cube(callback, 3));

// ORDER OF FUNCTIONS
const higherOrder = (n) => {
  const doSomething = (m) => {
    const doWhatEver = (t) => {
      return 2 * n + 3 * m + t;
    };
    return doWhatEver;
  };
  return doSomething;
};
// console.log(higherOrder(2)(3)(10));

// CALL BACK forEach method
const numbers = [1, 2, 3, 4, 5];
const sumArray = (arr) => {
  return sum;
};
