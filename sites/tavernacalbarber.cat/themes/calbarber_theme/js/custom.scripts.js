(function ($) {
    jQuery(document).ready(function($) {
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
        init: function(){}, // Function: Init callback
        open: function(){}, // Function: Open callback
        close: function(){} // Function: Close callback
      });

      var screenWidth = $(window).width();
      if(screenWidth > 1024) {
        $( ".main-content-box").resizable({
            maxHeight: 1000,
            minWidth: 600,
            maxWidth: 1100,
            containment: "body",

        });
      }
      if(screenWidth < 650) {
        $('.menu .expanded > a').attr('href', '#');
        $('.logo a').attr('href', '#');
      }
  });

}(jQuery));