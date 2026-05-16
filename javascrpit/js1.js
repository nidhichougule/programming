// console.log("hello world!!");
// console.log("hii yash");
// console.log("maza dino cha khali me don't wanna lose lihilya");
// console.log("BUT STILL I LOSE IT");

// name="nidhi";
// console.log(name);

// //data types in js
// //primitive data types
// //string
// let name="nidhi";
// console.log(name);
// //number
// let age=22;
// console.log(age);
// //boolean
// let isMarried=false;
// console.log(isMarried);
// //undefined
// let address;
// console.log(address);
// //null
// let city=null;
// console.log(city);
// //bigint
// let bigInt=1234567890123456789012345678901234567890n;
// console.log(bigInt);
// //symbol
// let symbol=Symbol("nidhi");
// console.log(symbol);

// //non-primitive data types
// //object    
// const person={
//     name:"nidhi",
//     age:22,
//     isMarried:false
// };
// console.log(person);
// console.log(typeof person);
// person["age"]=person["age"]+1;

// console.log(person.age);

// const product={
//     name: "parker pen",
//     rating: 15,
//     offer: 4,
//     price: 100
// }
// console.log(product);

//arithmetic operators
// let a=2;
// let b=4;
// console.log("a=",a,"b=",b);
// console.log("a+b=",a+b);
// console.log("a-b=",a-b);
// console.log("a*b=",a*b);
// console.log("a/b=",a/b);
// console.log("a%b=",a%b);
// console.log("a**b=",a**b);

// //unary operators
// console.log("++a=",++a);
// console.log("--b=",--b);
// console.log("a++=",a++);
// console.log("b--=",b--);


// console.log("a=",a);
// console.log("b=",b);

// //assignment operators
// let c=10;
// console.log("c=",c);
// c+=5;
// console.log("c+=5",c);
// c-=3;
// console.log("c-=3",c);
// c*=2;
// console.log("c*=2",c);
// c/=5;
// console.log("c/=5",c);
// c%=3;
// console.log("c%=3",c);
// c**=2;
// console.log("c**=2",c);

// comparison operators
// let x=5;
// let y=10;
// console.log("x=",x,"y=",y); 
// console.log("x==y",x==y);
// console.log("x!=y",x!=y);
// console.log("x>y",x>y);
// console.log("x<y",x<y);
// console.log("x>=y",x>=y);
// console.log("x<=y",x<=y);

// let a=5;
// let b="5";
// console.log("a==b",a==b);
// // == operator compares only values and ignores data types
// // === operator compares both values and data types
// console.log("a===b",a===b);
// console.log("a!=b",a!=b);
// console.log("a!==b",a!==b);

//logical operators
// let p=5;
// let q=10;
// console.log("p=",p,"q=",q);
// console.log("and",p>=5 && q>5);
// console.log("or",p>3 || q<5);
// console.log("not", !(p>3 && q>5));

//conditional statements
//if statement
// let mode="dark";
// if(mode=="dark"){
//     color="black";
// }
// if(mode=="light"){
//     color="white";
// }   
// console.log("color=",color);

//if-else statement
// let mode="dark";
// if(mode=="dark"){
//     color="black";
// }
// else{
//     color="white";
// }
// console.log("color=",color);

//else if statement
// let mode="grey";
// if(mode=="dark"){
//     color="black";
// }
// else if(mode=="dim"){
//     color="pink";
// }
// else{
//     color="white";
// }
// console.log("color=",color);

// ternary operators
// let age = 20;
// result= age>18?"adult":"not adult";
// console.log(result);

//user input no. and check divisible by 5 or not 
// num= prompt("check");
// if (num%5==0){
//     console.log("divisible by 5");
// }
// else{
//     console.log("not divisible by 5");  
// }


// //as pers tudent marks print grade
// marks=prompt("enter marks");
// if (marks<=100 && marks>=80){
//     console.log("grade A");
// }
// else if (marks<80 && marks>=60){
//     console.log("grade B");
// }
// else if (marks<60 && marks>=40){
//     console.log("grade C");
        
// }
// else if (marks<40 && marks>=20){
//     console.log("grade D");
// }
// else if (marks<20 && marks>=0){
//     console.log("grade E");
// }
// else{
//     console.log("invalid marks");

// }

// loop in js
// for loop
// for(i=0;i<5;i++){
//     console.log(i);
// }

// while loop
// let i=0;
// while(i<5){
//     console.log(i);
//     i++;
// }

// for-of loop
// let srtvar="nidhi";
// let size=0;
// for (let i of srtvar){
//     console.log("i=",i);
//     size++;
// }
// console.log("size=",size);

// //for-in loop
// let student={
//     name:"nidhi",
//     age:22,
//     isMarried:false

// }
// for (let key in student){
//     console.log(key,student[key]);
// }

//print even btw 1 to 100
// for(i=1;i<=100;i++){
//     if(i%2==0){
//         console.log(i);
//     }
//     else{
//         continue;
    
//     }
// }

let y=16;
let guess=prompt("guess the number");
while (guess!=y){
    guess=prompt("u guess the wrong number, enter new no. again");
}
console.log("u guess the right number");
