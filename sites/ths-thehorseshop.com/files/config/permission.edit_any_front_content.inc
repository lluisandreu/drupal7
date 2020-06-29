<?php
/**
 * @file
 * permission.edit_any_front_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit any front content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.front' => 'content_type.front',
);

$optional = array();

$modules = array(
  0 => 'node',
);
