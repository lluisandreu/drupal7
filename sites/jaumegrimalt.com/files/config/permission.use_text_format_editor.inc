<?php
/**
 * @file
 * permission.use_text_format_editor.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'use text format editor',
  'roles' => array(
    0 => 'authenticated user',
    1 => 'administrator',
  ),
);

$dependencies = array(
  'text_format.editor' => 'text_format.editor',
);

$optional = array();

$modules = array(
  0 => 'filter',
);
