<?php
/**
 * @file
 * permission.delete_own_front_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete own front content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.front' => 'content_type.front',
);

$optional = array();

$modules = array(
  0 => 'node',
);
