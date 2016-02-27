<?php
/**
 * @file
 * permission.use_text_format_editor.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'use text format editor',
  'roles' => array(),
);

$dependencies = array(
  'text_format.editor' => 'text_format.editor',
);

$optional = array();

$modules = array(
  0 => 'filter',
);
