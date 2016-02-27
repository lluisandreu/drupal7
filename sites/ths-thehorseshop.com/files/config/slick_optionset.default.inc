<?php
/**
 * @file
 * slick_optionset.default.inc
 */

$api = '2.0.0';

$data = $preset = new stdClass();
$preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
$preset->api_version = 1;
$preset->name = 'default';
$preset->label = 'Default';
$preset->breakpoints = 0;
$preset->skin = '';
$preset->options = array(
  'general' => array(
    'goodies' => array(),
  ),
  'settings' => array(
    'mobileFirst' => FALSE,
    'asNavFor' => '',
    'accessibility' => TRUE,
    'adaptiveHeight' => FALSE,
    'autoplay' => FALSE,
    'autoplaySpeed' => 3000,
    'pauseOnHover' => TRUE,
    'pauseOnDotsHover' => FALSE,
    'arrows' => TRUE,
    'appendArrows' => '$(element)',
    'prevArrow' => '<button type="button" data-role="none" class="slick-prev" aria-label="previous">Previous</button>',
    'nextArrow' => '<button type="button" data-role="none" class="slick-next" aria-label="next">Next</button>',
    'centerMode' => FALSE,
    'centerPadding' => '50px',
    'dots' => FALSE,
    'dotsClass' => 'slick-dots',
    'appendDots' => '$(element)',
    'draggable' => TRUE,
    'fade' => FALSE,
    'focusOnSelect' => FALSE,
    'infinite' => TRUE,
    'initialSlide' => 0,
    'lazyLoad' => 'ondemand',
    'respondTo' => 'window',
    'rtl' => FALSE,
    'rows' => 1,
    'slidesPerRow' => 1,
    'slide' => '',
    'slidesToShow' => 1,
    'slidesToScroll' => 1,
    'speed' => 500,
    'swipe' => TRUE,
    'swipeToSlide' => FALSE,
    'edgeFriction' => 0.34999999999999997779553950749686919152736663818359375,
    'touchMove' => TRUE,
    'touchThreshold' => 5,
    'useCSS' => TRUE,
    'cssEase' => 'ease',
    'cssEaseBezier' => '',
    'cssEaseOverride' => '',
    'useTransform' => FALSE,
    'easing' => 'linear',
    'variableWidth' => FALSE,
    'vertical' => FALSE,
    'verticalSwiping' => FALSE,
    'waitForAnimate' => TRUE,
    'mousewheel' => FALSE,
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'slick',
);
