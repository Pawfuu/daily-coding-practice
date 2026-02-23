const languages = [
  "English",
  "Finnish",
  "English",
  "French",
  "Spanish",
  "English",
  "French",
];

// const setOfLanguages = new Set(languages);
// console.log(setOfLanguages);
// for (const language of setOfLanguages) {
//   console.log(language);

// }

// const langSet = new Set(languages);
// console.log(langSet);
// console.log(langSet.size);

// const counts = [];
// const count = {};

// for (const l of langSet) {
//   const filteredLang = languages.filter((lng) => lng === 1);
//   console.log(filteredLang);
//   counts.push({ lang: l, count: filteredLang.length });
// }
// console.log(counts);

// adding
const companies = ["Google", "Facebook", "Amazon", "Oracle", "Microsoft"];
const setOfCompanies = new Set();
for (const company of companies) {
  setOfCompanies.add(company);
}
// console.log(companies);

// Deleting
// console.log(setOfCompanies.delete("Google"));
// console.log(setOfCompanies.size); // 4 elements left in the set

// Check element in the set
// console.log(setOfCompanies.has("Apple")); // false
// console.log(setOfCompanies.has("Facebook")); // true

// clear
// companies.clear()
// console.log(companies)

// Intersection of Sets
let a = [1, 2, 3, 4, 5];
let b = [3, 4, 5, 6];

let A = new Set(a);
let B = new Set(b);

// let c = a.filter((num) => B.has(num));
// let C = new Set(c);
// console.log(C);

// Difference of sets
// let c = a.filter((num) => !B.has(num));
// let C = new Set(c);
// console.log(C);

// MAP
countries = [
  ["Finland", "Helsinki"],
  ["Sweden", "Stockholm"],
  ["Norway", "Oslo"],
];
// const map = new Map(countries);
// console.log(map);
// console.log(map.size);

//Adding values to the Map
const countriesMap = new Map();
console.log(countriesMap.size);
countriesMap.set("Finland", "Helsinki");
countriesMap.set("Sweden", "Stockholm");
countriesMap.set("Norway", "Oslo");
console.log(countriesMap);
console.log(countriesMap.size);

console.log(countriesMap.get("Finland"));

// Checking key in Map
console.log(countriesMap.has("Finland"));

for (const country of countriesMap) {
  console.log(country);
}

for (const [country, city] of countriesMap) {
  console.log(country, city);
}
