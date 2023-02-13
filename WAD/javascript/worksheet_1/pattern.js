let n=5;
let star="*";
let hash="#";
for(i=1;i<=n;i++){
    for (j=1;j<=i;j++){
    if(i%2!==0){
        process.stdout.write(star)
    }
    else{
        process.stdout.write(hash)
    }
    
}
console.log();
}
