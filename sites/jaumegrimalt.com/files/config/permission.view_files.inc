<?php
/**
 * @file
 * permission.view_files.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'view files',
  'roles' => array(
    0 => 'anonymous user',
    1 => 'authenticated user',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'file_entity',
);
