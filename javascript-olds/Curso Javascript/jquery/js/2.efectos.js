$(document).ready(function(){

	//https://api.jquery.com/category/effects/ 
	//Para más efectos

	const myEffect = () => {
		
		//Ocultar y mostrar elemento

		// $('#segundo').hide();
		// $('#segundo').show();

		//Alternar entre ocultar y mostrar

		// $('#segundo').toggle(2000, () => { //Esto es un callback
		// 	alert('Ya pasó los 2 segundos');
		// });

// --------------------------------------------------------------------


	//Efecto fadeOut

	// $('#segundo').fadeOut(1000);

	//Efecto fadeIn

	// $('#segundo').fadeIn(1000);

	//Ambos

	// $('#segundo').fadeToggle(2000);

// --------------------------------------------------------------------

	//Efecto slideUp

	// $('#segundo').slideUp(2000);

	//Efecto slideDown

	// $('#segundo').slideDown(2000);

	//Ambos

	$('#segundo').slideToggle(2000);



	};

	const boton = $('#boton');

	boton.click(myEffect);

});