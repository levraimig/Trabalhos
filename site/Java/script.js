function logar(){

    var email = document.getElementById("email");
    var senha = document.getElementById("senha");

    if(email.value == "migpaniz@gmail.com" && senha.value == "migloro123"){
        localStorage.setItem("click", true)
        

        window.location.href = "Site.html";
    }else{
        alert("Usuario ou senha Invalidos!")
    }

}