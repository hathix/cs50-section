# users

column name | type        | primary key? | auto increment?
----------- | ----------- | ------------ | ---------------
id          | INT         | yes          | yes
username    | VARCHAR(15) |              |
score       | INT         |              |

# zaps

column name | type    | primary key? | auto increment?
----------- | ------- | ------------ | ---------------
id          | INT     | yes          | yes
sent_from   | INT     |              |
sent_to     | INT     |              |
length      | INT     |              |
seen        | BOOLEAN |              |
