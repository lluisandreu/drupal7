<?php
/**
 * @file
 * proveedores.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function proveedores_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|brands|default';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'brands';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '<p>',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['taxonomy_term|brands|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|brands|taxonomy_teaser';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'brands';
  $ds_fieldsetting->view_mode = 'taxonomy_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h4',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['taxonomy_term|brands|taxonomy_teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function proveedores_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|brands|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'brands';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-foundation_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'middle' => array(
        0 => 'field_taxonomy_image',
        1 => 'title',
      ),
    ),
    'fields' => array(
      'field_taxonomy_image' => 'middle',
      'title' => 'middle',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'middle' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['taxonomy_term|brands|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|brands|taxonomy_teaser';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'brands';
  $ds_layout->view_mode = 'taxonomy_teaser';
  $ds_layout->layout = 'panels-foundation_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'middle' => array(
        0 => 'field_taxonomy_image',
        1 => 'title',
      ),
    ),
    'fields' => array(
      'field_taxonomy_image' => 'middle',
      'title' => 'middle',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'middle' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['taxonomy_term|brands|taxonomy_teaser'] = $ds_layout;

  return $export;
}
