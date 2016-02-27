<?php
/**
 * @file
 * content_type.front.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'front',
  'name' => 'Front',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Front title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.node_options_front' => 'variable.node_options_front',
  'variable.node_preview_front' => 'variable.node_preview_front',
  'variable.node_submitted_front' => 'variable.node_submitted_front',
);

$optional = array(
  'field.node.body.front' => 'field.node.body.front',
  'permission.create_front_content' => 'permission.create_front_content',
  'permission.edit_own_front_content' => 'permission.edit_own_front_content',
  'permission.edit_any_front_content' => 'permission.edit_any_front_content',
  'permission.delete_own_front_content' => 'permission.delete_own_front_content',
  'permission.delete_any_front_content' => 'permission.delete_any_front_content',
);

$modules = array(
  0 => 'node',
);
