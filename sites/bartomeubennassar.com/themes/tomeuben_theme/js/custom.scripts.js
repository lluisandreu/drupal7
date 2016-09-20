(function ($) {
    jQuery(document).ready(function ($) {
        var nav = responsiveNav(".nav-collapse", { // Selector
            animate: false, // Boolean: Use CSS3 transitions, true or false
            transition: 50, // Integer: Speed of the transition, in milliseconds
            label: "Menu", // String: Label for the navigation toggle
            insert: "before", // String: Insert the toggle before or after the navigation
            customToggle: "", // Selector: Specify the ID of a custom toggle
            closeOnNavClick: false, // Boolean: Close the navigation when one of the links are clicked
            openPos: "relative", // String: Position of the opened nav, relative or static
            navClass: "nav-collapse", // String: Default CSS class. If changed, you need to edit the CSS too!
            navActiveClass: "js-nav-active", // String: Class that is added to  element when nav is active
            jsClass: "js", // String: 'JS enabled' class which is added to  element
            init: function () {}, // Function: Init callback
            open: function () {}, // Function: Open callback
            close: function () {} // Function: Close callback
        });

        // Open external links in a new tab
        $('a').each(function () {
            var a = new RegExp('/' + window.location.host + '/');
            if (!a.test(this.href)) {
                $(this).click(function (event) {
                    event.preventDefault();
                    event.stopPropagation();
                    window.open(this.href, '_blank');
                });
            }
        });

        $('.language-selector a').on('click', function(event) {
           event.preventDefault();
           $('.language-selector a').removeClass('active');
           if($(this).hasClass('cat')) {
            $(this).addClass('active');
            $('.field-name-body').show();
            $('.field-name-field-body-es, .field-name-field-body-en').hide();
           } else if($(this).hasClass('es')) {
            $(this).addClass('active');
            $('.field-name-field-body-es').show();
            $('.field-name-body, .field-name-field-body-en').hide();
           } else if($(this).hasClass('en')) {
            $(this).addClass('active');
            $('.field-name-field-body-en').show();
            $('.field-name-field-body-es, .field-name-body').hide();
           }
        });

    });

}(jQuery));