const arr=[1,-2,5,-5,-8,88,-99,-9];
let i,pos=0,neg=0;
for(i=0;i<arr.length;i++){
    if(arr[i]>=0){
        pos++;
    }
    else{
        neg++;
    }
}
console.log(`the positive numbers are ${pos}`);
console.log(`the negative numbers are ${neg}`);
