<?php
/**
 * @file
 * vocabulary.product_categories.inc
 */

$api = '2.0.0';

$data = (object) array(
  'vid' => '1',
  'name' => 'Categorías',
  'machine_name' => 'product_categories',
  'description' => '',
  'hierarchy' => '1',
  'module' => 'taxonomy',
  'weight' => '0',
  'language' => 'und',
  'i18n_mode' => '1',
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'taxonomy',
);
