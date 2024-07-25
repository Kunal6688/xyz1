let menu = document.querySelector('#menu-bar');
let navbar = document.querySelector('.navbar');
 

                                        // SIDEBAR HIDE SHOW

$("#menu-bar").click(function(){
    const sidebar = $(".sidebar");
    sidebar.css("display","flex");
});

$(".hide").click(function(){
    const sidebar = $(".sidebar");
    sidebar.css("display","none");
});



//------------------------------------------ Dark/Light Mode 

var lightMode = true;


$(".mode").click(function(){
    if(lightMode===true){
        lightMode=false;
        $(".style").attr("href","darktheme.css");

    }
    else {
        lightMode=true;
        $(".style").attr("href","lightTheme.css");
    }
})


// $("body").css("backgroundColor","white");
   
// var a = $(".style").attr("href");
// console.log(a);

// var a = $(".style").attr("href","darktheme.css");
