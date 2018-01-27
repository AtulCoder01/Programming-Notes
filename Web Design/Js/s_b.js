function fun()
{
var y=document.all.b2.style.background
document.all.b2.style.background=document.all.b1.style.background
document.all.b1.style.color='white'
document.all.b1.style.background=y
document.all.b2.style.color='white'
var x=document.all.b1.value
document.all.b1.value=document.all.b2.value
document.all.b2.value=x
}
