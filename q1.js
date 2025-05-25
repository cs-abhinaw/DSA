let x=122;
let lastdigit=0;
let sum =0;
while(x>0){
     lastdigit=x%10;
    sum=sum+lastdigit;
    x = Math.floor(x / 10);

    
}
console.log(`count=${sum}`);
