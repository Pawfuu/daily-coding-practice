// // 1
// const dog = {
//     name: `Jv`,
//     legs: 4,
//     color: `black`,
//     age: 12,

//     bark: function(){
//         return `woof woof`
//     }
// }
// console.log(dog.name)
// console.log(dog.legs)
// console.log(dog.color)
// console.log(dog.age)
// console.log(dog.bark())

// dog.getDogInfo = function(){
//      this.breed = 'Poodle'
//     return this.breed
// }

// console.log(dog)
// console.log(dog.getDogInfo())

// const person = {
//     firstName: 'Asabaneh',
//     lastName: 'Yetayeh',
//     age: 250,
//     country: 'Finland',
//     city: 'Helsinki',
//     skills: [
//         'HTML',
//         'CSS',
//         'JavaScript',
//         'React',
//         'Node',
//         'MongoDB',
//         'Python',
//         'D3.js'
//     ],
//     getFullName: function(){
//         return `${this.firstName} ${this.lastName}`
//     }
// }
// person.nationality = 'Ethiopian'
// person.country = 'Finland'
// person.title = 'teacher'
// person.skills.push('Meteor')
// person.skills.push('SaSS')
// person.isMarried = true

// person.getPersonInfo = function(){
//     let skillsWithout = this.skills
//     .splice(0, this.skills.length - 1)
//     .join(', ')
//     let lastSkill = this.skills.splice(this.skills.length - 1)[0]

//     let skills = `${skillsWithout}, and ${lastSkill}`
//     let fullName = this.getFullName()
//     let statement = `${fullName} is a ${this.title}. \nHe lives in ${this.country}. \nHe teaches ${skills}.`
//     return statement
// }

// // console.log(person)
// console.log(person.getPersonInfo())

// // 2
// const users = {
//   Alex: {
//     email: "alex@alex.com",
//     skills: ["HTML", "CSS", "JavaScript"],
//     age: 20,
//     isLoggedIn: false,
//     points: 30,
//   },
//   Asab: {
//     email: "asab@asab.com",
//     skills: [
//       "HTML",
//       "CSS",
//       "JavaScript",
//       "Redux",
//       "MongoDB",
//       "Express",
//       "React",
//       "Node",
//     ],
//     age: 25,
//     isLoggedIn: false,
//     points: 50,
//   },
//   Brook: {
//     email: "daniel@daniel.com",
//     skills: ["HTML", "CSS", "JavaScript", "React", "Redux"],
//     age: 30,
//     isLoggedIn: true,
//     points: 50,
//   },
//   Daniel: {
//     email: "daniel@alex.com",
//     skills: ["HTML", "CSS", "JavaScript", "Python"],
//     age: 20,
//     isLoggedIn: false,
//     points: 40,
//   },
//   John: {
//     email: "john@john.com",
//     skills: ["HTML", "CSS", "JavaScript", "React", "Redux", "Node.js"],
//     age: 20,
//     isLoggedIn: true,
//     points: 50,
//   },
//   Thomas: {
//     email: "thomas@thomas.com",
//     skills: ["HTML", "CSS", "JavaScript", "React"],
//     age: 20,
//     isLoggedIn: false,
//     points: 40,
//   },
//   Paul: {
//     email: "paul@paul.com",
//     skills: [
//       "HTML",
//       "CSS",
//       "JavaScript",
//       "MongoDB",
//       "Express",
//       "React",
//       "Node",
//     ],
//     age: 20,
//     isLoggedIn: false,
//     points: 40,
//   },
// };

// users.skillCount = function () {
//   let maxSkills = 0;
//   let userskill = "";
//   for (let user in users) {
//     if (users[user].skills) {
//       if (users[user].skills.length > maxSkills) {
//         maxSkills = users[user].skills.length;
//         userskill = user;
//       } // only process if 'skills' exists
//     }
//   }
//   return `The person who has the most skills is ${userskill} and it amounts to ${maxSkills}`;
// };

// users.mernStackUsers = function () {
//   let mernUsers = [];

//   for (let skill in users) {
//     let person = users[skill];

//     if (person.skills) {
//       const isMern =
//         person.skills.includes("MongoDB") &&
//         person.skills.includes("Express") &&
//         person.skills.includes("React") &&
//         person.skills.includes("Node");

//       if (isMern) {
//         mernUsers.push(skill);
//       }
//     }
//   }
//   return `People who are MERN stack developers are: ${mernUsers.join(", ")}`;
// };
// users.user = "Keziah";
// console.log(users.user);

// const keys = Object.keys(users);
// console.log(keys);

// const values = Object.values(users);
// console.log(values);

// console.log(users.skillCount());
// console.log(users.mernStackUsers());

// 3
// const personAccount = {
//   firstName: "Keziah",
//   lastName: "Joy",
//   incomes: [
//     { ammount: 350, description: "Salary" },
//     { ammount: 200, description: "Bonus" },
//   ],
//   expenses: [{ ammount: 100, description: "Food" }],
//   properties: "House",

//   // Calculate total income
//   totalIncome: function () {
//     let total = 0;
//     for (let i = 0; i < this.incomes.length; i++) {
//       total += this.incomes[i].ammount;
//     }
//     return total;
//   },

//   // Calculate total expenses
//   totalExpense: function () {
//     let total = 0;
//     for (let i = 0; i < this.expenses.length; i++) {
//       total += this.expenses[i].ammount;
//     }
//     return total;
//   },

//   // Calculate Balance
//   accountBalance: function () {
//     const balance = this.totalIncome() - this.totalExpense();
//     return balance;
//   },

//   //Add new income
//   addIncome: function () {
//     console.log("\n---ADD INCOME ---");
//     const desc = prompt("Income Description: ");
//     const amt = parseInt(prompt("Income Ammount: "));

//     // Push an Object
//     const newIncome = { ammount: amt, description: desc };
//     this.incomes.push(newIncome);
//     console.log(`Added ${desc}: ${amt}`);
//   },

//   // Add new expense
//   addExpense: function () {
//     console.log("\n--- ADD EXPENSE ---");
//     const desc = prompt("Expense Description: ");
//     const amt = parseInt(prompt("Expense Amount: "));

//     // Push an Object
//     const newExpnse = { ammount: amt, description: desc };
//     this.expenses.push(newExpnse);
//     console.log(`Added ${desc}: ${amt}`);
//   },

//   //SUMMARY
//   accountInfo: function () {
//     return `
//     Name: ${this.firstName} ${this.lastName}
//     Total Income: ${this.totalIncome()}
//     Total Expense: ${this.totalExpense()}
//     ------------------------
//     Current Balance: ${this.accountBalance()}
//     `;
//   },
// };

// console.log("Initial Balance:", personAccount.accountInfo());

// personAccount.addIncome();
// personAccount.addExpense();
// console.log(personAccount.accountInfo());
