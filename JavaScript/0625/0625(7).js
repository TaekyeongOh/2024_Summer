var names=["Angela","Ben","Jenny"]
var numberOfPeople = names.length
var n = Math.random()
n=Math.floor(n*numberOfPeople)

function whosPaying(names,n) {
    console.log((names[n])+" is going to buy lunch today!")
}

whosPaying(names,n)