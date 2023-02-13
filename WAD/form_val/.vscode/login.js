function check(){
    var empnames=document.getElementById('empname').value;
    var pass=document.getElementById('pass').value;

    var getempname=localStorage.getItem('empname');
    var getpass=localStorage.getItem('password');
    if(getempname==empnames){
        if(getpass==pass){
            alert("login successfull");

        }
        else{
            alert("worng password");

        }

    }
    else{
        alert('invalid empname');
        
    }
}