<?php
/**
 * @file
 * permission.create_panel_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create panel content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.panel' => 'content_type.panel',
);

$optional = array();

$modules = array(
  0 => 'node',
);
