var houseKeeper1={
    yearsOfExperience:12,
    name: "Jane",
    cleaningRepertoire: ['bathroom','lobby', 'bedroom']
}
function HouseKeeper (yearsOfExperience,name,cleaningRepertoire) {
    this.yearsOfExperience=yearsOfExperience
    this.name=name
    this.cleaningRepertoire=cleaningRepertoire
}

var houseKeeper2 = new HouseKeeper(9,"Tom", ["lobby","bedroom"])
console.log(houseKeeper2.name)