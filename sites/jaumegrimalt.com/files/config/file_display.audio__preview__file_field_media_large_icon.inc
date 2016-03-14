<?php
/**
 * @file
 * file_display.audio__preview__file_field_media_large_icon.inc
 */

$api = '2.0.0';

$data = $file_display = new stdClass();
$file_display->api_version = 1;
$file_display->name = 'audio__preview__file_field_media_large_icon';
$file_display->weight = 49;
$file_display->status = TRUE;
$file_display->settings = array(
  'image_style' => 'media_thumbnail',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'file_entity',
);
