(() => {

    const batman: string = 'Batman';
    const greenLatern: string = 'Linterna Verde';
    const blackVolvano: string = `Volcan Negro`;

    console.log(`I'm ${ greenLatern }`);

    console.log( batman.toUpperCase() );

    console.log( batman[10]?.toUpperCase() || 'No está presente' );

})();