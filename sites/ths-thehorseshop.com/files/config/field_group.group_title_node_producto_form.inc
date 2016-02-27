<?php
/**
 * @file
 * field_group.group_title_node_producto_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_title|node|producto|form';
$field_group->group_name = 'group_title';
$field_group->entity_type = 'node';
$field_group->bundle = 'producto';
$field_group->mode = 'form';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Título y descripción',
  'weight' => '3',
  'children' => array(
    0 => 'body',
    1 => 'title',
  ),
  'format_type' => 'tab',
  'format_settings' => array(
    'formatter' => 'closed',
    'instance_settings' => array(
      'description' => '',
      'classes' => 'group-title field-group-tab',
      'required_fields' => 1,
    ),
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);
