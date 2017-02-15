/* Implement custom javascript here */

/* Implement custom javascript here */

(function ($) {
    Drupal.behaviors.exampleModule = {
        attach: function (context, settings) {
            // Code to be run on page load, and
            // on ajax load added here
            jQuery(document).ready(function ($) {
                menuToggle();
                frontCarousel();
            });

            function frontCarousel() {
                $('.front-carousel').owlCarousel({
                    margin: 10,
                    items: 1,
                    loop: true,
                    animateOut: 'fadeOut',
                    responsive: {
                        1024: {
                            autoWidth: true,
                            items: 3,
                            center: true,
                        }
                    }
                });
            }

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