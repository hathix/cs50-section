# Neel Mehta's CS50 Section, Fall 2015

## About me
Neel Mehta '18  
neelmehta@college.harvard.edu  
(215) 990-6434  


## Grading

Psets are graded along the axes of:

* **Scope: did you do every part of the pset?** (This is pretty easy to get full points on.)
* **Correctness: does your code work?** We run tests on your programs and make sure they produce the desired output. Running `check50` is a great start.
* **Design: did you solve the problem effectively?** This is subjective, but it's all about producing efficient, well-designed code. Ask me if you need pointers.
* **Style: is your code well-formatted?** These should be easy points -- just make sure your programs pass `style50`.

When I'm grading your psets, I'll focus more on qualitative feedback (comments) -- those matter more than the numerical score you get. Using my comments will probably be the best way for you to improve over the semester, which is what I care the most about.

## Resources
* C language reference: <https://reference.cs50.net/>
* CS50 Study: <https://study.cs50.net/>
* CS50 Discuss: <https://cs50.harvard.edu/discuss>
* CS50 Style Guide: <https://manual.cs50.net/style/>
* Handouts and practice problems: <https://github.com/hathix/cs50-section>

## General pset tips
`style50` will make sure your style is OK. It's great at catching dumb syntax mistakes, so use it whenever you get strange compilation errors. And, of course, use it before you submit!

```sh
style50 my-file.c
```

`check50` will run tests to make sure your program gives the expected output when given some input. Make sure your program passes all of its tests before you submit! Most psets have a `check50`; check the pset spec to find them!

Generally, here's how I advise you approach psets:

* The algorithms -- the logic -- are the hardest parts of the pset. For pset1, it was figuring out how many "#"'s and spaces to print on any line. For pset2, it's figuring out how to rotate the text properly. Work out your logic on paper before you even touch your computer.
* Find a pset partner. Just talking to someone makes your thinking much clearer. It's also nice to have someone to spend those long pset hours with. Make friends in section, office hours, your entryway, etc. Or just tell me and I can put you in touch with someone!
* Go to office hours early in the week: Monday or Tuesday. You'll encounter smaller crowds and get more time from TFs.
* Start the psets well before you come to section so that you have specific, actionable questions I can help you with.

## pset2 tips

### Miscellaneous tips

* Make sure you check if `getString` returns `NULL`.
* Use `printf` to print error messages if the user doesn't give the right command-line input.
* When encrypting text for Caesar and Vigenere, use modulo (`%`) to make sure your letters wrap around from, e.g., Z to A.

### The hardest parts of this pset

* Getting your letter-rotating algorithm right. Work out the math on paper before you start coding.
* All the little things: validating input, making sure you don't miss anything in your `for` loops, etc.

## Loops

## Arrays

## Strings

## Command-line arguments

## Functions
