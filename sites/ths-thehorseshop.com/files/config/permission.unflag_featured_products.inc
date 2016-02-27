<?php
/**
 * @file
 * permission.unflag_featured_products.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'unflag featured_products',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'flag',
);
