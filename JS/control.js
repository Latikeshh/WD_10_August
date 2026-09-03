//control statements//let num=34;// let num = prompt("Enter any number")// if (num%2==0) {//     console.log("Even number");// }// else{//     console.log("Odd Number");// }

// let no = prompt("Enter any number")
// if (no > 0) {
//     console.log("Positive number");
// }
// else {
//     console.log("Negative Number");
// }

// let marks = prompt("Enter your mark");
// if (marks == 65) {
//     console.log("You are eligible for next session");

// } else if (marks == 75) {
//     console.log("you are eligible for next session with");

// } else if (marks >= 76) {
//     console.log("you can join soft dev course at FCT");

// } else {
//     console.log("Go and keep studying");

// }

// grade system
// let mark = prompt("Enter your marks to check ur grades");
// if (marks >= 85) {
//     console.log("You get a A Grade");
// } else if (marks >= 75) {
//     console.log("You get a B Grade");
// } else if (marks >= 65) {
//     console.log("You get a C Grade");
// } else {
//     console.log("You get a A Grade");
// }

let time = 12;
switch (time) {
    case 7:
        console.log("This is morning");
        break;
    case 12:
        console.log("This is Afternoon");
        break;
    case 4:
        console.log("This is Evening");
        break;
    case 10:
        console.log("This is night");
        break;

    default:
        console.log("Invalid input");
}

let signal = "red";
switch (signal) {
    case "red":
        console.log("STOP");
        break;
    case "green":
        console.log("GO");
        break;
    case "yellow":
        console.log("Wait and go");
        break;

    default:
        console.log("Invalid input");
}

//for loop syntax 
// for (initalization; condition; incre/decre) {
//     block of code   
// }

// let a;
// for (let a = 1; a <= 50; a++) {
//     //console.log(a);
//     console.log("this is sept",a);
// }
//initialization
// while (condition) {
//     block of code
// incre/decrement
// }

let num = 1;
while (num <= 50) {
    if (num % 2 == 0) {
        // console.log("even", num);
        // document.write("\n even",num,"\n")
    }
    num++
}

//do-while 
//exist control loop
// do {
    //block of code
// } while (condition);

let i=1;
do {
    console.log("Happy Birthday",i);
    i++;
} while (i<=50);//i is less then 50.