let a = document.getElementById("he");
a.style.backgroundColor = "orange"
a.style.textAlign = "center"

let b = document.getElementById("he2");
b.style.color = "orange"
b.style.textAlign = "center"

let c = document.getElementsByClassName("c1")
for (let i = 0; i < c.length; i++) {
    c[0].style.color = "green"
    c[1].style.color = "purple"
    c[2].style.color = "yellow"
    c[i].style.fontFamily = "Arial";

}
let d = document.getElementsByTagName("h4")
for (let i = 0; i < c.length; i++) {
    d[i].style.backgroundColor = "aqua";
    d[i].style.fontSize = "25px";
    d[i].style.fontWeight = "bold";
    d[i].style.fontStyle = "italic";
}