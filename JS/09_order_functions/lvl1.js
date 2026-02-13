// Level 1
const countries = ['Finland','Sweden','Denmark', 'Norway', 'Sweden', 'Iceland']
const names = ['Asabeneh','Mathias','Elias','Brook']
const numbers = [1,2,3,4,5,6,7,8,9,10]
const products = [
  { product: 'banana', price: 3 },
  { product: 'mango', price: 6 },
  { product: 'potato', price: ' ' },
  { product: 'avocado', price: 8 },
  { product: 'coffee', price: 10 },
  { product: 'tea', price: '' },
]

const printArr = (arr) => {
  console.log(arr)
}

// countries.forEach(printArr)
// names.forEach(printArr)
// numbers.forEach(printArr)

const makeUpperCase = (name) =>{
  return name.toUpperCase();
}
// const upperCountry = countries.map(makeUpperCase)
// console.log(upperCountry)

const getLength = (country) =>{
  return country.length
}
// const countryLength = countries.map(getLength)
// console.log(countryLength)

const sqrNum = (numbers) =>{
  return numbers * numbers
}
// const getSqr = numbers.map(sqrNum)
// console.log(getSqr)

// const upperNames = names.map(makeUpperCase)
// console.log(upperNames)

const getPrice = (item) =>{
  return item.price
}
// const prices = products.map(getPrice)
// console.log(prices)

const countLand = (country) =>{
  return country.includes('land');
}
// const countriesLand = countries.filter(countLand);
// console.log(countriesLand)

const count6 = (country) =>{
  return country.length == 6
}
// const countries6Ch = countries.filter(count6)
// console.log(countries6Ch)

const countnot6 = (country) =>{
  return country.length != 6
}
// const countriesNot6Ch = countries.filter(countnot6)
// console.log(countriesNot6Ch)

const countNoE = (country) =>{
  return country[0] != 'E'
}
// const countriesNoE = countries.filter(countNoE)
// console.log(countriesNoE)

const priceChecker = products.filter((item) => {
  return typeof item.price === 'number'
})
// console.log(priceChecker)

const getStringList = products.filter(item => typeof item.price === 'string')
// console.log(getStringList)

const sum = numbers.reduce((acc, cur) => acc + cur, 0)
// console.log(sum)

const concatSentenceArr = countries.reduce((acc, cur, index, array) =>{
  if (index === 0) {
   return cur 
  }else if(index == array.length - 1){
  return acc + " and " + cur
  }else{
    return acc + ", " + cur
  }
},"")
// console.log(`Estonia ${concatSentenceArr} are north European countries`)

// Another PRO way to this instead of using reduce
// const middlePart = countries.slice(0, -1).join(', ');
// const lastPart = countries[countries.length - 1];
// console.log(`Estonia ${middlePart} and ${lastPart} are north European countries`)

const checkNameLength = names.some(name => name.length > 7)
// console.log(checkNameLength)

const checkCountLand = countries.every(country => country.includes('land'))
// console.log(checkCountLand)

const searchCountry = countries.find(country => country.length == 6)
// console.log(searchCountry)

const indexOfCountry = countries.findIndex(country => country.length == 6)
// console.log(indexOfCountry)

const findIndexByName = (name) => (country) => country.includes(name)
console.log(countries.findIndex(findIndexByName("Norway")))
console.log(countries.findIndex(findIndexByName("Russia")))
