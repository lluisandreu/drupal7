<?php

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