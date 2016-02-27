<?php

/**
 * Implements hook_panels_layouts()
 */
function ths_taxonomy_panels_layouts() {
  $items['taxonomy'] = array(
    'title' => t('THS Taxonomy'),
    'category' => t('THS'),
    'icon' => 'taxonomy.png',
    'theme' => 'taxonomy',
    //'admin css' => '../foundation_panels_admin.css',
    'regions' => array(
      'left' => t('Taxonomy description'),
      'right' => t('Taxonomy image'),
      'body' => t('Products in taxonomy'),
      'bottom' => t('Extra content') 
    ),
  );
  return $items;
}

