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
- counter button example

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

## Arrays

```js
// mixed types in arrays
var numbers = [1, 2, 3];
var stuff = ["Cherry", 43.5, ["a", "b", "c"]];

// prints 1, 2, 3
for (var i = 0; i < numbers.length; i++) {
    console.log(numbers[i]);
}

// prints [1, 2, 3, 4]
numbers.push(4);
console.log(numbers);
```

## Objects

```js

var movie = {
    title: "Moneyball",
    year: 2011,
    tags: ["baseball", "oakland"],
    synopsis: function() {
        // `this` gives access to the object's other fields
        console.log(this.title + ": " + this.year);
    }
};

// prints 2011
console.log(movie.year);

// prints "Harry Potter"
movie.title = "Harry Potter";
console.log(movie.title);

// prints "Harry Potter: 2011"
console.log(movie.synopsis());
```

## Ajax

```js
var arguments = {
    key: "value"
};
$.getJSON("api-endpoint.php", arguments)
.done(function(data, textStatus, jqXHR) {
    // success!
    // data is a JavaScript object; ignore the other 2 variables
    console.log(data);
})
.fail(function(jqXHR, textStatus, errorThrown) {
    // failure!
    // errorThrown provides error info; ignore the other 2 variables
    console.log(errorThrown.toString());
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
