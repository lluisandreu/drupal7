<?php
/**
 * @file
 * variable.field_bundle_settings_commerce_product__product.inc
 */

$api = '2.0.0';

$data = array(
  'name' => 'field_bundle_settings_commerce_product__product',
  'content' => array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'sku' => array(
          'line_item' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'title' => array(
          'line_item' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
        'status' => array(
          'line_item' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  ),
);

$dependencies = array();

$optional = array();

$modules = array();
