<?php
/**
 * @file
 * text_format.editor.inc
 */

$api = '2.0.0';

$data = (object) array(
  'format' => 'editor',
  'name' => 'Editor',
  'cache' => '1',
  'status' => '1',
  'weight' => '0',
  'filters' => array(
    'filter_url' => array(
      'weight' => '0',
      'status' => '1',
      'settings' => array(
        'filter_url_length' => 72,
      ),
    ),
    'filter_autop' => array(
      'weight' => '2',
      'status' => '1',
      'settings' => array(),
    ),
    'filter_htmlcorrector' => array(
      'weight' => '10',
      'status' => '1',
      'settings' => array(),
    ),
  ),
);

$dependencies = array();

$optional = array(
  'permission.use_text_format_editor' => 'permission.use_text_format_editor',
);

$modules = array(
  0 => 'filter',
);
