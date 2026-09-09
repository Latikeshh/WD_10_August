// Named function
function add(a, b) {
    console.log(a + b);
}
add(12, 45);

// Anonymous function
(function (a, b) {
    console.log(a + b);
})(4, 5);

// IIFE (Immediately Invoked Function Expression)
(function (a, b) {
    console.log(a + b);
})(55, 7);

// Function expression
let sub = function (a, b) {
    console.log(a - b);
};
sub(5, 2);

// Arrow function
let div = (a, b) => {
    console.log(a / b);
};
div(34, 2);

//nested function
function Grandparent() {
    console.log("i am gp");
    function parent() {
        console.log("i am parent");
        function child() {
            console.log("i am child");
        }
        return child;
    }
    return parent;
}
Grandparent()()()

let d = 56;
function dd() {
    let a = 34;
    let b = 2;
    let c = a - b;
    console.log(d);
    return c;
}
//Objects
//literals
let emp = {
    id: 101,
    name: "fortune",
    city: "Pune"
}
console.log(emp);
console.table(emp);
console.log(Object.keys(emp));
console.log(Object.values(emp));
//Constructor Function
let emp1 = {
    id: 101,
    name: "fortune",
    address: {
        area: "Snagar",
        city: "Pune"
    }
}
console.log(emp1);
console.table(emp1);
console.log(Object.keys(emp1));
console.log(Object.values(emp1));
