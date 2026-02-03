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

// 3-1
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

//3-2
const users = [
  {
    _id: "ab12ex",
    username: "Alex",
    email: "alex@alex.com",
    password: "123123",
    createdAt: "08/01/2020 9:00 AM",
    isLoggedIn: false,
  },
  {
    _id: "fg12cy",
    username: "Asab",
    email: "asab@asab.com",
    password: "123456",
    createdAt: "08/01/2020 9:30 AM",
    isLoggedIn: true,
  },
  {
    _id: "zwf8md",
    username: "Brook",
    email: "brook@brook.com",
    password: "123111",
    createdAt: "08/01/2020 9:45 AM",
    isLoggedIn: true,
  },
  {
    _id: "eefamr",
    username: "Martha",
    email: "martha@martha.com",
    password: "123222",
    createdAt: "08/01/2020 9:50 AM",
    isLoggedIn: false,
  },
  {
    _id: "ghderc",
    username: "Thomas",
    email: "thomas@thomas.com",
    password: "123333",
    createdAt: "08/01/2020 10:00 AM",
    isLoggedIn: false,
  },
];

const products = [
  {
    _id: "eedfcf",
    name: "mobile phone",
    description: "Huawei Honor",
    price: 200,
    ratings: [
      { userId: "fg12cy", rate: 5 },
      { userId: "zwf8md", rate: 4.5 },
    ],
    likes: [],
  },
  {
    _id: "aegfal",
    name: "Laptop",
    description: "MacPro: System Darwin",
    price: 2500,
    ratings: [],
    likes: ["fg12cy"],
  },
  {
    _id: "hedfcg",
    name: "TV",
    description: "Smart TV:Procaster",
    price: 400,
    ratings: [{ userId: "fg12cy", rate: 5 }],
    likes: ["fg12cy"],
  },
];

// a
// function newUser() {
//   let name = prompt("Enter the user's name: ");
//   let user_email = prompt("Enter your email: ");
//   let password = prompt("Enter the user's password: ");

//   let userExist = users.some((users) => users.email == user_email);

//   if (userExist) {
//     return alert("Registration Failed! A user with this email already exist.");
//   } else {
//     const formattedUser = {
//       _id: Math.random().toString(36).substring(2, 8),
//       username: name,
//       email: user_email,
//       password: password,
//       createdAt: new Date().toLocaleString(),
//       isLoggedIn: false,
//     };
//     users.push(formattedUser);
//     return alert("SUCCESS! Account Created.");
//   }
// }
// newUser();

// b
// function signIn() {
//   let name = prompt("Enter the user's name: ");
//   let password = prompt("Enter the user's password: ");

//   const foundUser = users.find((users) => users.username == name);

//   if (foundUser) {
//     if (foundUser.password == password) {
//       alert(`Welcome back, ${foundUser.username}!`);
//       foundUser.isLoggedIn = true;
//     } else {
//       alert("Try again. Wrong password");
//     }
//   } else {
//     alert("User not found.");
//   }
// }
// signIn();

// 3
// a
// const rateProduct = () => {
//   let total_rating = 0;
//   for (const product of products) {
//     for (const ratingRecord of product.ratings) {
//       total_rating += ratingRecord.rate;
//     }
//   }
//   return total_rating;
// };
// console.log("Total Rating: ", rateProduct());

// // b
// function averageRating() {
//   let total_sum = rateProduct();
//   let final_rate = total_sum / products.length;
//   return final_rate;
// }
// console.log("Average Rating: ", averageRating());

//4
const likeProduct = (productID, userID) => {
  const product = products.find((products) => products._id == productID);

  if (product) {
    const alreadyLiked = product.likes.includes(userID);

    if (alreadyLiked) {
      product.likes = product.likes.filter((id) => id !== userID);
      console.log(`Unlike successful for product: ${product.name}`);
    } else {
      product.likes.push(userID);
      console.log(`Added to Like for product: ${product.name}`);
    }
  } else {
    console.log("Product not found!");
  }
};
likeProduct("ab12ex", "fg12cy");
likeProduct("hedfcg", "fg12cy");
