(function ($) {
    jQuery(document).ready(function ($) {

        var nav = responsiveNav(".nav-collapse", { // Selector
            //animate: true, // Boolean: Use CSS3 transitions, true or false
            transition: 0, // Integer: Speed of the transition, in milliseconds
            //insert: "before", // String: Insert the toggle before or after the navigation
            customToggle: "#nav-toggle", // Selector: Specify the ID of a custom toggle
            closeOnNavClick: false, // Boolean: Close the navigation when one of the links are clicked
            openPos: "relative", // String: Position of the opened nav, relative or static
            navClass: "opened", // String: Default CSS class. If changed, you need to edit the CSS too!
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

        // Slick carrousel
        var container = $('.project-media-slideshow');
        var $carr = $('.project-media-slideshow .field-items, .project-media-slideshow .view-content');
        $carr.on('init', function (event, slick) {
            var counter = $('<div class="slick-counter" />');
            counter.text("1/" + slick.slideCount);
            $carr.append(counter);
        });

        $carr.slick({
            infinite: true,
            arrows: true,
            //dots: true,
            adaptiveHeight: true,
            slidesToShow: 1,
            slidesToScroll: 1,
            cssEase: "linear"
        });


        if (container.hasClass('auto')) {
            $carr.slick("slickSetOption", "autoplay", true);
            $carr.slick("slickSetOption", "draggable", false);
            $('.slick-arrow').hide();
            $carr.slick("slickPlay");
        }

        if (container.hasClass('fade')) {
            $carr.slick("slickSetOption", "autoplay", true);
            $carr.slick("slickSetOption", "draggable", false);
            $('.slick-arrow, .slick-counter').hide();
            $carr.slick("slickPlay");
        }


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
            console.log($(this).siblings('.menu').length);
            if($(this).siblings('.menu').length) {
                event.preventDefault();
                $(this).closest('li').toggleClass('collapsed');
            }
            
        });
        menu.find('li.expanded').each(function (index, el) {
            $(this).append('<a href="#" class="arrow-toggle"><i class="fa fa-caret-right"></i></a>');
        });

        $('.arrow-toggle').on('click', function (event) {
            event.preventDefault();
            $(this).closest('li').toggleClass('collapsed');
            if ($(this).find('i').hasClass('fa-caret-right')) {
                $(this).find('i').removeClass('fa-caret-right').addClass('fa-caret-down');
            } else {
                $(this).find('i').removeClass('fa-caret-down').addClass('fa-caret-right');
            }
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

        // Language switcher
        $('.language-switcher a').on('click', function(event) {
            event.preventDefault();
            $('.language-switcher a').removeClass('active');
            $(this).addClass('active');
            $('.language-description').removeClass('selected');
            var lang = $(this).attr('href').split('#')[1];
            $('.language-description[data-language="' + lang + '"]').addClass('selected');
        });

    });

}(jQuery));