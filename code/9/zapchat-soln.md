# SELECT

```sql
SELECT * FROM users WHERE id = ?
```

# INSERT

```sql
INSERT INTO zaps (sent_from, sent_to, length, seen) VALUES(?, ?, ?, ?)
```

# UPDATE

```sql
UPDATE users SET score = score + ? WHERE id = ?
```
