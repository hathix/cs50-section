# CS50 Section. Week 10. 11/10/15.
_Tuesdays 7:00-8:30pm, Science Center 309A. [https://github.com/hathix/cs50-section](https://github.com/hathix/cs50-section)._

Neel Mehta. neelmehta@college.harvard.edu. (215) 990-6434.

Get these handouts at [https://github.com/hathix/cs50-section/tree/master/handouts](https://github.com/hathix/cs50-section/tree/master/handouts).

# Final project
## Useful links
- CS50 APIs (course information, building info, HUDS menus): [https://docs.cs50.net/docs](https://docs.cs50.net/docs)

# JavaScript
## TODOS
- run this all on codepen
- basic JS (objects)
- callbacks

Stuff you gotta know

## Functions

```js
// "function declaration" syntax
function add(a, b) {
    return a + b;
}

// "function literal" syntax
var subtract = function(a, b) {
    return a - b;
};
```

**Functions are variables!**

```js
function call(myFunction, x, y) {
    return myFunction(x, y);
}

// prints 7
console.log(call(subtract, 9, 2));

// prints 12
console.log(call(function(a, b){
    return a * b;
}, 3, 4));
```

## Callbacks
Functions that you pass to other functions are called _callbacks_.

```js
function callback(){
    console.log("Hi!");
};
waitForABitThenRun(callback);
```

## Ajax

```js
var arguments = {
    key: "value"
};
$.getJSON("api-endpoint.php", arguments)
.done(function(data, textStatus, jqXHR) {
    // success!
})
.fail(function(jqXHR, textStatus, errorThrown) {
    // failure!
});
```

## Templating

```js
var templateFunction = _.template("<a href='<%- url %>' class='btn btn-<%- btnClass %>'><%- text %></a>");
var htmlString = templateFunction({
    url: "http://yale.edu",
    btnClass: "danger",
    text: "Safety school"
});
```

**JavaScript**

```js
// utility printing function (don't worry about this)
let write = (text) => {
  let message = $("<p>").html(text + "");
  $("#output").append(message);
};

// variables and functions
let number = 5;
number = number * 3;
write(number);

// creating functions
let writeExcited = (text) => {
    write(text + "!!!")
};

// calling functions
writeExcited("hey");

// calling multi-argument functions
let bigger = Math.max(2, 7);
write(bigger);
```

# jQuery
Here's HTML for a simple counter app:

```html
<div class="row">
  <div class="col-sm-8">
    <p class="lead">
      The counter is <strong id="counter">0</strong>.
    </p>
  </div>
  <div class="col-sm-4">
    <button class="btn btn-success btn-lg" id="add">
      +
    </button>
    <button class="btn btn-info btn-lg" id="clear">
      0
    </button>
  </div>
</div>
```

Here's some JavaScript that makes it interactive using jQuery:

```js
var count = 0;

// event handlers, $, html
$("#add").on("click", function() {
  count = count + 1;
  $("#counter").html(count);
});
```

## Challenge

```js
// clear; do this yourself!
$("#clear").on("click", function() {
  count = 0;
  $("#counter").html(count);
});
```

**New JavaScript (using functions)**

```js
let count = 0;

let update = (newCount) => {
  count = newCount;
  $("#counter").html(newCount);
};

$("#add").on("click", function() {
  update(count + 1);
});

// subtract: do this yourself!
$("#subtract").on("click", function() {
  update(count - 1);
});

// clear: do this yourself!
$("#clear").on("click", function() {
  update(0);
});
```

# Advanced JavaScript and ES6
**HTML for all examples in this section**

```html
<p class="lead" id="output"></p>
```

## Arrays

```js
// utility printing function
let write = (text) => {
  let message = $("<p>").html(text + "");
  $("#output").append(message);
};

// working with arrays
let numbers = [1,2,3];
write(numbers);
write(numbers.length);

// reading and writing at indices
write(numbers[0]);
numbers[0] = numbers[2];
write(numbers[0]);

// mixed types in arrays
let stuff = ["Toothpaste", 29, 1.55];
write(stuff);

// Challenge: swap elements 0 and 2
let temp = stuff[0];
stuff[0] = stuff[2];
stuff[2] = temp;
write(stuff);
```

## Objects

```js
// utility printing function
let write = (text) => {
  let message = $("<p>").html(text + "");
  $("#output").append(message);
};

// object syntax
let mySchool = {
  name: "Harvard",
  year: 1636
};

let theirSchool = {
  name: "Yale",
  year: 1701
};

// reading from objects
write(mySchool.year);
write(theirSchool.name);

// writing to objects
mySchool.year = theirSchool.year;
write(mySchool.year);
```

## Arrays of objects

```js
// utility printing function
let write = (text) => {
  let message = $("<p>").html(text + "");
  $("#output").append(message);
};

// arrays of objects
let schools = [
  { name: "Harvard", year: 1636 },
  { name: "Yale", year: 1701 },
  { name: "Princeton", year: 1746 }
];

// mapping over object arrays
let years = schools.map(school => school.year);
write(years);
```
