// Date
let date = new Date();

// getFullYear()
// Returns the year
console.log(date.getFullYear());

// getMonth()
// Returns the month
// January = 0
console.log(date.getMonth());

// getDate()
// Returns the day of the month
console.log(date.getDate());

// getDay()
// Returns the day of the week
// Sunday = 0
console.log(date.getDay());

// getHours()
// Returns the hours
console.log(date.getHours());

// getMinutes()
// Returns the minutes
console.log(date.getMinutes());

// getSeconds()
// Returns the seconds
console.log(date.getSeconds());

// setFullYear()
// Changes the year
date.setFullYear(2027);
console.log(date);
// setMonth()
// Changes the month

date.setMonth(5);
console.log(date);

// setDate()
// Changes the day
date.setDate(15);
console.log(date);

// toDateString()
// Converts date to readable date string
console.log(date.toDateString());

// toTimeString()
// Converts time to readable string
console.log(date.toTimeString());

// toISOString()
// Converts date to ISO format
console.log(date.toISOString());

// toLocaleDateString()
// Returns date according to local format
console.log(date.toLocaleDateString());

// toLocaleTimeString()
// Returns time according to local format
console.log(date.toLocaleTimeString());

// Date.now()
// Returns current time in milliseconds
console.log(Date.now());

// Date.parse()
// Converts date string into milliseconds
console.log(Date.parse("2026-09-03"));