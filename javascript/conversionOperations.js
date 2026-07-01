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
// console.log(booleanIsLoggedIn);
// 1=> true, 0 => false
// "" => false, "abc" => true

let someNumber = 16;
let stringNumber = String(someNumber);
// console.log(stringNumber, typeof stringNumber);
// 16 => "16"   

// *********operations*********

let value =3;
let negvalue=-value;
// console.log(negvalue);

// console.log(3 + 2);//addition
// console.log(3 - 2);//subtraction
// console.log(3 * 2);//multiplication
// console.log(3 / 2);//division
// console.log(3 % 2);//modulus

let str1 = "Hello";
let str2 = "World";
let str3 = str1 + " " + str2;
console.log(str3);