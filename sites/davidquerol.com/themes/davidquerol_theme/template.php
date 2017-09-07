<?php

function davidquerol_theme_preprocess_html($variables) {
	$fontawesome = "https://use.fontawesome.com/88826c71d5.js";

	drupal_add_js($fontawesome, array('type' => 'external'));
	drupal_add_js("//s7.addthis.com/js/300/addthis_widget.js#pubid=ra-54734cc76e9f99b6", array('type' => 'external'));
}


function davidquerol_theme_breadcrumb($variables) {
 $breadcrumb = $variables['breadcrumb'];

  if (!empty($breadcrumb)) {
  	$title = drupal_get_title();
  	$breadcrumb[] = $title;
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

    $output .= '<div class="breadcrumb">' . implode(' / ', $breadcrumb) . '</div>';
    return $output;
  }
}