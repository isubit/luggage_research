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
