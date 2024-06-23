var money=prompt("How much money do you have?")
var limit=money*2/3
var bottles=prompt("How many milk bottles do you want to get?")

function getMilk(bottles,limit) {   
  console.log("leaveHouse");
  console.log("moveRight");
  console.log("moveRight");
  console.log("moveUp");
  console.log("moveUp");
  console.log("moveUp");
  console.log("moveUp");
  console.log("moveRight");
  console.log("moveRight");
  console.log("You can buy "+limit+" bottles of milk");
  console.log("buy "+bottles+" bottles of milk")
  console.log("moveLeft");
  console.log("moveLeft");
  console.log("moveDown");
  console.log("moveDown");
  console.log("moveDown");
  console.log("moveDown");
  console.log("moveLeft");
  console.log("moveLeft");
  console.log("enterHouse");
}
getMilk(bottles,limit)