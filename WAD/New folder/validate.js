var nameid;
function myname(){
    let count=0;
    nameid=document.getElementById("name");
    let ename = nameid.Value;             
    for(i=0;i<ename.length;i++){
        if((ename.charCodeAt(i)>=65 && ename.charCodeAt(i)<=90) || 
        (ename.charCodeAt(i)>=97 && ename.charCodeAt(i)<=122) ||
        (ename.charCodeAt(i)==32)){
            count += 1;
        }
    }
    if (count!=ename.length){
        alert("enter the name correctly");
        nameid.Value="";
    }

}