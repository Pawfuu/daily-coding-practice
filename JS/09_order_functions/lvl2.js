// LVL2
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

const totalPrice = products
.filter(item => typeof item.price === 'number')
.reduce((acc, cur) => acc + cur.price, 0)
// console.log(totalPrice)

const sumPrice = products.reduce((acc, cur) => {
  if(typeof cur.price === 'number'){
    return acc + cur.price
  }else{
    return acc
  }
}, 0)
// console.log(sumPrice)

const categorizeCountries = (pattern) => {
  return  countries.filter( country => country.includes(pattern))
}
// console.log(categorizeCountries("land"))
// console.log(categorizeCountries("ia"))
// console.log(categorizeCountries("island"))
// console.log(categorizeCountries("stan"))

const countsLetter = countries
.map((element) => element[0])
.reduce((acc, cur) => {
  // check if key or letter is already exist in the object 
  // if(acc[cur]){
  //   acc[cur]++;
  // }else{
  //   acc[cur] = 1;
  // }
  // shortcut - returns 0 if undefined and and adds 1
  acc[cur] = (acc[cur] || 0) + 1;
  return acc;
}, {})
const formattedArray = Object.entries(countsLetter)
.map(([letter, count])=>{
  return {letter: letter, count: count}
})

// 7
const mostFrequent = formattedArray.reduce((winner, contender)=>{
  if(winner.count < contender.count){
    return contender // becomes the new winner
  }
  return winner // stays 
})
console.log(mostFrequent)


const getFirstTenCountries = countries
.filter((country, index)=>{
  return index < 10
})
// console.log(getFirstTenCountries)

const getLastTenCountries = (arr) =>{
  return arr.filter((country, index)=>{
    return index >= arr.length - 10;
  })
}
// console.log(getLastTenCountries(countries))

