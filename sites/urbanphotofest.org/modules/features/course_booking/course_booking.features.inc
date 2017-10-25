<?php
/**
 * @file
 * course_booking.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function course_booking_commerce_product_default_types() {
  $items = array(
    'course' => array(
      'type' => 'course',
      'name' => 'Course',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function course_booking_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "commerce_autosku" && $api == "autosku_pattern") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function course_booking_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function course_booking_node_info() {
  $items = array(
    'course' => array(
      'name' => t('Course'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Course title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
