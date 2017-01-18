<?php
/**
 * @file
 * ths_shop_settings.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function ths_shop_settings_commerce_product_default_types() {
  $items = array(
    'product' => array(
      'type' => 'product',
      'name' => 'Product',
      'description' => 'A basic product type.',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_views_api().
 */
function ths_shop_settings_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
