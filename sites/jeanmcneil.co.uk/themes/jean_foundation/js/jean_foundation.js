/* Implement custom javascript here */

// We define a function that takes one parameter named $.
(function ($) {

    $(window).load(function () {
        if ($('.owl-slideshow').size()) {
            $('.owl-slideshow').owlCarousel({
                items: 1,
                loop: true,
                autoHeight: true,
            });
        };
    });

}(jQuery));