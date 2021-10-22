let numbers = [2, 4, 6, 10];

numbers.sort((a,b) => a - b);

let min = Infinity;
let pairs = [];

for(let i=0; i+1 <numbers.length; i++) {
    let diff = numbers[i+1] - numbers[i];
    if (diff < min) {
        min = diff;
        pairs = [];
    }
    if(diff === min) {
        pairs.push([numbers[i], numbers[i+1]])
    }
}

console.log(min, pairs);
for(let p of pairs){
    console.log(p.join(' '));
}