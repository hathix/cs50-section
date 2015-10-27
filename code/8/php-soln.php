<?php
    // Try out this code at phpfiddle.org!

    $drinks = [
        ["name" => "Coke", "price" => 2.50],
        ["name" => "Sprite", "price" => 4.00],
        ["name" => "Water", "price" => 8.99]
    ];
?>

<table>
    <tr>
        <th>Name</th>
        <th>Price</th>
    </tr>
    <?php foreach ($drinks as $drink): ?>
        <tr>
            <td><?= $drink["name"] ?></td>
            <td><?= $drink["price"] ?></td>
        </tr>
    <?php endforeach; ?>
</table>
