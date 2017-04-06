/* Implement custom javascript here */

(function ($) {

    $(document).ready(function () {

        toggleMenu();

        $('.site-search a').on('click', function (event) {
            event.preventDefault();
            if ($(this).find('i').hasClass('fa-search')) {
                $(this).find('i').removeClass('fa-search').addClass('fa-times');
            } else {
                $(this).find('i').removeClass('fa-times').addClass('fa-search');
            }
            $('.search-block').toggleClass('expanded');
        });
    });

    function toggleMenu() {
        var toggle = $(document.getElementById('toggle-menu'));
        toggle.on('click', function (event) {
            event.preventDefault();
            var menu = $(document.getElementById('main-menu'));
            var shopMenu = $(document.getElementById('shop-menu'));
            menu.toggleClass('expanded');
            shopMenu.toggleClass('expanded');
            if ($(this).find('.fa').hasClass('fa-bars')) {
                $(this).find('.fa').removeClass('fa-bars').addClass('fa-times');
            } else {
                $(this).find('.fa').removeClass('fa-times').addClass('fa-bars');
            }
        });
    }

}(jQuery));