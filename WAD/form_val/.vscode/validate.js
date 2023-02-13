function validate(){
    var empname=document.getElementById("empname");
    var password=document.getElementById("pass");
    if(empname.value.trim()=="" || password.value.trim()==""){
        alert("enter all field");
        empname.style.border="solid 1px red";
        return false;
    }
    else if(password.value.trim()>5){
        alert("password is too short");
    } 
    else{
        true;

    }


}

function validates()
  {
    var empname=document.getElementById("empname");
   var letters = /^[A-Za-z]+$/;
   if(empname.value.match(letters))
     {
      return true;
     }
   else
     {
     alert("message");
     
     return false;
     }
  }

function adddata(){
    var empname=document.getElementById("empname").value;
    var password1=document.getElementById("pass").value;
    localStorage.setItem('empname',empname);
    localStorage.setItem('password',password1);
    var empnames=document.getElementById("empname").value;
    var passwords=document.getElementById("pass").value;
    sessionStorage.setItem('empname',empnames);
    sessionStorage.setItem('password',passwords);


}