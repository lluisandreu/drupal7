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

        $('.project-media-colorbox img').each(function (index, el) {
            $(this).colorbox({
                rel: 'gal',
                href: function () {
                    var url = $(this).attr('src');
                    return url;
                },
                title: function () {
                    return $(this).attr('title');
                },
                current: "image {current} of {total}"
            });
        });

        var $carr = $('.project-media-slideshow .field-items');
        $carr.on('init', function (event, slick) {
            var counter = $('<div class="slick-counter" />');
            counter.text("1/" + slick.slideCount);
            $carr.append(counter);
            console.log(slick);
        });

        $carr.slick({
            infinite: true,
            arrows: true,
            //dots: true,
            adaptiveHeight: true,
            slidesToShow: 1,
            slidesToScroll: 1,
        });


        $carr.on('afterChange', function (event, slick, currentSlide) {
            $(this).find('.slick-counter').text((currentSlide + 1) + '/' + slick.slideCount);

        });

        /// Accordion menu

        var menu = $('#block-menu-block-1');
        menu.find('.nolink').on('click', function (event) {
            event.preventDefault();
            $(this).closest('li').toggleClass('collapsed');
        });
        menu.find('.menu-block-1>ul>li>a').on('click', function (event) {
            event.preventDefault();
            $(this).closest('li').toggleClass('collapsed');
        });

    });

}(jQuery));