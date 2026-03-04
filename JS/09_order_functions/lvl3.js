// 3.1
countries.sort((a, b) => {
  if (a.name < b.name) return -1;
  if (a.name > b.name) return 1;
  return 0;
});

// console.log(countries.map((country)=> country.name))
const sortByPop = countries.sort((a, b) => {
  return a.population - b.population;
});
// console.log(sortByPop.map((population)=>
//     "Country: " + population.name + " Population: " + population.population))

const sortedByCapital = countries.sort((a, b) => {
  if (!a.capital) return 1;

  return a.capital.localeCompare(b.capital);
});
// console.log(sortedByCapital.map((capital)=> {
//    return `Capital: ${capital.capital}`
// }))

// 3.2

const mostSpokenLanguages = (arr, amount) => {
  const countLanguages = arr
    .flatMap((country) => country.languages)
    .reduce((acc, cur) => {
      acc[cur] = (acc[cur] || 0) + 1;
      return acc;
    }, {});

  const formattedArray = Object.entries(countLanguages).map(
    ([language, count]) => {
      return { language: language, count: count };
    },
  );

  const sorted = formattedArray.sort((a, b) => {
    return a.count - b.count;
  });

  return sorted.slice(0, amount);
};

// console.log(mostSpokenLanguages(countries, 10));

// 3.3
const mostPopulatedCountries = (arr, amount) => {
  const countPopulation = arr.sort((a, b) => {
    return b.population - a.population;
  });
  const sort = countPopulation.slice(0, amount);
  return sort.map((element) => {
    return {
      country: element.name,
      population: element.population,
    };
  });
};

// console.log(mostPopulatedCountries(countries, 10));

// 3.4
const statistics = {
  ages: [
    31, 26, 34, 37, 27, 26, 32, 32, 26, 27, 27, 24, 32, 33, 27, 25, 26, 38, 37,
    31, 34, 24, 33, 29, 26,
  ],

  count() {
    return this.ages.length;
  },

  sum() {
    return this.ages.reduce((acc, cur) => acc + cur, 0);
  },

  min() {
    const min = this.ages.slice().sort((a, b) => a - b);
    return min[0];
  },

  max() {
    const max = this.ages.slice().sort((a, b) => b - a);
    return max[0];
  },

  range() {
    const maxValue = this.max();
    const minValue = this.min();
    const range = maxValue - minValue;
    return range;
  },

  mean() {
    return this.sum() / this.count();
  },

  median() {
    const sort = [...this.ages].sort((a, b) => a - b);

    const count = this.count();
    const mid = Math.floor(count / 2);

    if (count % 2 == 0) {
      return sort[mid];
    } else {
      return sort[mid] + sort[mid - 1] / 2;
    }
  },
  mode() {
    const countNum = this.ages.reduce((acc, cur) => {
      acc[cur] = (acc[cur] || 0) + 1;
      return acc;
    }, {}); // this is the accumulator
    const formatMode = Object.entries(countNum).map(([mode, count]) => {
      return { mode: mode, count: count };
    });
    const sorted = formatMode.sort((a, b) => {
      return b.count - a.count;
    });
    const result = sorted[0];
    return `(${result.mode}, ${result.count})`;
  },

  var() {
    const mean = this.mean();

    const sumOfSqrs = this.ages.reduce((acc, age) => {
      const diff = age - mean;
      return acc + diff * diff;
    }, 0);

    const result = sumOfSqrs / this.ages.length;
    return Math.round(result * 10) / 10;
  },

  std() {
    const value = this.var();
    const stdVar = Math.sqrt(value);

    return Math.round(stdVar * 10) / 10;
  },

  freqDist() {
    const counts = this.ages.reduce((acc, cur) => {
      acc[cur] = (acc[cur] || 0) + 1;
      return acc;
    }, {});

    return Object.entries(counts)
      .map(([age, count]) => {
        const percentage = (count / this.count()) * 100;
        return [percentage, Number(age)];
      })
      .sort((a, b) => b[0] - a[0]);
  },
};

console.log("Count:", statistics.count());
console.log("Sum:", statistics.sum());
console.log("Min:", statistics.min());
console.log("Max:", statistics.max());
console.log("Range:", statistics.range());
console.log("Mean:", statistics.mean());
console.log("Median:", statistics.median());
console.log("Mode:", statistics.mode());
console.log("Mode:", statistics.mode());
console.log("Variance:", statistics.var());
console.log("Standard Deviation:", statistics.std());
console.log("Frequency Distribution:", statistics.freqDist());
