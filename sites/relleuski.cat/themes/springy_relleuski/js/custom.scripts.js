(function($) {

    $(document).ready(function() {

        var winWidth = $(window).width();
        var winHeight = $(window).height();
        var navHeight = $('#navigation').height();

        smoothScroll('nav ul.menu li a', navHeight);

        $('.front-hero h2, .front-hero p').addClass('active');

    });

    function smoothScroll(element, navH) {
        var element = $(element);
        element.click(function() {
            if (location.pathname.replace(/^\//, '') == this.pathname.replace(/^\//, '') && location.hostname == this.hostname) {
                var target = $(this.hash);
                target = target.length ? target : $('[name=' + this.hash.slice(1) + ']');
                if (target.length) {
                    $('html,body').animate({
                        scrollTop: target.offset().top - navH
                    }, 1000);
                    return false;
                }
            }
        });
    }

}(jQuery));