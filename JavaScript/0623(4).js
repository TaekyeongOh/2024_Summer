var write=prompt("What would you like to write?")
var len=write.length

alert("You have written"+len+ "characters, you have " +(140-len)+"characters left.")
alert(write.slice(0,140))