<?php
/**
 * @file
 * david_shop.features.inc
 */

/**
 * Implements hook_views_api().
 */
function david_shop_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function david_shop_image_default_styles() {
  $styles = array();

  // Exported image style: shop_squared.
  $styles['shop_squared'] = array(
    'label' => 'Shop squared',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: zoom_image.
  $styles['zoom_image'] = array(
    'label' => 'Zoom image',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 530,
          'height' => 350,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: zoom_large.
  $styles['zoom_large'] = array(
    'label' => 'Zoom large',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1500,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
