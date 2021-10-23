/*let numbers = [2, 4, 6, 10];

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
*/
function validate()
{
    var username = document.getElementById("email").value;
    var password = document.getElementById("password").value;
    if(email== "admin@nmims.edu.in"&& password=="admin@123")
    {
        alert("login successfull");
        return false;
    }
    else if(email== "abc@nmims.edu.in"&& password=="abc@123")
    {
        alert("login successfull");
        return false;
    }
    else if(email== "siddharth.pandya40@nmims.edu.in"&& password=="sid@123")
    {
        alert("login successfull");
        return false;
    }
    else if(email== "aryan.yadav69@nmims.edu.in"&& password=="aryan@123")
    {
        alert("login successfull");
        return false;
    }
    else{
        alert("login Sucessfull");
    }
}