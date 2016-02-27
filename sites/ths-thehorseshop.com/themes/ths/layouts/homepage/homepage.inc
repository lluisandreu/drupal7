<?php

/**
 * Implements hook_panels_layouts()
 */
function ths_homepage_panels_layouts() {
  $items['homepage'] = array(
    'title' => t('THS Homepage'),
    'category' => t('THS'),
    'icon' => 'homepage.png',
    'theme' => 'homepage',
    //'admin css' => '../foundation_panels_admin.css',
    'regions' => array(
      'top' => t('Featured products'),
      'body' => t('Body'),
      'middle' => t('Brands'),
      'bottom' => t('Product offers') 
    ),
  );
  return $items;
}

