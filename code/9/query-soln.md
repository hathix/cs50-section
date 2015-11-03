**Zapchat challenge: [https://github.com/hathix/cs50-section/blob/master/handouts/week9.md](https://github.com/hathix/cs50-section/blob/master/handouts/week9.md)**

# SELECT

```sql
SELECT * FROM users WHERE id = ?
```

# INSERT

```sql
INSERT INTO zaps (sent_from, sent_to, length, seen) VALUES (?, ?, ?, ?)
```

# UPDATE

```sql
UPDATE users SET score = score + ? WHERE id = ?
```
