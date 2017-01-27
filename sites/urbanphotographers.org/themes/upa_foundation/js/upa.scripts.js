/* Implement custom javascript here */

(function ($) {
    Drupal.behaviors.exampleModule = {
        attach: function (context, settings) {
            // Code to be run on page load, and
            // on ajax load added here
            jQuery(document).ready(function ($) {
                menuToggle();

                if ($('.owl-carousel').size()) {
                    $('.owl-carousel').owlCarousel({
                        items: 1,
                        animateOut: 'fadeOut',
                        dots: true,
                    });
                }
            });

            function menuToggle() {
                var toggler = $('#menu-toggler');
                var nav = $('#main-nav');
                toggler.on('click', function (event) {
                    event.preventDefault();
                    nav.toggleClass('expanded');
                });
            }

        }
    };
}(jQuery));