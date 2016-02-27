<?php

/**
 * Implements hook_panels_layouts()
 */
function ths_product_panels_layouts() {
  $items['product'] = array(
    'title' => t('THS Product page'),
    'category' => t('THS'),
    'icon' => 'product.png',
    'theme' => 'product',
    //'admin css' => '../foundation_panels_admin.css',
    'regions' => array(
      'top' => t('Header'),
      'left' => t('Left'),
      'body' => t('Body'),
      'right' => t('Right'),
      'bottom' => t('Extra'),
    ),
  );
  return $items;
}

