<?php
/**
 * @file
 * file_display.audio__teaser__file_field_file_audio.inc
 */

$api = '2.0.0';

$data = $file_display = new stdClass();
$file_display->api_version = 1;
$file_display->name = 'audio__teaser__file_field_file_audio';
$file_display->weight = 50;
$file_display->status = TRUE;
$file_display->settings = array(
  'controls' => 1,
  'autoplay' => 0,
  'loop' => 0,
  'multiple_file_behavior' => 'tags',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'file_entity',
);
