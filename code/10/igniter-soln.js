var activeIndex = 0;
var people = [
  { name: "David Malan", age: 38, bio: "This is CS50." },
  { name: "Neel Mehta", age: 19, bio: "Swipe right; I'm your TF." },
  { name: "John Harvard", age: 379, bio: "Forever young." }
];

// loads info about the person at `activeIndex`.
function loadPerson() {
  var person = people[activeIndex];
  var templateFunction = _.template(
    "<h3><strong><%- name %></strong>, <%- age %></h3><p><%- bio %></p>"
  );
  var htmlString = templateFunction(person);
  $("#person-info").html(htmlString);
}

// loads the first person
loadPerson();

// advance to the next person when the user swipes
$("#like").on("click", function(){
  if (activeIndex < people.length - 1) {
    activeIndex++;
  }
  loadPerson();
});
// optional
$("#dislike").on("click", function(){
  if (activeIndex < people.length - 1) {
    activeIndex++;
  }
  loadPerson();
});
