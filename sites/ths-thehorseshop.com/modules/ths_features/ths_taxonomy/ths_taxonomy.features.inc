<?php
/**
 * @file
 * ths_taxonomy.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ths_taxonomy_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ths_taxonomy_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ths_taxonomy_image_default_styles() {
  $styles = array();

  // Exported image style: categories.
  $styles['categories'] = array(
    'label' => 'Categories thumb',
    'effects' => array(
      14 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'product_image_thumb_desktop',
          'apply_all_effects' => 1,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: categories_large.
  $styles['categories_large'] = array(
    'label' => 'Categories large',
    'effects' => array(
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 550,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
