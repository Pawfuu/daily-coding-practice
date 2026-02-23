// LVL 1
// const a = [4, 5, 8, 9];
// const b = [3, 4, 5, 7];
// const countries = ["Finland", "Sweden", "Norway"];

// const sets = new Set();
// for (let i = 0; i < 10; i++) {
//   sets.add(i);
// }
// console.log(sets);
// console.log(sets.delete(3));
// console.log(sets);
// sets.clear();
// console.log(sets);
// const strings = ["keziah", "hello", "testing", "five", "strings"];
// for (const string in strings) {
//   sets.add(strings);
// }
// console.log(sets);
// const countCharCountry = new Map();
// for (const country of countries) {
//   countCharCountry.set(country, country.length);
// }
// console.log(countCharCountry);

// LVL 2
// let unionb = [...a, ...b];
// let C = new Set(unionb);
// console.log(C);
// intersection of b
// let B = new Set(b);
// let c = a.filter((num) => B.has(num));
// let intersectionB = new Set(c);
// console.log(intersectionB);
// Difference of b
// let d = a.filter((num) => !B.has(num));
// let differenceB = new Set(d);
// console.log(differenceB);

// LVL 3
const mostSpokenLanguages = (arr, amount) => {
  const allLanguages = arr.flatMap((country) => country.languages);
  const setLanguages = new Set(allLanguages);
  console.log("The number of languages: ", setLanguages.size);

  // Map
  const languageCounts = new Map();
  for (const language of allLanguages) {
    if (languageCounts.has(language)) {
      languageCounts.set(language, languageCounts.get(language) + 1);
    } else {
      languageCounts.set(language, 1);
    }
  }
  // converts to an array so that it can be sorted
  const languageArray = Array.from(languageCounts);
  const sortLang = languageArray.sort((a, b) => b[1] - a[1]);
  const topLanguages = sortLang.slice(0, amount);
  return topLanguages.map((item) => {
    return { [item[0]]: item[1] };
  });
};

console.log(mostSpokenLanguages(countries, 10));
