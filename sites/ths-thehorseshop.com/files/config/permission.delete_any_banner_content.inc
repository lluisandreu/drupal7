<?php
/**
 * @file
 * permission.delete_any_banner_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any banner content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.banner' => 'content_type.banner',
);

$optional = array();

$modules = array(
  0 => 'node',
);
