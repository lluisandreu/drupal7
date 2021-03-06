<?php
/**
 * @file
 * metatag_config.node.inc
 */

$api = '2.0.0';

$data = $config = new stdClass();
$config->disabled = FALSE; /* Edit this to true to make a default config disabled initially */
$config->api_version = 1;
$config->instance = 'node';
$config->config = array(
  'title' => array(
    'value' => '[node:title] | [current-page:pager][site:name]',
  ),
  'description' => array(
    'value' => '[node:summary]',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'metatag',
);
