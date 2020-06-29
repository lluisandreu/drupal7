<?php
/**
 * @file
 * permission.create_banner_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create banner content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.banner' => 'content_type.banner',
);

$optional = array();

$modules = array(
  0 => 'node',
);
