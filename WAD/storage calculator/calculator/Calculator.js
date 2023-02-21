var nameID = document.getElementById("name");
var basicPayID = document.getElementById("basicPay");
var hraID = document.getElementById("hra");
var deductionID = document.getElementById("deductions");
var basicPayValue, hraValue, deductionValue, netPayValue, grossPayValue;
document.getElementById("countSubmit").innerHTML = "<mark>Total Submit Count : "+localStorage.submitCount+"</mark>";
var date = new Date().toDateString();
document.getElementById("date").innerHTML = "<mark>System Date : "+date+"</mark>";
function empNameFunction(){
    let count = 0;
    let ename = nameID.value;
    for(i=0;i<ename.length;i++){
        if((ename.charCodeAt(i)>=65 && ename.charCodeAt(i)<=90) || 
        (ename.charCodeAt(i)>=97 && ename.charCodeAt(i)<=122) ||
        (ename.charCodeAt(i)==32)){
            count += 1;
        }
    }
    if(count != ename.length){
        alert("Employee Name Can't have Non Alpha Characters i.e., Only Lower and Upper case Alphabets are Allowed");
        nameID.value='';
    }
}
function empIdFunction(){
    let count = 0;
    empIdTag = document.getElementById("empId");
    empId = empIdTag.value;   
    for(i=0;i<empId.length;i++){
        if((empId.charCodeAt(i)>=65 && empId.charCodeAt(i)<=90) || 
        (empId.charCodeAt(i)>=97 && empId.charCodeAt(i)<=122) ||
        (empId.charCodeAt(i)>=48 && empId.charCodeAt(i)<=57)){
            count += 1;
        }
    }
    if(count != empId.length){
        alert("Employee Id Can't have Special Characters i.e., Only Alpha Numeric characters are Allowed");
        empIdTag.value='';
    }
}
function basicPayFunction(){
    basicPayValue = basicPayID.value;
    hraValue = basicPayValue * 0.05;
    hraID.value = hraValue;
    deductionValue = basicPayValue * 0.02;
    deductionID.value = deductionValue;
}
function calculateFunction(){
    if(localStorage.submitCount){
        localStorage.submitCount = Number(localStorage.submitCount)+1;
    }
    else{
        localStorage.submitCount = 1;
    }
    console.log(localStorage.submitCount);
    netPayValue = Number(basicPayValue) + Number(hraValue);
    grossPayValue = Number(basicPayValue) + Number(hraValue) - Number(deductionValue);
    let answerText1 = "Net Pay Value : " + String(netPayValue);
    let answerText2 = "Gross Pay Value : " + String(grossPayValue);
    alert(answerText1 + '\n' + answerText2);
}