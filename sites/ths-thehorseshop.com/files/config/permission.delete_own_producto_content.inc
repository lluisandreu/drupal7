<?php
/**
 * @file
 * permission.delete_own_producto_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete own producto content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.producto' => 'content_type.producto',
);

$optional = array();

$modules = array(
  0 => 'node',
);
