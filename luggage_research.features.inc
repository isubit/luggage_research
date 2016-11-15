<?php
/**
 * @file
 * luggage_research.features.inc
 */

/**
 * Implements hook_default_cer().
 */
function luggage_research_default_cer() {
  $items = array();
  $items['node:project:field_project_people*node:people:field_people_projects'] = entity_import('cer', '{
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_left" : { "und" : [ { "path" : "node:project:field_project_people" } ] },
    "cer_right" : { "und" : [ { "path" : "node:people:field_people_projects" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "identifier" : "node:project:field_project_people*node:people:field_people_projects",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_views_api().
 */
function luggage_research_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function luggage_research_image_default_styles() {
  $styles = array();

  // Exported image style: scale200wide.
  $styles['scale200wide'] = array(
    'label' => 'scale200wide',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 200,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
