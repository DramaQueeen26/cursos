$(document).ready(function(){

	// css('background', '#ccc');


	//Seleccionar elemento padre
	$('#segundo').parent(); 

	//Seleccionar elementos padre (TODOS)
	$('#segundo').parents(); 

	//Seleccionar elementos hijos
	$('.contenedor').children(); 

	//Seleccionar hijo específico de un elemento
	$('.contenedor').children('#segundo'); 

	//Seleccionar elementos dentro de un elemento que no sean necesariamente hijos directos
	$('body').find('.texto'); 	

	//Seleccionar elementos hermanos de un elemento
	$('#segundo').siblings(); 

	//Seleccionar el elemento anterior	
	$('#segundo').prev().css('background', '#ccc'); 
	$('#segundo').prevAll().css('background', '#ccc'); //Todos los elementos 


	//Seleccionar el elemento siguiente
	$('#segundo').next().css('background', '#ccc'); 
	$('#segundo').nextAll().css('background', '#ccc');  //Todos los elementos


});