<?php
/**
 * @file
 * file_type.audio.inc
 */

$api = '2.0.0';

$data = $file_type = new stdClass();
$file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
$file_type->api_version = 1;
$file_type->type = 'audio';
$file_type->label = 'Audio';
$file_type->description = 'An <em>Audio</em> file is a sound recording.';
$file_type->mimetypes = array(
  0 => 'audio/*',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'file_entity',
);
