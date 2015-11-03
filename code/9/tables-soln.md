# users

column name | type        | primary key? | auto increment?
----------- | ----------- | ------------ | ---------------
id          | INT         | yes          | yes
username    | VARCHAR(15) | no           | no
score       | INT         | no           | no

# zaps

column name | type    | primary key? | auto increment?
----------- | ------- | ------------ | ---------------
id          | INT     | yes          | yes
sent_from   | INT     | no           | no
sent_to     | INT     | no           | no
length      | INT     | no           | no
seen        | BOOLEAN | no           | no
