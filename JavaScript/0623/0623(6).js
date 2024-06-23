var name = prompt("What is your name?")
var up = name.slice(0,1)
var down = name.slice(1,name.length)
alert("Hello "+ up.toUpperCase() + down.toLowerCase())