(function ($) {
    jQuery(document).ready(function ($) {
        topBar();
    });

    function topBar() {
        var topbar = $(document.getElementById('topbar'));
        var toggle = topbar.find('.topbar-toggle a');
        toggle.on('click', function (event) {
            event.preventDefault();
            if ($(this).children('i').hasClass('fa-bars')) {
                $(this).children('i').removeClass('fa-bars').addClass('fa-times');
            } else {
                $(this).children('i').removeClass('fa-times').addClass('fa-bars');
            }
            topbar.find('.topbar-menu').toggleClass('expanded');
        });
        var expanded = topbar.find('.expanded');

        expanded.each(function (index, el) {
            var toggleChild = $('<span href="#"><i class="fa fa-plus"></i></span>');
            toggleChild.addClass('toggle-child');
            $(this).append(toggleChild);
            toggleChild.on('click', function (event) {
                event.preventDefault();
                if ($(this).children('i').hasClass('fa-plus')) {
                    $(this).children('i').removeClass('fa-plus').addClass('fa-minus');
                } else {
                    $(this).children('i').removeClass('fa-minus').addClass('fa-plus');
                }
                $(this).siblings('.menu').toggleClass('open');
            });
        });

    }

}(jQuery));