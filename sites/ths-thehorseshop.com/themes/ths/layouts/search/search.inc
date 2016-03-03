<?php

/**
 * Implements hook_panels_layouts()
 */
function ths_search_panels_layouts() {
  $items['search'] = array(
    'title' => t('THS Search page'),
    'category' => t('THS'),
    'icon' => 'search.png',
    'theme' => 'search',
    //'admin css' => '../foundation_panels_admin.css',
    'regions' => array(
      'left' => t('Left'),
      'right' => t('Right'),
      'bottom' => t('Extra'),
    ),
  );
  return $items;
}

