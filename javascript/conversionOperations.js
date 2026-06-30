let score= "33";

// console.log(typeof score);
// console.log(typeof (score));

let valueInNumber = Number(score);
// console.log(valueInNumber);
// console.log(typeof valueInNumber);

// 33 => 33
// 33ab => NaN
// true => 1 , false => 0

let isLoggedIn = 1;
let booleanIsLoggedIn = Boolean(isLoggedIn);
console.log(booleanIsLoggedIn);
// 1=> true, 0 => false
// "" => false, "abc" => true

let someNumber = 16;
let stringNumber = String(someNumber);
console.log(stringNumber, typeof stringNumber);
// 16 => "16"