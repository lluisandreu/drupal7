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
                        center: true,
                        animateOut: 'fadeOut',
                        dots: true,
                        autoWidth: true,
                    });
                }

                // Open external links in a new window
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