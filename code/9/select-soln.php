<?php
    // you've been given the user's username from a form
    $username = $_POST["username"];

    // step 1. get the user's id given their username
    $result = CS50::query("SELECT id FROM users WHERE username = ?", $username);
    if ($result === false)
    {
        apologize("Error accessing user data!");
    }

    // note the need for [0]
    $user_id = $result[0]["id"];

    // step 2. get all zaps sent to user
    $zaps = CS50::query("SELECT * FROM zaps WHERE sent_to = ?", $user_id);
    if ($zaps === false)
    {
        apologize("Error getting zaps!");
    }

    // step 3. print out all zaps using PHP (hint: use foreach)
    ?>
    <ul>
        <?php foreach ($zaps as $zap): ?>
            <li>
                <?= $zap["length"] ?> seconds
                <?php if ($zap["seen"]): ?>
                    (seen)
                <?php endif; ?>
            </li>
        <?php endforeach; ?>
    </ul>
