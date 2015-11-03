# CS50 Section. Week 9. 11/3/15.
_Tuesdays 7:00-8:30pm, Science Center 309A. [https://github.com/hathix/cs50-section](https://github.com/hathix/cs50-section)._

Neel Mehta. neelmehta@college.harvard.edu. (215) 990-6434.

Get these handouts at [https://github.com/hathix/cs50-section/tree/master/handouts](https://github.com/hathix/cs50-section/tree/master/handouts).

# SQL
## Challenge: Zapchat
Let's make an app called Zapchat that lets you send short, self-destructing photo messages to your friends! It's a radical new idea and we're gonna make millions.

### Designing the tables
We first need to design a table `users`. Help fill in the rest of the fields:

column name | type | primary key? | auto increment?
----------- | ---- | ------------ | ---------------
id          |      |              |
username    |      |              |
score       |      |              |

And for a table `zaps`, representing the messages:

column name | type | primary key? | auto increment?
----------- | ---- | ------------ | ---------------
id          |      |              |
sent_from   |      |              |
sent_to     |      |              |
length      |      |              |
seen        |      |              |

Where `sent_from` and `sent_to` are `id`s from the `users` table.

Solution: [https://github.com/hathix/cs50-section/blob/master/code/9/tables-soln.md](https://github.com/hathix/cs50-section/blob/master/code/9/tables-soln.md)

### Getting data with SELECT
Let's print summary information about a user:

```php
<?php
    // assume this works
    $user_id = $_POST["id"];

    // CS50::query() is a CS50-specific function

    // TODO: write your query here
    // we want to get the user's username and score, given their id
    $my_query = "";

    $result = CS50::query($my_query, $user_id);
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

Solution: [https://github.com/hathix/cs50-section/blob/master/code/9/query-soln.md](https://github.com/hathix/cs50-section/blob/master/code/9/query-soln.md)

### Adding data with INSERT
Let's insert a new Zap.

```php
<?php
    $from_id = $_POST["from_id"];
    $to_id = $_POST["to_id"];
    $zap_length = $_POST["length"];

    // note you don't have to specify the id because that's auto-generated
    // for you (because of auto increment)

    // TODO: write your query here
    $my_query = "";

    $result = CS50::query($my_query, $from_id, $to_id, $zap_length, false);
    if ($result === false)
    {
        apologize("Error sending Zap!");        
    }
    print("Zap sent!");
?>
```

Solution: [https://github.com/hathix/cs50-section/blob/master/code/9/query-soln.md](https://github.com/hathix/cs50-section/blob/master/code/9/query-soln.md)

### Updating with UPDATE
Let's increase a user's score by 5 points.

```php
<?php
    $user_id = $_POST["id"];
    $points = 5;

    // TODO: write your query here
    $my_query = "";

    $result = CS50::query($my_query, $points, $user_id);
    if ($result === false)
    {
        apologize("Error updating score!");    
    }
    print("You just got $points more points!");
?>
```

Solution: [https://github.com/hathix/cs50-section/blob/master/code/9/query-soln.md](https://github.com/hathix/cs50-section/blob/master/code/9/query-soln.md)

### Big challenge!
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

Solution: [https://github.com/hathix/cs50-section/blob/master/code/9/sql-soln.php](https://github.com/hathix/cs50-section/blob/master/code/9/sql-soln.php)

# MVC and templating with PHP
Watch this video I made that explains this! This was my part of my CS50 TF application :)

[https://www.youtube.com/watch?v=vqcQD-HmLl8](https://www.youtube.com/watch?v=vqcQD-HmLl8)
