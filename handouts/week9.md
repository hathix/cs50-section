# CS50 Section. Week 9. 11/3/15.
_Tuesdays 7:00-8:30pm, Science Center 309A. [https://github.com/hathix/cs50-section](https://github.com/hathix/cs50-section)._

Neel Mehta. neelmehta@college.harvard.edu. (215) 990-6434.

Get these handouts at [https://github.com/hathix/cs50-section/tree/master/handouts](https://github.com/hathix/cs50-section/tree/master/handouts).

# SQL
- getting data with queries
- INSERT
- update
- `$_SESSION`

Let's make Snapchat db! snap score, add user

Let's make an app called ZapChat that lets you send short, self-destructing photo messages to your friends! It's a radical new idea and we're gonna make millions.

Let's say we have a table `users` with the following schema:

column name | type        | primary key? | auto increment?
----------- | ----------- | ------------ | ---------------
id          | INT         | yes          | yes
username    | VARCHAR(15) |              |
score       | INT         |              |

And a table `zaps`, representing the messages, with the following schema:

column name | type | primary key? | auto increment?
----------- | ---- | ------------ | ---------------
id          | INT  | yes          | yes
sent_from   | INT  |              |
sent_to     | INT  |              |
length      | INT  |              |
seen        | BOOL |              |

Where `sent_from` and `sent_to` are `id`s from the `users` table.

## Getting data with SELECT
Let's print summary information about a user:

```php
<?php
    // assume this works
    $user_id = $_POST["id"];

    // query() is a CS50-specific function
    // you could also do `SELECT username, score` for more granular access;
    // `SELECT *` just picks all columns
    $result = query('SELECT * FROM users WHERE id = ?', $user_id);
    if ($result === false)
    {
        // apologize() is a CS50-specific function
        // it prints out an error message and quits the script
        apologize("Error accessing user data!");
    }

    // note the need for [0]
    $username = $result[0]["username"];
    $score = $result[0]["score"];
    print("Hi, $username! Your score is $score.");
?>
```

## Adding data with INSERT
Let's insert a new Zap.

```php
<?php
    $from_id = $_POST["from_id"];
    $to_id = $_POST["to_id"];
    $zap_length = $_POST["length"];

    // note you don't have to specify the id because that's auto-generated
    // for you (because of auto increment)
    $result = query("INSERT INTO zaps (sent_from, sent_to, length, seen) VALUES(?, ?, ?, ?)", $from_id, $to_id, $zap_length, false);
    if ($result === false)
    {
        apologize("Error sending Zap!");        
    }
    print("Zap sent!");
?>
```

## Updating with UPDATE
Let's increase a user's score by 5 points.

```php
<?php
    $user_id = $_POST["id"];
    $points = 5;

    $result = query("UPDATE users SET score = score + ? WHERE id = ?", $points, $user_id);
    if ($result === false)
    {
        apologize("Error updating score!");    
    }
    print("You just got $points more points!");
?>
```

## Challenge!
Let's create a page that prints out all of a user's snaps.

```php
<?php
    // you've been given the user's username from a form
    $username = $_POST["username"];

    // step 1. get the user's id given their username









    // step 2. get all zaps sent to user






    // step 3. print out all zaps using PHP (hint: use foreach)
    ?>
    <ul>








    </ul>
```

# MVC and templating with PHP
Watch this video I made that explains this! This was my part of my CS50 TF application :)

[https://www.youtube.com/watch?v=vqcQD-HmLl8](https://www.youtube.com/watch?v=vqcQD-HmLl8)

# JavaScript
..

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
