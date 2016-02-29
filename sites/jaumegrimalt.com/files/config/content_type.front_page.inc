<?php
/**
 * @file
 * content_type.front_page.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'front_page',
  'name' => 'Front Page',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Front page title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__front_page' => 'variable.field_bundle_settings_node__front_page',
  'variable.language_content_type_front_page' => 'variable.language_content_type_front_page',
  'variable.node_options_front_page' => 'variable.node_options_front_page',
  'variable.node_preview_front_page' => 'variable.node_preview_front_page',
  'variable.node_submitted_front_page' => 'variable.node_submitted_front_page',
);

$optional = array(
  'field.node.body.front_page' => 'field.node.body.front_page',
  'field.node.field_image.front_page' => 'field.node.field_image.front_page',
  'permission.create_front_page_content' => 'permission.create_front_page_content',
  'permission.edit_own_front_page_content' => 'permission.edit_own_front_page_content',
  'permission.edit_any_front_page_content' => 'permission.edit_any_front_page_content',
  'permission.delete_own_front_page_content' => 'permission.delete_own_front_page_content',
  'permission.delete_any_front_page_content' => 'permission.delete_any_front_page_content',
);

$modules = array(
  0 => 'node',
);
