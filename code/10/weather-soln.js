// cities and their Yahoo Weather codes
var cities = [
  {name: "Cambridge, MA", code: 2373572 },
  {name: "New York, NY", code: 2459115 },
  {name: "San Diego, CA", code: 2487889 },
];

// returns a URL you can access to get weather information for a certain city
// e.g. https://query.yahooapis.com/v1/public/yql?q=select%20item.condition%20from%20weather.forecast%20where%20woeid%20%3D%202373572&format=json&env=store%3A%2F%2Fdatatables.org%2Falltableswithkeys
function getAjaxURL(cityCode) {
  return "https://query.yahooapis.com/v1/public/yql?q=select%20item.condition%20from%20weather.forecast%20where%20woeid%20%3D%20" + cityCode + "&format=json&env=store%3A%2F%2Fdatatables.org%2Falltableswithkeys";
}

// loads the interface with the weather info for the given city.
function loadWeather(city) {
  // fill in city name
  $('#weather-city').html(city.name);

  // grab city weather
  $.getJSON(getAjaxURL(city.code))
    .done(function(data, textStatus, jqXHR) {
      // grab `condition` out of `data`
      var condition = data.query.results.channel.item.condition;
      console.log(condition);

      // render HTML for weather conditions
      var templateFunction = _.template(
        "<strong><%- temp %>F</strong> and <%- text %>"
      );
      var htmlString = templateFunction(condition);
      $('#weather-conditions').html(htmlString);
    })
    .fail(function(jqXHR, textStatus, errorThrown) {
      console.log(errorThrown.toString());
    });
}

loadWeather(cities[0]);
