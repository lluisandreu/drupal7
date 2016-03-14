<?php
/**
 * @file
 * ds_view_modes.taxonomy_teaser.inc
 */

$api = '2.0.0';

$data = $ds_view_mode = new stdClass();
$ds_view_mode->api_version = 1;
$ds_view_mode->view_mode = 'taxonomy_teaser';
$ds_view_mode->label = 'Taxonomy Teaser';
$ds_view_mode->entities = array(
  'taxonomy_term' => 'taxonomy_term',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
