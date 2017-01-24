/* Implement custom javascript here */

(function ($) {
    Drupal.behaviors.exampleModule = {
        attach: function (context, settings) {
            // Code to be run on page load, and
            // on ajax load added here
            jQuery(document).ready(function ($) {
                if ($('.owl-carousel').size()) {
                    $('.owl-carousel').owlCarousel({
                        items: 1,
                        animateOut: 'fadeOut',
                        dots: true,
                    });
                }
                $('.masonry-grid').masonry({
                    itemSelector: '.grid-item',
                    //fitWidth: true,
                    //columnWidth: 330,
                    percentPosition: true
                });
            });
        }
    };
}(jQuery));