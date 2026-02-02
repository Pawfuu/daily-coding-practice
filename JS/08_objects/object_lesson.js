a = "JavaScript"; // without the let or const makes it a window object
b = 10;
function letsLearnScope() {
  console.log(a, b);
  if (true) {
    console.log(a, b);
  }
}
console.log(a, b);
